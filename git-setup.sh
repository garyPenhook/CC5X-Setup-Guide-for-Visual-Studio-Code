#!/bin/bash

# Git initialization and setup script for CC5X PIC project
echo "=== Setting up Git repository ==="

# Initialize Git repository
git init

# Add all files to staging
git add .

# Create .gitignore file
cat > .gitignore << EOF
# Output files
output/*.hex
output/*.asm
output/*.lst
output/*.var
output/*.occ

# Temporary files
*.bak
*.tmp
*~

# Build directories
build/
bin/
obj/

# VSCode specific files
.vscode/.browse.c_cpp.db*
.vscode/ipch/

# CrossOver/Wine temporary files
/tmp/cc5x_wine_compile/
*.wine
EOF

# Add .gitignore
git add .gitignore

# Create initial commit
git commit -m "Initial commit for PIC16F15313 project with CC5X"

# Instructions for pushing to GitHub
echo ""
echo "=== Instructions to push to GitHub ==="
echo "1. Create a personal access token on GitHub if you don't have one:"
echo "   https://github.com/settings/tokens"
echo ""
echo "2. Run the following commands to push to GitHub:"
echo "   git remote add origin https://github.com/garyPenhook/CC5X-Setup-Guide-for-Visual-Studio-Code.git"
echo "   git branch -M main"
echo "   git push -u origin main --force"  # --force flag to overwrite existing content
echo ""
echo "3. When prompted for credentials:"
echo "   - Username: your GitHub username"
echo "   - Password: use your personal access token"
echo ""
echo "4. The repository should now be updated with your local content"
echo ""
echo "Repository URL: https://github.com/garyPenhook/CC5X-Setup-Guide-for-Visual-Studio-Code"
echo ""
echo "=== Git setup complete ==="
