/*
 * Copyright (c) 2016, ARM Limited, All Rights Reserved
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "api/inc/uvisor-lib.h"
#include "core/uvisor.h"
#include <stddef.h>
#include <stdint.h>

int uvisor_box_id_self(void)
{
    return UVISOR_SVC(UVISOR_SVC_ID_BOX_ID_SELF, "");
}

int uvisor_box_id_caller(void)
{
    return UVISOR_SVC(UVISOR_SVC_ID_BOX_ID_CALLER, "");
}

int uvisor_box_namespace(int box_id, char *box_namespace, size_t length)
{
    return UVISOR_SVC(UVISOR_SVC_ID_BOX_NAMESPACE_FROM_ID, "", box_id, box_namespace, length);
}
