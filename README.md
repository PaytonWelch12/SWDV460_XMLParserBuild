<h1>XML Parser - Code Deployments</h1>


<h2>Description</h2>
This project was used as practice for setting up manual and automatic builds on Jenkins. It uses a simple XML parser that uses the Xerces Library, a sample XML document provided by Windows, and a simple make file to build the program. During this project, I had to create two AWS instances. One was a public RedHat Instance and the other was a Windows 10 instance. They have both been shut down since I began to exceed AWS's free services. However, I used both RedHat and Cygwin to build the parser, and on the Windows instance, I set manual and automatic builds through Jenkins which was hosted on my Windows instance.
<br />


<h2>Languages and Utilities Used</h2>
- <b>AWS</b>
- <b>Jenkins</b>
- <b>C++</b> 
- <b>XML</b>
- <b>Xerces XML Library</b>
- <b>GCC</b>

<h2>Environments Used </h2>

- <b>Windows 10 AWS EC2 Instance</b>
- <b>Red Hat AWS EC2 Instance</b>

<h2>Program walk-through:</h2>

<p align="center">
  
GCC Setup on Redhat<br/><br/>
<img src="https://i.imgur.com/Ney8Gle.jpeg" height="80%" width="80%" alt="Disk Sanitization Steps"/>
  
<br />

Xerces Library Install on Cygwin <br/><br/>
<img src="https://i.imgur.com/ZOlXLXs.jpeg" height="80%" width="80%" alt="Disk Sanitization Steps"/>

<br />

Test Build On RedHat <br/><br/>
<img src="https://i.imgur.com/EjbkBy5.jpeg" height="80%" width="80%" alt="Disk Sanitization Steps"/>

<br />

Jenkins Builds - Manual and Automatic <br/><br/>
<img src="https://i.imgur.com/OfOQolf.jpeg" height="80%" width="80%" alt="Disk Sanitization Steps"/>

<br />

Build on Windows 10 Instance <br/><br/>
<img src="https://i.imgur.com/H7izj80.jpeg" height="80%" width="80%" alt="Disk Sanitization Steps"/>

<br />

Parser.exe <br/><br/>
<img src="https://i.imgur.com/fYaizLd.jpeg" height="80%" width="80%" alt="Disk Sanitization Steps"/>

</p>

<!--
 ```diff
- text in red
+ text in green
! text in orange
# text in gray
@@ text in purple (and bold)@@
```
--!>
