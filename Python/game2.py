import requests

def fetch_random_joke():
    url = "https://official-joke-api.appspot.com/random_joke"
    response = requests.get(url)
    
    if response.status_code == 200:
        joke_data = response.json()
        joke = f"**{joke_data['setup']}**\n{joke_data['punchline']}"
        return joke
    else:
        return "Failed to fetch a joke. Please try again later."

random_joke = fetch_random_joke()
print(random_joke)


