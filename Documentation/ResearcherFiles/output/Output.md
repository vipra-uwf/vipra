# Simulation Output

Output is handled through `Output Sinks`.

## Selecting A Sink

`Sinks` are selected in the `sim.config` file.

```
"modules": {
  ... other modules

  "output_sink": "dkSDMqF7Q55UWSxva6pm",

  ... other modules
}
```

More on simulation configuration files is in [Running The Simulation](../Running.md)

## Available Output Sinks

### File Sink

The `File Sink` outputs to a JSON file at the provided directory path from the module parameters file.

ID: dkSDMqF7Q55UWSxva6pm