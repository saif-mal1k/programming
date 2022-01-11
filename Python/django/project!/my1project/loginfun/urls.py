from . import views
from django.urls import path

urlpatterns = [
    path('', views.home ,name='home'),
    path('sign_in', views.sign_in ,name='home'),
    path('main_css', views.main_css, name="css")
]