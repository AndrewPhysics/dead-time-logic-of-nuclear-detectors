# dead-time-logic-of-nuclear-detectors
 1. basic description:
 
 For detection systems that record discrete events, such as particle and nuclear detectors, the dead time is the time after each event during which the system is not able to record another event. An everyday life example of this is what happens when someone takes a photo using a flash, another picture cannot be taken immediately afterward because the flash needs a few seconds to recharge. This work is focused on dead time and the subsequent count loss estimation. The dead time is the minimum amount of time required between two events to permit detection or  of those events individually by a processing chains. If events occur during the system dead time, they are lost. Such lost information can be important in many applications including high-precision spectroscopy, positron emission tomography (PET), and the scanning of spent nuclear fuel. Understanding of the behavior of radiation detection systems is important; thus this work included a comprehensive review of dead time models 1. paralizable and 2. non-paralizable logics with C++ implementation in Visual Studio.
 
 2. Poisson distribution of incoming events
 
 During nuclear processes (for example beta-decay which producing gamma-photons), it is true that the number of occurring events within a unit of time (eg. second) follows a Poisson distribution. In probability theory and statistics, the Poisson distribution is a discrete probability distribution that expresses the probability of a given number of events occurring in a fixed interval of time and/or space if these events occur with a known average rate and independently of the time since the last event.
 
 The Poisson distribution is an appropriate model if the following assumptions are true.

 - x is the number of times an event occurs in an interval and x can take values 0, 1, 2, …
 - The occurrence of one event does not affect the probability that a second event will occur. That is, events occur independently.
 - The rate at which events occur is constant. The rate cannot be higher in some intervals and lower in other intervals.
 - Two events cannot occur at exactly the same instant.
 - The probability of an event in an interval is proportional to the length of the interval.

 Applications of the Poisson distribution can be found in many fields related to counting:

 - Telecommunication example: telephone calls arriving in a system.
 - Astronomy example: photons arriving at a telescope.
 - Biology example: the number of mutations on a strand of DNA per unit length.
 - Management example: customers arriving at a counter or call centre.
 - Finance and insurance example: number of Losses/Claims occurring in a given period of Time.
 - Earthquake seismology example: an asymptotic Poisson model of seismic risk for large earthquakes. (Lomnitz, 1994).
 - Radioactivity example: number of decays in a given time interval in a radioactive sample.

