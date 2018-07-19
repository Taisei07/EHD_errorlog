/home/pascal/OpenFOAM/OpenFOAM-4.1/applications/solvers/user_solvers/convective_esFoam
Making dependency list for source file electrostaticFoam.C
g++ -std=c++0x -m64 -Dlinux64 -DWM_ARCH_OPTION=64 -DWM_DP -DWM_LABEL_SIZE=32 -Wall -Wextra -Wold-style-cast -Wnon-virtual-dtor -Wno-unused-parameter -Wno-invalid-offsetof -O3  -DNoRepository -ftemplate-depth-100 -I/home/pascal/OpenFOAM/OpenFOAM-4.1/src/finiteVolume/lnInclude -I/home/pascal/OpenFOAM/OpenFOAM-4.1/src/meshTools/lnInclude -IlnInclude -I. -I/home/pascal/OpenFOAM/OpenFOAM-4.1/src/OpenFOAM/lnInclude -I/home/pascal/OpenFOAM/OpenFOAM-4.1/src/OSspecific/POSIX/lnInclude   -fPIC -c electrostaticFoam.C -o /home/pascal/OpenFOAM/OpenFOAM-4.1/platforms/linux64GccDPInt32Opt/applications/solvers/user_solvers/convective_esFoam/electrostaticFoam.o
In file included from electrostaticFoam.C:42:0:
createFields.H: In function ‘int main(int, char**)’:
createFields.H:67:37: error: ‘esphi’ was not declared in this scope
         -k*mesh.magSf()*fvc::snGrad(esphi)
                                     ^
In file included from createFields.H:86:0,
                 from electrostaticFoam.C:42:
