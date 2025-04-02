#!/bin/bash

echo "=== Setting up Git repository and pushing to master ==="

# Initialize git if not already done
if [ ! -d .git ]; then
    echo "Initializing git repository..."
    git init
fi

# Add all files to the staging area
echo "Adding files to staging area..."
git add .

# Create initial commit if none exists
if [ "$(git rev-list --all --count 2>/dev/null || echo "0")" = "0" ]; then
    echo "Creating initial commit..."
    git commit -m "Initial PIC16F15313 project setup with CC5X"
else
    echo "Creating new commit..."
    git commit -m "Update project for PIC16F15313 microcontroller"
fi

# Add the remote repository if it doesn't exist
if ! git remote | grep -q "origin"; then
    echo "Adding GitHub repository as remote..."
    git remote add origin https://github.com/garyPenhook/CC5X-Setup-Guide-for-Visual-Studio-Code.git
fi

# Check if the master branch exists
if ! git rev-parse --verify master >/dev/null 2>&1; then
    # Create master branch if it doesn't exist
    echo "Creating master branch..."
    git branch -m master
else
    # Switch to master branch if it exists
    echo "Switching to master branch..."
    git checkout master
fi

# Force push to the master branch
echo "Pushing to master branch on GitHub..."
git push -f origin master

echo "=== Push to master complete ==="
echo "Repository URL: https://github.com/garyPenhook/CC5X-Setup-Guide-for-Visual-Studio-Code"
