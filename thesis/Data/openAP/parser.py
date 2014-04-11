import random

class AP(object):

    def __init__(self):
        self.points = []

    def add(self,latitude, longitude, rssi):
        self.points.append((latitude,longitude,rssi))
    
    def calculate_position(self):
        latitude = 0
        longitude = 0
        total = 0
        for (lat,long,rssi) in self.points:
            latitude += lat*-rssi
            longitude += long*-rssi
            total += -rssi
        return (float(latitude)/float(total), float(longitude) / float(total),float(total)/len(self.points))

def print_list(l):
    counter = 0
    output = []
    for (l1,l2,s) in l:
        output.append("**.ap[" + str(counter) + "].id = " + str(counter))
        output.append("**.ap[" + str(counter) + "].y = " + str(l1))
        output.append("**.ap[" + str(counter) + "].x = " + str(l2))
        counter += 1 
    print output
        
aps = {}

with open('openAP') as f:
    for line in f:
        #0 - ID
        #1 - DATE
        #2 - LOCATION_ACCURACY
        #3 - LATITUDE
        #4 - LONGITUDE
        #5 - SPEED
        #6 - LOCATION PROVIDER
        #7 - RSSI
        #8 - SSID
        #9 - FREQUENCY
        #10 - CHANNEL
        #11 - BSSID
        #12 - APMANUFACTURE
        #13 - CAPABILITIES
        parts = line.split(",")
        bssid = parts[11]
        latitude = int(parts[3])
        longitude = int(parts[4])
        latitude = float(latitude) / 1000000
        longitude = float(longitude) / 1000000
        rssi = int(parts[7])
        if bssid not in aps:
            aps[bssid] = AP()
        aps[bssid].add(latitude,longitude,rssi)

valid = []

total_count = 0
for (k,v) in aps.iteritems():
    total_count += 1
    (l1,l2,s) = v.calculate_position()
    if s > 100:
        valid.append((l1,l2,s))
        print l1,l2
print "Total:",total_count
print "Number:",len(valid)


list1 = []
list2 = []
list3 = []
list4 = []
list5 = []
random.shuffle(valid)
for x in valid:
    list1.append(x)

random.shuffle(valid)
for x in valid:
    list2.append(x)

random.shuffle(valid)
for x in valid:
    list3.append(x)

random.shuffle(valid)
for x in valid:
    list4.append(x)

random.shuffle(valid)
for x in valid:
    list5.append(x)

print_list(list1[:50])
print_list(list2[:50])
print_list(list3[:50])
print_list(list4[:50])
print_list(list5[:50])
        
