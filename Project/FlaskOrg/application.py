import random
from flask import Flask, render_template, request

app = Flask (__name__)

@app.route("/")
def index():

    # name
    # return render_template("index.html", name = "Emma")

    # number
    # number_gen = random.randint(0,1)
    # return render_template("index.html", number = number_gen)

    # form name
    return render_template("index.html")

# @app.route("/goodbye")
# def bye():
#     return "<h1>Goodbye!</h1>"

@app.route("/hello")
def hello():
    name_form = request.args.get("name")
    if not name_form:
        return render_template("failure.html")
    return render_template("hello.html", name = name_form)



# run with flask run in bash