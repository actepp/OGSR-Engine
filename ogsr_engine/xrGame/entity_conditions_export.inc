			.def_readwrite("power",					    &CONDITION_CLASS::m_fPower)
			.def_readwrite("power_max",					&CONDITION_CLASS::m_fPowerMax)
			.def_readwrite("psy_health",				&CONDITION_CLASS::m_fPsyHealth)
			.def_readwrite("psy_health_max",			&CONDITION_CLASS::m_fPsyHealthMax)
			.def_readwrite("radiation",					&CONDITION_CLASS::m_fRadiation)
			.def_readwrite("radiation_max",				&CONDITION_CLASS::m_fRadiationMax)
			.def_readwrite("morale",					&CONDITION_CLASS::m_fEntityMorale)																
			.def_readwrite("morale_max",				&CONDITION_CLASS::m_fEntityMoraleMax)			
			.def_readwrite("min_wound_size",			&CONDITION_CLASS::m_fMinWoundSize)
			.def_readonly("is_bleeding",				&CONDITION_CLASS::m_bIsBleeding)
			//.def_readwrite("health_hit_part",			&CONDITION_CLASS::m_fHealthHitPart)
			.def_readwrite("power_hit_part",			&CONDITION_CLASS::m_fPowerHitPart)				