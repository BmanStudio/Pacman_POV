// Fill out your copyright notice in the Description page of Project Settings.


#include "Pacman_Controller.h"

void APacman_Controller::SetupInputComponent()
{
    
}

APacmanPawn* APacman_Controller::GetPacmanPawn() const
{
    return Cast<APacmanPawn>(GetPawn());
}

void APacman_Controller::MoveUp()
{
}

void APacman_Controller::MoveDown()
{
}

void APacman_Controller::MoveLeft()
{
}

void APacman_Controller::MoveRight()
{
}
