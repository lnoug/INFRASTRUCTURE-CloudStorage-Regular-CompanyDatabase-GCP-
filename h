#4. Test the Application Locally

efore we put our web application on the internet for everyone to see, we need to make sure it works correctly on our own computer.
We can use Flask to run our web application on our computer and test it out to make sure it works the way we want it to.
To test the application locally, you can run the Flask development server.

CODE:

export FLASK_APP=main.py
flask run

Output:
The output of this step will be the Flask development server running locally on your computer.

#5. Deploy the Application to Google Cloud Functions

Now that we know our web application works on our computer, we need to put it on the internet so that other people can use it too. 
We'll use Google Cloud Functions to do this.
To deploy the application to Google Cloud Functions, we will create a new Cloud Function and upload our code using the Cloud Console

CODE:

gcloud functions deploy FUNCTION_NAME --entry-point=upload --runtime=python38 --trigger-http --allow-unauthenticated --set-env-vars BUCKET_NAME=BUCKET_NAME,TOPIC_NAME=TOPIC_NAME

