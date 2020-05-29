class Solution:
    def angleClock(self, hour: int, minutes: int) -> float:
        h=hour*30
        m=minutes*5.5
        x=abs(h-m)
        if x>180:
            x=360-x
        return x
        