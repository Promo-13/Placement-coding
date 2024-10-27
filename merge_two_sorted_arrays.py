arr1 = [1,2,5,9]
arr2 = [3,4,5,6,9]
res = []
i, j = 0, 0
while i < len(arr1) and j < len(arr2):
    if arr1[i] < arr2[j]:
        res.append(arr1[i])
        i+=1
    else:
        res.append(arr2[j])
        j+=1
if i < len(arr1):
    res.extend(arr1[i:])
if j < len(arr2):
    res.extend(arr2[j:])
print(res)
