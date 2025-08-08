fun loadFun { (reg r:S, reg rEnvType:I) -+> V { | ...; } }
fun checkFun { (reg r:V) --> V { | ...; } }
fun toForSeq { (reg r:*) -+> V { | ...; } }
fun invisible { () --> V { | ...; } }
fun visible { () --> V { | ...; } }
fun asSwitchIdx { (reg r:*) -+> V { | ...; } }
fun tryDispatchBuiltin { (reg rBuiltin:S, reg rTarget:*s, reg rArgs:V) -+> V { | ...; } }
fun getTryDispatchBuiltinDispatched { (reg r:V) --> V { | ...; } }
fun getTryDispatchBuiltinValue { (reg r:V) --> V { | ...; } }
