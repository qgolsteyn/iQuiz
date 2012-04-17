Aiko Events Module
==================

    #include <AikoEvents.h>

Examples: Blink, Blink2

Methods
-------

### Events.addHandler

The Events::addHandler method allows your application to specify a
function to be invoked at a defined interval. It should be called with
the function name followed by the required interval in milliseconds. For
example, to invoke a function called "blink" every 1000ms:

    Events.addHandler (blink, 1000);

The specified function can be either a built-in function provided by the
Arduino libraries or a function defined elsewhere in your code.

If multiple event handlers are defined they will be executed in the
order they are defined within the constraints of the specified interval.
For example:

    Events.addHandler (readTemperature, 1000);
    Events.addHandler (readHumidity, 5000);
    Events.addHandler (logData, 1000);

will execute the readTemperature() and logData() functions in that
order every second, but every 5th second the readHumidity() function
will be called after readTemperature() but before logData(). This
ensures the execution order of functions is always predictable.


### Events.addOneShotHandler

Adds a handler that will be called once after a specified delay (in
milliseconds). For example, to invoke myFunction in 1 second, call:

    Events.addOneShotHandler(myFunction, 1000):


### Events.loop

To cause event handlers specified using addHandler to be executed the
sketch needs to make a call to Events.loop() within the main program
loop.

In an application which is executed entirely by Aiko event handlers the
main program loop can be as simple as:

    void loop() {
      Events.loop();
    }

