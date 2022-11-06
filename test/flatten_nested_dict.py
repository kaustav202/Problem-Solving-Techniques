sample1 = {"a": {"b": ["1", 2]}, "c": ["2, 2"] , "b": {"x": ["a"], "b": {"x": {"z": ["1-2"]}}}}

sample2 = {"l": {"m": [10, 2], "n":[5,"b"] }, "k": {"p": {"q": ("a"), "r": {"s": {"t": ["6-5-4"]}}}}}


res = {}

def flatten_dict(d,last = ''):
    temp = last
    for k in list(d.keys()):
        curr = str(k)
        last = temp + curr
        if type(d[k]) == dict:
            flatten_dict(d[k], last)
        elif type(d[k]) == list:
            last =  ('-').join(list(last))
            res[last] = d[k]

         
flatten_dict(sample1)

print(res)
  
flatten_dict(sample2)

print(res)
