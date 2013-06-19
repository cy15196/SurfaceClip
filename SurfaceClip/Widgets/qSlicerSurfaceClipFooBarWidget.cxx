/*==============================================================================

  Program: 3D Slicer

  Copyright (c) Kitware Inc.

  See COPYRIGHT.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  This file was originally developed by Jean-Christophe Fillion-Robin, Kitware Inc.
  and was partially funded by NIH grant 3P41RR013218-12S1

==============================================================================*/

// FooBar Widgets includes
#include "qSlicerSurfaceClipFooBarWidget.h"
#include "ui_qSlicerSurfaceClipFooBarWidget.h"

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_SurfaceClip
class qSlicerSurfaceClipFooBarWidgetPrivate
  : public Ui_qSlicerSurfaceClipFooBarWidget
{
  Q_DECLARE_PUBLIC(qSlicerSurfaceClipFooBarWidget);
protected:
  qSlicerSurfaceClipFooBarWidget* const q_ptr;

public:
  qSlicerSurfaceClipFooBarWidgetPrivate(
    qSlicerSurfaceClipFooBarWidget& object);
  virtual void setupUi(qSlicerSurfaceClipFooBarWidget*);
};

// --------------------------------------------------------------------------
qSlicerSurfaceClipFooBarWidgetPrivate
::qSlicerSurfaceClipFooBarWidgetPrivate(
  qSlicerSurfaceClipFooBarWidget& object)
  : q_ptr(&object)
{
}

// --------------------------------------------------------------------------
void qSlicerSurfaceClipFooBarWidgetPrivate
::setupUi(qSlicerSurfaceClipFooBarWidget* widget)
{
  this->Ui_qSlicerSurfaceClipFooBarWidget::setupUi(widget);
}

//-----------------------------------------------------------------------------
// qSlicerSurfaceClipFooBarWidget methods

//-----------------------------------------------------------------------------
qSlicerSurfaceClipFooBarWidget
::qSlicerSurfaceClipFooBarWidget(QWidget* parentWidget)
  : Superclass( parentWidget )
  , d_ptr( new qSlicerSurfaceClipFooBarWidgetPrivate(*this) )
{
  Q_D(qSlicerSurfaceClipFooBarWidget);
  d->setupUi(this);
}

//-----------------------------------------------------------------------------
qSlicerSurfaceClipFooBarWidget
::~qSlicerSurfaceClipFooBarWidget()
{
}
