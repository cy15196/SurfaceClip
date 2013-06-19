/*==============================================================================

  Program: 3D Slicer

  Portions (c) Copyright Brigham and Women's Hospital (BWH) All Rights Reserved.

  See COPYRIGHT.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

==============================================================================*/

// Qt includes
#include <QtPlugin>

// SurfaceClip Logic includes
#include <vtkSlicerSurfaceClipLogic.h>

// SurfaceClip includes
#include "qSlicerSurfaceClipModule.h"
#include "qSlicerSurfaceClipModuleWidget.h"

//-----------------------------------------------------------------------------
Q_EXPORT_PLUGIN2(qSlicerSurfaceClipModule, qSlicerSurfaceClipModule);

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_ExtensionTemplate
class qSlicerSurfaceClipModulePrivate
{
public:
  qSlicerSurfaceClipModulePrivate();
};

//-----------------------------------------------------------------------------
// qSlicerSurfaceClipModulePrivate methods

//-----------------------------------------------------------------------------
qSlicerSurfaceClipModulePrivate
::qSlicerSurfaceClipModulePrivate()
{
}

//-----------------------------------------------------------------------------
// qSlicerSurfaceClipModule methods

//-----------------------------------------------------------------------------
qSlicerSurfaceClipModule
::qSlicerSurfaceClipModule(QObject* _parent)
  : Superclass(_parent)
  , d_ptr(new qSlicerSurfaceClipModulePrivate)
{
}

//-----------------------------------------------------------------------------
qSlicerSurfaceClipModule::~qSlicerSurfaceClipModule()
{
}

//-----------------------------------------------------------------------------
QString qSlicerSurfaceClipModule::helpText()const
{
  return "This is a loadable module designated to clip a model with a surface.";
}

//-----------------------------------------------------------------------------
QString qSlicerSurfaceClipModule::acknowledgementText()const
{
  return "This work was part of the dissertation of my bachelor degree from "
	  "SJTU.";
}

//-----------------------------------------------------------------------------
QStringList qSlicerSurfaceClipModule::contributors()const
{
  QStringList moduleContributors;
  moduleContributors << QString("Jun LIN, Xiaojun CHEN");
  return moduleContributors;
}

//-----------------------------------------------------------------------------
QIcon qSlicerSurfaceClipModule::icon()const
{
  return QIcon(":/Icons/SurfaceClip.png");
}

//-----------------------------------------------------------------------------
QStringList qSlicerSurfaceClipModule::categories() const
{
  return QStringList() << "Examples";
}

//-----------------------------------------------------------------------------
QStringList qSlicerSurfaceClipModule::dependencies() const
{
  return QStringList();
}

//-----------------------------------------------------------------------------
void qSlicerSurfaceClipModule::setup()
{
  this->Superclass::setup();
}

//-----------------------------------------------------------------------------
qSlicerAbstractModuleRepresentation * qSlicerSurfaceClipModule
::createWidgetRepresentation()
{
  return new qSlicerSurfaceClipModuleWidget;
}

//-----------------------------------------------------------------------------
vtkMRMLAbstractLogic* qSlicerSurfaceClipModule::createLogic()
{
  return vtkSlicerSurfaceClipLogic::New();
}