/home/pascal/OpenFOAM/OpenFOAM-4.1/src/finiteVolume/lnInclude/createPhi.H:39:5: error: conflicting declaration ‘Foam::surfaceScalarField phi’
     (
     ^
In file included from electrostaticFoam.C:42:0:
createFields.H:27:20: note: previous declaration as ‘Foam::volScalarField phi’
     volScalarField phi
                    ^
In file included from createFields.H:86:0,
                 from electrostaticFoam.C:42:
/home/pascal/OpenFOAM/OpenFOAM-4.1/src/finiteVolume/lnInclude/createPhi.H:46:15: error: ‘U’ was not declared in this scope
     fvc::flux(U)
               ^
electrostaticFoam.C:61:71: error: no matching function for call to ‘div(Foam::volScalarField&, Foam::volScalarField&)’
             fvm::ddt(rho) + fvm::div(rhoFlux, rho) + fvm::div(phi, rho)
                                                                       ^
In file included from /home/pascal/OpenFOAM/OpenFOAM-4.1/src/finiteVolume/lnInclude/fvmDiv.H:94:0,
                 from /home/pascal/OpenFOAM/OpenFOAM-4.1/src/finiteVolume/lnInclude/fvm.H:45,
                 from /home/pascal/OpenFOAM/OpenFOAM-4.1/src/finiteVolume/lnInclude/fvCFD.H:10,
                 from electrostaticFoam.C:32:
/home/pascal/OpenFOAM/OpenFOAM-4.1/src/finiteVolume/lnInclude/fvmDiv.C:45:1: note: candidate: template<class Type> Foam::tmp<Foam::fvMatrix<Type> > Foam::fvm::div(const surfaceScalarField&, const Foam::GeometricField<Type, Foam::fvPatchField, Foam::volMesh>&, const Foam::word&)
 div
 ^
/home/pascal/OpenFOAM/OpenFOAM-4.1/src/finiteVolume/lnInclude/fvmDiv.C:45:1: note:   template argument deduction/substitution failed:
electrostaticFoam.C:61:71: note:   cannot convert ‘phi’ (type ‘Foam::volScalarField {aka Foam::GeometricField<double, Foam::fvPatchField, Foam::volMesh>}’) to type ‘const surfaceScalarField& {aka const Foam::GeometricField<double, Foam::fvsPatchField, Foam::surfaceMesh>&}’
             fvm::ddt(rho) + fvm::div(rhoFlux, rho) + fvm::div(phi, rho)
                                                                       ^
In file included from /home/pascal/OpenFOAM/OpenFOAM-4.1/src/finiteVolume/lnInclude/fvmDiv.H:94:0,
                 from /home/pascal/OpenFOAM/OpenFOAM-4.1/src/finiteVolume/lnInclude/fvm.H:45,
                 from /home/pascal/OpenFOAM/OpenFOAM-4.1/src/finiteVolume/lnInclude/fvCFD.H:10,
                 from electrostaticFoam.C:32:
/home/pascal/OpenFOAM/OpenFOAM-4.1/src/finiteVolume/lnInclude/fvmDiv.C:62:1: note: candidate: template<class Type> Foam::tmp<Foam::fvMatrix<Type> > Foam::fvm::div(const Foam::tmp<Foam::GeometricField<double, Foam::fvsPatchField, Foam::surfaceMesh> >&, const Foam::GeometricField<Type, Foam::fvPatchField, Foam::volMesh>&, const Foam::word&)
 div
 ^
/home/pascal/OpenFOAM/OpenFOAM-4.1/src/finiteVolume/lnInclude/fvmDiv.C:62:1: note:   template argument deduction/substitution failed:
electrostaticFoam.C:61:71: note:   cannot convert ‘phi’ (type ‘Foam::volScalarField {aka Foam::GeometricField<double, Foam::fvPatchField, Foam::volMesh>}’) to type ‘const Foam::tmp<Foam::GeometricField<double, Foam::fvsPatchField, Foam::surfaceMesh> >&’
             fvm::ddt(rho) + fvm::div(rhoFlux, rho) + fvm::div(phi, rho)
                                                                       ^
In file included from /home/pascal/OpenFOAM/OpenFOAM-4.1/src/finiteVolume/lnInclude/fvmDiv.H:94:0,
                 from /home/pascal/OpenFOAM/OpenFOAM-4.1/src/finiteVolume/lnInclude/fvm.H:45,
                 from /home/pascal/OpenFOAM/OpenFOAM-4.1/src/finiteVolume/lnInclude/fvCFD.H:10,
                 from electrostaticFoam.C:32:
/home/pascal/OpenFOAM/OpenFOAM-4.1/src/finiteVolume/lnInclude/fvmDiv.C:77:1: note: candidate: template<class Type> Foam::tmp<Foam::fvMatrix<Type> > Foam::fvm::div(const surfaceScalarField&, const Foam::GeometricField<Type, Foam::fvPatchField, Foam::volMesh>&)
 div
 ^
/home/pascal/OpenFOAM/OpenFOAM-4.1/src/finiteVolume/lnInclude/fvmDiv.C:77:1: note:   template argument deduction/substitution failed:
electrostaticFoam.C:61:71: note:   cannot convert ‘phi’ (type ‘Foam::volScalarField {aka Foam::GeometricField<double, Foam::fvPatchField, Foam::volMesh>}’) to type ‘const surfaceScalarField& {aka const Foam::GeometricField<double, Foam::fvsPatchField, Foam::surfaceMesh>&}’
             fvm::ddt(rho) + fvm::div(rhoFlux, rho) + fvm::div(phi, rho)
                                                                       ^
In file included from /home/pascal/OpenFOAM/OpenFOAM-4.1/src/finiteVolume/lnInclude/fvmDiv.H:94:0,
                 from /home/pascal/OpenFOAM/OpenFOAM-4.1/src/finiteVolume/lnInclude/fvm.H:45,
                 from /home/pascal/OpenFOAM/OpenFOAM-4.1/src/finiteVolume/lnInclude/fvCFD.H:10,
                 from electrostaticFoam.C:32:
/home/pascal/OpenFOAM/OpenFOAM-4.1/src/finiteVolume/lnInclude/fvmDiv.C:88:1: note: candidate: template<class Type> Foam::tmp<Foam::fvMatrix<Type> > Foam::fvm::div(const Foam::tmp<Foam::GeometricField<double, Foam::fvsPatchField, Foam::surfaceMesh> >&, const Foam::GeometricField<Type, Foam::fvPatchField, Foam::volMesh>&)
 div
 ^
/home/pascal/OpenFOAM/OpenFOAM-4.1/src/finiteVolume/lnInclude/fvmDiv.C:88:1: note:   template argument deduction/substitution failed:
electrostaticFoam.C:61:71: note:   cannot convert ‘phi’ (type ‘Foam::volScalarField {aka Foam::GeometricField<double, Foam::fvPatchField, Foam::volMesh>}’) to type ‘const Foam::tmp<Foam::GeometricField<double, Foam::fvsPatchField, Foam::surfaceMesh> >&’
             fvm::ddt(rho) + fvm::div(rhoFlux, rho) + fvm::div(phi, rho)
                                                                       ^
/home/pascal/OpenFOAM/OpenFOAM-4.1/wmake/rules/General/transform:8: ターゲット '/home/pascal/OpenFOAM/OpenFOAM-4.1/platforms/linux64GccDPInt32Opt/applications/solvers/user_solvers/convective_esFoam/electrostaticFoam.o' のレシピで失敗しました
make: *** [/home/pascal/OpenFOAM/OpenFOAM-4.1/platforms/linux64GccDPInt32Opt/applications/solvers/user_solvers/convective_esFoam/electrostaticFoam.o] エラー 1
