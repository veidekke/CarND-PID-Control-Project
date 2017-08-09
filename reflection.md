# Udacity SDCND -- Term 2 -- Project 4: PID Controller
#### Stephan Brinkmann

## What the parameters mean

The proportional parameter Kp determines how hard to steer back to the center depending on the cross-track error (CTE).

The integral parameter Ki helps dealing with bias, i.e. drift.

The derivative parameter Kd determines how strong the oscillation around the center is.

## How the parameters were chosen

Instead of a Twiddle algorithm (which was discarded because the simulation has a long runtime), manual trial-and-error was used.

I started with reasonable initial values for the parameters based on the Q&A (Kp=0.25, Ki=0, Kd=0.75). From there, I first adjusted Kp, then Ki, then Kd. Of course there a correlations, so I regularly went back to readjust the other parameters to work well with the new value.

I initially started with big adjustments (up to an order of magnitude), and then made the changes smaller and smaller as I went (kind of how Twiddle works).

For fine tuning, I especially tried to use my understanding of what "part" of the steering each parameter influences to decide which parameter to tune, and in what direction.

The final parameters chosen are:
* Kp = -0.2;
* Ki = -0.0001;
* Kd = -2;
