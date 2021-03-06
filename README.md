# dead-time-logic-of-nuclear-detectors
 1. basic description:
 
 For detection systems that record discrete events, such as particle and nuclear detectors, the dead time is the time after each
 event when the system is not able to record another event. This work is focused on dead time handling and the subsequent count loss
 estimation. The dead time is the minimum amount of time required between two events to permit detection of those events individually
 by processing chains. If events occur during the system dead time, they are lost. Such lost information can be important in many
 applications including high-precision spectroscopy, positron emission tomography (PET), and the scanning of spent nuclear fuel.
 Thus this work included a comprehensive review of dead time models I. paralizable and II. non-paralizable logics with C++
 implementation in Visual Studio.

 2. Poisson distribution of incoming events
 
 During nuclear processes (for example beta-decay which producing gamma-photons), it is true that the number of occurring events
 within a unit of time (eg. second) follows a Poisson distribution. In probability theory and statistics, the Poisson distribution
 is a discrete probability distribution that expresses the probability of a given number of events occurring in a fixed interval
 of time and/or space if these events occur with a known average rate and independently of the time since the last event. The
 Poisson distribution is an appropriate model for event handling if the following assumptions are true: I. events occur independently,
 II. the rate at which events occur is constant, III. two events cannot occur at exactly the same time, IV. the probability of 
 an event in an interval is proportional to the length of the interval. Applications of the Poisson distribution can be found
 in many fields related to counting: telecommunication example when telephone calls arriving in a system, astronomy example:
 photons arriving at a telescope, biology example: the number of mutations on a strand of DNA per unit length, management
 example: customers arriving at a  counter or call centre, finance and insurance example: number of losses/claims occurring in
 a given period of time, earthquake seismology example: an asymptotic Poisson model of seismic risk for large earthquakes, 
 radioactivity example: number of decays in a given time interval in a radioactive sample.

 3. generating arrival times with Poisson distribution:
 
 For example in a beta-decay which producing gamma-photons in nucler detectors, the time of the incoming events should be recorded
 by an electronic processing chain. The arrival times of events are elements of an increasing geometric series. The series is
 increasing with the follow-up time. The follow-up time is changing in an interval as a random variable which follows a
 Poisson distribution. The follow-up values are generated with the Poisson Distribution class template from random header file.
 The generated fullow-up time numbers are trully Poisson distributed. It can be checked in Excell by making a histogram of
 them.
 
 The following steps are needed to simulate the experiment:
 
 a. make an increasing geometric series with fullow-up time with Poisson distribution
 b. check follow-up time numbers weater it is really Poisson distributed
 c. open deadtime window to control pile-up events
 d. make loss estimation
 
 4. opening dead time window
 
 Lets say that in the current processing chain if an icoming event accures then the electronics need some time (it is
 called the Dead Time) for example to integrate the signal to see its energy and to empty the registers in the physical
 detector. After this procedure the system is ready to handle the next event. If two events arrives between the system Dead
 Time then the integration process will not be succesful since the signal shape is not recognizable anymore. This is called
 the Pile-Up effect. So to avoid Pile-Up effect a Dead Time windows must be opened. If the mean value of the Poisson
 distributed arrival times is t then it means the probability of the fullow up time will be average t. If the event number is 
 a large number then it is a good estimation to say the average is equal to the mean value. So t_dead<t is 
 a good selection    
 
 
 






