#define cube(x) x* x* x
#define time2min(h, m) (60 * (h) + (m))
#define min2time(mm, h, m) (h = (mm) / 60) / (m = (mm) % 60)

y = cube(2);  // y = 2*2*2;
