#!/bin/bash

echo "=== Setting up clangd IDE support ==="

# Create a .clangd file for better clangd configuration
cat > /home/avr1/software/cc5x/.clangd << EOF
CompileFlags:
  Add: [
    -D__CC5X__,
    -DNO_BIT_DEFINES,
    -I/home/avr1/software/cc5x/include/headers
  ]

Diagnostics:
  Suppress: ['unknown-pragmas', 'unused-parameter']

InlayHints:
  Enabled: Yes
  ParameterNames: Yes
  DeducedTypes: Yes

Hover:
  ShowAKA: Yes
EOF

echo "Created .clangd configuration file"
echo "Install the clangd extension in VS Code if you haven't already"
echo "Setup complete!"
