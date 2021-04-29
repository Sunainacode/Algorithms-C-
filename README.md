## ALGORITHMS-C++


1. [ Description. ](#desc)
2. [ Usage tips. ](#usage)
3. [ Motivation. ](#motive)
4. [ Tech-stack. ](#tecst)
5. [ Explanations. ](#expl)
            1. [ Linear Search. ](#ls)
            2. [ Binary Search. ](#bs)
            3. [ Jump Search. ](#js) 

<a id="desc"></a>
## 1. Description
The whole purpose of this repository is to keep making a consistent effort in understanding algorithms as much as possible. I could have kept the repository as a private one but I believe that every person who is new to algorithms must go through this repository first before going for any vast courses online or any professor. I am not saying this because the codes here are perfect. I am saying this because I have written these codes on my own and I am a newbie. These codes might not function well when the constraint range is increased but they are good for understanding purpose. 
<br>
Here I am writing some short descriptions about each algorithm as per my understanding. You are free to correct me anytime you feel like and you know what to do for that ;)(Just drop a PR!).

<a id="usage"></a>
## 2. Usage tips
The codes are pretty easy to use. Just paste any of these as per requirement in your IDE(Integrated Development Environment) or any online editor like <a href="www.onlinegdb.com"> Online GDB </a> Press the run button. Provide the inputs (The input commands are self-explanatory!) and press the Run button. (I know I am explaining as if you are a non-tech domain person.. But please bear with me xD).

<a id="motive"></a>
## 3. Motivation
The only motivation is to learn and help learn. What could be a better platform for that other than github?

<a id="tecst"></a>
## 4. Tech-stack
The only tech-stack that you need to have for understanding these codes are: C++ Programming Language.

<a id="expl"></a>
## 5. Explanations
<br>
<a id="ls"></a>
# Linear Search
Linear Search is a searching algorithm that searches for a particular element in an array in a serial order. For example: Let us assume that there are 10 elements in an array. To search for a particular element, there will be a loop that will check each index(position) of the array and print the position where the element is found.
<a id="bs"></b>
# Binary Search
Binary Search is another searching algorithm that performs the same function as linear search but the time complexity(in simpler words: amount of time taken to complete the task) is lesser. Binary search searches an element faster than linear search when the array size increases. The only requirement of binary search is that the array must be in ascending order in which the searching is to be performed.
<a id="js"></a>
# Jump Search
Jump Search is a faster algorithm than Binary search. It is just a modified form of binary search where a small range of numbers are found in which the desired number lies by jumping some indexes in between. Then the desired index is found out by using linear search in that particular small range.
