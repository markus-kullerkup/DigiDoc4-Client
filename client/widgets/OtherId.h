/*
 * QDigiDoc4
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

#pragma once

#include "widgets/StyledWidget.h"

namespace Ui {
class OtherId;
}

class OtherId : public StyledWidget
{
	Q_OBJECT

public:
	explicit OtherId( QWidget *parent = nullptr );
	~OtherId();

	void updateMobileId( const QString &telNumber, const QString &telOperator, const QString &status, const QString &validTill );
	void updateDigiId( const QString &docNumber, const QString &docValid, const QString &status, const QString &validTill );

protected:
	void updateMobileId();
	void updateDigiId();

	void changeEvent(QEvent* event) override;

private:
	Ui::OtherId *ui;

	bool isDigiId;
	QString telNumber;
	QString telOperator;
	QString docNumber;
	QString docValid;
	QString status;
	QString validTill;
};
