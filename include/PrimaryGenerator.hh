#ifndef PRIMARYGENERATOR_HH
#define PRIMARYGENERATOR_HH

#include "G4VUserPrimaryGeneratorAction.hh"
#include "G4ParticleGun.hh"
#include "G4Event.hh"
#include "G4GeneralParticleSource.hh"
#include "G4ParticleTable.hh"
#include "G4ParticleDefinition.hh"
#include "G4SystemOfUnits.hh"

class PrimaryGenerator: public G4VUserPrimaryGeneratorAction {
public:
    PrimaryGenerator();
    ~PrimaryGenerator() override;

    void GeneratePrimaries(G4Event *event) override;
private:
    G4ParticleGun *particleGun;
    G4ParticleTable *particleTable;
    G4ParticleDefinition *particleDefinition;
};
#endif