#ifndef SRC_LIB_NGSINOTIFY_QUEUESTATISTICS_H
#define SRC_LIB_NGSINOTIFY_QUEUESTATISTICS_H
/*
*
* Copyright 2015 Telefonica Investigacion y Desarrollo, S.A.U
*
* This file is part of Orion Context Broker.
*
* Orion Context Broker is free software: you can redistribute it and/or
* modify it under the terms of the GNU Affero General Public License as
* published by the Free Software Foundation, either version 3 of the
* License, or (at your option) any later version.
*
* Orion Context Broker is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Affero
* General Public License for more details.
*
* You should have received a copy of the GNU Affero General Public License
* along with Orion Context Broker. If not, see http://www.gnu.org/licenses/.
*
* For those usages not covered by this license please contact with
* iot_support at tid dot es
*
* Author: Orion dev team
*/


// FIXME: To be refactored to be algned with common statistics approach
// when implemented

// A newer version of boost (>=1.53.0) or c++11 could provide better
// alternatives to this implementation


class QueueStatistics
{
public:

  /* ****************************************************************************
  *
  * getIn -
  */
  static int  getIn();

  /* ****************************************************************************
  *
  * incIn -
  */
  static void incIn();

  /* ****************************************************************************
  *
  * getOut -
  */
  static int  getOut();

  /* ****************************************************************************
  *
  * incOut -
  */
  static void incOut();

  /* ****************************************************************************
  *
  * getReject -
  */
  static int  getReject();

  /* ****************************************************************************
  *
  * incReject -
  */
  static void incReject();

  /* ****************************************************************************
  *
  * getSentOK -
  */
  static int  getSentOK();

  /* ****************************************************************************
  *
  * incSentOK -
  */
  static void incSentOK();

  /* ****************************************************************************
  *
  * getSentError -
  */
  static int  getSentError();

  /* ****************************************************************************
  *
  * incSentError -
  */
  static void incSentError();

private:
   QueueStatistics();
   static volatile int noOfNotificationsQueueIn;
   static volatile int noOfNotificationsQueueOut;
   static volatile int noOfNotificationsQueueReject;
   static volatile int noOfNotificationsQueueSentOK;
   static volatile int noOfNotificationsQueueSentError;
};

#endif // SRC_LIB_NGSINOTIFY_QUEUESTATISTICS_H