def chatbot(): 
    print("Chatbot: Hello! I am your assistant.") 
    print("Type 'bye' to exit.\n") 
    while True: 
        user = input("You: ").lower() 
        if user == "hello" or user == "hi": 
            print("Bot: Hello! How can I help you?") 
        elif "name" in user: 
            print("Bot: I am a simple chatbot created for AI practical.") 
        elif "how are you" in user: 
            print("Bot: I am fine! How about you?") 
        elif "course" in user: 
            print("Bot: This is Artificial Intelligence Lab.") 
        elif "college" in user: 
            print("Bot: PCCOER, Ravet Pune.") 
        elif "time" in user: 
            import datetime 
            print("Bot: Current time is", datetime.datetime.now().strftime("%H:%M:%S")) 
        elif "date" in user: 
            import datetime 
            print("Bot: Today's date is", datetime.datetime.now().date()) 
        elif user == "bye": 
            print("Bot: Goodbye! Have a nice day 😊") 
            break 
        else: 
            print("Bot: Sorry, I don't understand that.") 
chatbot() 