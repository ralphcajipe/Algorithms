import matplotlib.pyplot as plt


def ball_trajectory(x):
    """A function for calculating the trajectory of a ball"""
    location = 10 * x - 5 * (x ** 2)
    return location


"""Plotting a hypothetical ball traectory between the moment it is thrown 
(at x = 0) and when it hits the ground again (at x = 2)"""
xs = [x / 100 for x in list(range(201))]
ys = [ball_trajectory(x) for x in xs]
plt.plot(xs, ys)
plt.title('The Trajectory of a Thrown Ball')
plt.xlabel('Horizontal Position of Ball')
plt.ylabel('Vertical Position of Ball')
plt.axhline(y=0)
plt.show()
