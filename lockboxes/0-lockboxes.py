#!/usr/bin/python3
"""method that determines """
"""if all the boxes can be opened."""


def canUnlockAll(boxes):
    """return True if all boxes can be unlocked"""
    unlocked = [False] * len(boxes)
    unlocked[0] = True
    keys = boxes[0]

    for key in keys:
        if key < len(boxes) and not unlocked[key]:
            unlocked[key] = True
            keys += boxes[key]

    return all(unlocked)
