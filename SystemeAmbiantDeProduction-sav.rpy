I-Logix-RPY-Archive version 8.8.0 C++ 6107223
{ IProject 
	- _id = GUID 0c82b30f-ab54-40b6-9b37-3ee1b3ac5935;
	- _myState = 8192;
	- _properties = { IPropertyContainer 
		- Subjects = { IRPYRawContainer 
			- size = 2;
			- value = 
			{ IPropertySubject 
				- _Name = "Browser";
				- Metaclasses = { IRPYRawContainer 
					- size = 1;
					- value = 
					{ IPropertyMetaclass 
						- _Name = "Settings";
						- Properties = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IProperty 
								- _Name = "ShowPredefinedPackage";
								- _Value = "false";
								- _Type = Bool;
							}
						}
					}
				}
			}
			{ IPropertySubject 
				- _Name = "ObjectModelGe";
				- Metaclasses = { IRPYRawContainer 
					- size = 2;
					- value = 
					{ IPropertyMetaclass 
						- _Name = "Class";
						- Properties = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IProperty 
								- _Name = "ShowPortsInterfaces";
								- _Value = "0";
								- _Type = Bool;
							}
						}
					}
					{ IPropertyMetaclass 
						- _Name = "Object";
						- Properties = { IRPYRawContainer 
							- size = 3;
							- value = 
							{ IProperty 
								- _Name = "ShowAttributes";
								- _Value = "None";
								- _Type = Enum;
								- _ExtraTypeInfo = "All,None,Public,Explicit";
							}
							{ IProperty 
								- _Name = "ShowOperations";
								- _Value = "All";
								- _Type = Enum;
								- _ExtraTypeInfo = "All,None,Public,Explicit";
							}
							{ IProperty 
								- _Name = "ShowPortsInterfaces";
								- _Value = "0";
								- _Type = Bool;
							}
						}
					}
				}
			}
		}
	}
	- _name = "SystemeAmbiantDeProduction-sav";
	- Stereotypes = { IRPYRawContainer 
		- size = 1;
		- value = 
		{ IHandle 
			- _m2Class = "IStereotype";
			- _filename = "$OMROOT\\Profiles\\SysML\\SysMLProfile_rpy\\SysML.sbs";
			- _subsystem = "SysML";
			- _class = "";
			- _name = "SysML";
			- _id = GUID 052b8171-a32b-4f45-a829-5585f79f9deb;
		}
	}
	- _modifiedTimeWeak = 3.19.2015::13:23:43;
	- _UserColors = { IRPYRawContainer 
		- size = 16;
		- value = 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 
	}
	- _defaultSubsystem = { ISubsystemHandle 
		- _m2Class = "ISubsystem";
		- _filename = "ActorPkg.sbs";
		- _subsystem = "";
		- _class = "";
		- _name = "ActorPkg";
		- _id = GUID 9657da23-d2f3-4389-9fc5-825bc1d4b4ea;
	}
	- _component = { IHandle 
		- _m2Class = "IComponent";
		- _filename = "ModelExecution.cmp";
		- _subsystem = "";
		- _class = "";
		- _name = "ModelExecution";
		- _id = GUID 1e4f4396-2f14-44c6-b9e8-dd90360fbe73;
	}
	- Multiplicities = { IRPYRawContainer 
		- size = 4;
		- value = 
		{ IMultiplicityItem 
			- _name = "1";
			- _count = -1;
		}
		{ IMultiplicityItem 
			- _name = "*";
			- _count = -1;
		}
		{ IMultiplicityItem 
			- _name = "0,1";
			- _count = -1;
		}
		{ IMultiplicityItem 
			- _name = "1..*";
			- _count = -1;
		}
	}
	- Subsystems = { IRPYRawContainer 
		- size = 8;
		- value = 
		{ IProfile 
			- fileName = "SysML";
			- _persistAs = "$OMROOT\\Profiles\\SysML\\SysMLProfile_rpy";
			- _id = GUID d9689b73-885e-44c4-896b-de43defa0a33;
			- _isReference = 1;
		}
		{ IProfile 
			- fileName = "HarmonySE";
			- _persistAs = "$OMROOT\\Profiles\\HarmonySE";
			- _id = GUID 29d4fccc-40d9-4cb3-af8a-d7464f198819;
			- _isReference = 1;
		}
		{ ISubsystem 
			- fileName = "ActorPkg";
			- _id = GUID 9657da23-d2f3-4389-9fc5-825bc1d4b4ea;
		}
		{ ISubsystem 
			- fileName = "FunctionalAnalysisPkg";
			- _id = GUID 676525c8-9af3-43b8-9bc1-da114111c9d4;
		}
		{ ISubsystem 
			- fileName = "DesignSynthesisPkg";
			- _id = GUID 259374cb-ce8b-4c4a-9c59-707045d81822;
		}
		{ ISubsystem 
			- fileName = "RequirementsAnalysisPkg";
			- _id = GUID 573f4453-b292-43fd-8b42-a817bd478377;
		}
		{ ISubsystem 
			- fileName = "TypesPkg";
			- _id = GUID 8b6e065b-7c1b-4c0b-8bbe-1591b187b6ea;
		}
		{ ISubsystem 
			- fileName = "InterfacesPkg";
			- _id = GUID 37ae5e0b-36fa-4bf8-a727-6bd675d19aee;
		}
	}
	- Diagrams = { IRPYRawContainer 
		- size = 0;
	}
	- MSCS = { IRPYRawContainer 
		- size = 0;
	}
	- Components = { IRPYRawContainer 
		- size = 1;
		- value = 
		{ IComponent 
			- fileName = "ModelExecution";
			- _id = GUID 1e4f4396-2f14-44c6-b9e8-dd90360fbe73;
		}
	}
}

