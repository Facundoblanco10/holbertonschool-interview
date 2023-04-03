#!/usr/bin/python3
"""method that determines """
"""if all the boxes can be opened."""


def canUnlockAll(boxes):
    """return True if all boxes can be unlocked"""
    res = True
    l_keys = []
    for i in boxes[0]:
        l_keys.append(i)
    for idx, box in enumerate(boxes):
        if idx == 0:
            continue
        elif idx in l_keys:
            for i in box:
                l_keys.append(i)
                res = True
        else:
            res = False
    
    print(l_keys)

    return res
