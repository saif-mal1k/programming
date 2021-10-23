from django.shortcuts import render
from django.http import HttpResponse
#from django.http import 

# Create your views here.

def home(request):
    return render(request,'index.html')

def sign_in(request):
    return render(request, 'links/signin_page.html')


def main_css(request):
    return render(request, 'links/assets/css/main.css')
