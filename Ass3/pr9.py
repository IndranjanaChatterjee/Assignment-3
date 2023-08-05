s=input("Enter a Sentence:")
news=""
s=" "+s
for i in range(0,len(s)):
    if(s[i]==' '):
      news=news+s[i+1]
print(news)