#!/bin/bash

echo "=== Git Repository Setup and Push ==="

# Check if git is initialized
if [ ! -d .git ]; then
    echo "Initializing git repository..."
    git init
fi

# Add all files
echo "Adding files to git..."
git add .

# Create initial commit if needed
COMMIT_COUNT=$(git rev-list --all --count 2>/dev/null || echo "0")
if [ "$COMMIT_COUNT" = "0" ]; then
    echo "Creating initial commit..."
    git commit -m "Initial commit: PIC16F15313 project setup with CC5X"
else
    echo "Repository already has commits. Creating new commit..."
    git commit -m "Update project configuration for PIC16F15313"
fi

# Create or switch to main branch
if ! git rev-parse --verify main >/dev/null 2>&1; then
    echo "Creating main branch..."
    git branch -m main
else
    echo "Switching to main branch..."
    git checkout main
fi

# Configure remote
echo "Setting up remote origin..."
git remote remove origin 2>/dev/null || true
git remote add origin https://github.com/garyPenhook/CC5X-Setup-Guide-for-Visual-Studio-Code.git

# Push to GitHub
echo "Pushing to GitHub..."
git push -f origin main

echo "=== Done ==="
