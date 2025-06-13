class WebServer {
public:
    // Constructor
    WebServer() {
        // Initialization code can go here
    }

    // Method to start the web server
    bool start();

    // Method to stop the web server
    void stop();
    // Destructor
    ~WebServer();
private:
    int port;
};