/*
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to you under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "ConcDef.h"

class CacheManager
{
	ConcertedDef *val_array[10];
	int current_counter;
public:
	CacheManager()
	{
		int i = 0;

		for (i = 0;i < 10;i++)
		{
			val_array[i] = NULL;
		}

		current_counter = 0;
	}

	virtual ConcertedDef* search_val(...);

	void add_val(ConcertedDef *val)
	{
		if (current_counter < 10)
		{
			val_array[current_counter] = val;
			++current_counter;

			return;
		}

		val_array[0] = val;
	}
};

int main()
{
}
