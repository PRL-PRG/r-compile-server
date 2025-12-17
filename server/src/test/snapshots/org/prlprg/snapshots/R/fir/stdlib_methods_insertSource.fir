fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3718772931;
    st insertSource = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3718772931(source, package, functions, methods, force) {
  (reg source:*, reg package:*, reg functions:*, reg methods:*, reg force:*) -+> V { var source:*, var package:*, reg package_isMissing:L, reg package_orDefault:*, var functions:*, reg functions_isMissing:L, reg functions_orDefault:*, reg allPlainObjects:cls, reg r:V, reg p:p(V +), var methods:*, reg methods_isMissing:L, reg methods_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg missing:cls, reg r4:V, reg c:L, reg allMethodTables:cls, reg r5:V, reg r6:V, reg p1:p(V +), var force:*, reg force_isMissing:L, reg force_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg missing1:cls, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg r15:V, reg missing2:cls, reg r16:V, reg r17:V, reg p2:p(V +), reg _TableMetaPattern:cls, reg r19:V, reg _ClassMetaPattern:cls, reg r20:V, reg r21:cls, reg r22:cls, reg r23:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg r25:V, reg source1:*, reg source2:V, reg is_environment:cls, reg r26:V, reg c1:L, reg c3:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r27:V, reg c6:L, reg r28:V, reg package1:*, reg package2:V, reg nzchar:cls, reg r29:V, reg r30:V, reg c7:L, reg c8:V, reg c10:L, reg is:cls, reg source3:*, reg source4:V, reg p3:p(V +), reg r32:V, reg c11:L, reg __:cls, reg r33:V, reg r34:V, reg exists:cls, reg source5:*, reg source6:V, reg p4:p(V +), reg r36:V, reg c12:L, reg get:cls, reg source7:*, reg source8:V, reg p5:p(V +), reg r38:V, reg is1:cls, reg source9:*, reg source10:V, reg p6:p(V +), reg r41:V, reg c13:L, reg source11:*, reg source12:V, reg evalSource:cls, reg source14:*, reg source15:V, reg p7:p(V +), reg package3:*, reg package4:V, reg p8:p(V +), reg r44:V, reg getPackageName:cls, reg env:*, reg env1:V, reg p9:p(V +), reg r46:V, reg parent_env:cls, reg env2:*, reg env3:V, reg p10:p(V +), reg r48:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r49:V, reg r50:V, reg envp:*, reg envp1:V, reg _GlobalEnv:*, reg _GlobalEnv1:V, reg identical:cls, reg r51:V, reg c14:L, reg c15:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r52:V, reg c19:L, reg r53:V, reg envPackage:*, reg envPackage1:V, reg nzchar1:cls, reg r54:V, reg r55:V, reg c20:L, reg c21:V, reg c23:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r56:V, reg r57:V, reg package5:*, reg package6:V, reg nzchar2:cls, reg r58:V, reg r59:V, reg c24:L, reg _guessPackageName:cls, reg env4:*, reg env5:V, reg p11:p(V +), reg r61:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r63:V, reg r64:V, reg package7:*, reg package8:V, reg identical1:cls, reg r65:V, reg c25:L, reg paste0:cls, reg package9:*, reg package10:V, reg p12:p(V +), reg r68:V, reg tryCatch:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r69:V, reg r70:V, reg pname:*, reg pname1:V, reg as_environment:cls, reg r71:V, reg p13:p(V +), reg r73:cls, reg p14:p(V +), reg r75:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r76:V, reg r77:V, reg envp2:*, reg envp3:V, reg c26:V, reg c27:L, reg tryCatch1:cls, reg sym11:cls, reg base11:cls, reg guard11:L, reg r78:V, reg r79:V, reg pname2:*, reg pname3:V, reg as_environment1:cls, reg r80:V, reg p15:p(V +), reg r82:cls, reg p16:p(V +), reg r84:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r85:V, reg r86:V, reg envp4:*, reg envp5:V, reg c28:V, reg c29:L, reg stop:cls, reg gettextf:cls, reg package11:*, reg package12:V, reg p17:p(V +), reg r88:V, reg p18:p(V +), reg r90:V, reg r91:V, reg tryCatch2:cls, reg asNamespace:cls, reg package13:*, reg package14:V, reg p19:p(V +), reg r94:V, reg p20:p(V +), reg r96:cls, reg p21:p(V +), reg r98:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r99:V, reg r100:V, reg package15:*, reg package16:V, reg nzchar3:cls, reg r101:V, reg c30:L, reg assign:cls, reg package17:*, reg package18:V, reg p22:p(V +), reg env6:*, reg env7:V, reg p23:p(V +), reg r104:V, reg r105:V, reg isNamespace:cls, reg envp6:*, reg envp7:V, reg p24:p(V +), reg r108:V, reg c31:L, reg envp8:*, reg envp9:V, reg tryCatch3:cls, reg asNamespace1:cls, reg package19:*, reg package20:V, reg p25:p(V +), reg r110:V, reg p26:p(V +), reg r112:cls, reg p27:p(V +), reg r114:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r115:V, reg r116:V, reg envPackage2:*, reg envPackage3:V, reg nzchar4:cls, reg r117:V, reg c32:L, reg c34:V, reg envPackage4:*, reg envPackage5:V, reg package21:*, reg package22:V, reg r118:V, reg c35:L, reg c36:V, reg c38:L, reg warning:cls, reg gettextf1:cls, reg sQuote:cls, reg package23:*, reg package24:V, reg p28:p(V +), reg r120:V, reg p29:p(V +), reg sQuote1:cls, reg envPackage6:*, reg envPackage7:V, reg p30:p(V +), reg r123:V, reg p31:p(V +), reg r125:V, reg p32:p(V +), reg r127:V, reg package25:*, reg package26:V, reg l:*, reg packageSlot__:cls, reg r129:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r130:V, reg r131:V, reg env8:*, reg env9:V, reg names:cls, reg r132:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r133:V, reg r134:V, reg missing3:cls, reg r135:V, reg r136:V, reg c39:L, reg sym17:cls, reg base17:cls, reg guard17:L, reg r137:V, reg r138:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r139:V, reg r140:V, reg functions1:*, reg functions2:V, reg allObjects:*, reg allObjects1:V, reg match:cls, reg r141:V, reg is_na:cls, reg r142:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r143:V, reg r144:V, reg notThere:*, reg notThere1:V, reg any:cls, reg r145:V, reg c40:L, reg warning1:cls, reg gettextf2:cls, reg paste1:cls, reg functions3:*, reg functions4:V, reg c41:L, reg functions6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg notThere2:*, reg notThere3:V, reg __1:cls, reg r146:V, reg p33:p(V +), reg r148:V, reg p34:p(V +), reg r150:V, reg p35:p(V +), reg r152:V, reg r153:V, reg allMethodTables1:cls, reg r155:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r156:V, reg r157:V, reg methods1:*, reg methods2:V, reg length:cls, reg r158:V, reg r159:V, reg c42:L, reg vapply:cls, reg methods3:*, reg methods4:V, reg p36:p(V +), reg r161:cls, reg p37:p(V +), reg r163:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r164:V, reg r165:V, reg notThere4:*, reg notThere5:V, reg any1:cls, reg r166:V, reg c43:L, reg warning2:cls, reg gettextf3:cls, reg paste2:cls, reg methods5:*, reg methods6:V, reg c44:L, reg methods8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg notThere6:*, reg notThere7:V, reg __2:cls, reg r167:V, reg p38:p(V +), reg r169:V, reg p39:p(V +), reg r171:V, reg p40:p(V +), reg r173:V, reg methods9:*, reg methods10:V, reg c45:L, reg methods12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg notThere8:*, reg notThere9:V, reg r174:V, reg __3:cls, reg r175:V, reg vapply1:cls, reg methods13:*, reg methods14:V, reg p41:p(V +), reg r177:cls, reg p42:p(V +), reg r179:V, reg _mnames:*, reg _mnames1:V, reg sub:cls, reg _TableMetaPrefix:cls, reg r181:V, reg p43:p(V +), reg methodNames:*, reg methodNames1:V, reg p44:p(V +), reg r184:V, reg sub1:cls, reg methods15:*, reg methods16:V, reg p45:p(V +), reg r186:V, reg character:cls, reg r187:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r188:V, reg r189:V, reg functions7:*, reg functions8:V, reg r190:I, reg s:V, reg l1:I, reg i:I, reg i1:I, reg i2:I, reg c46:L, reg x:V, reg functions9:*, reg functions10:V, reg c47:L, reg i6:I, reg functions12:V, reg dr6:V, reg dc3:L, reg dx7:V, reg i8:I, reg dx8:V, reg i9:*, reg i10:V, reg __4:cls, reg r191:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r192:V, reg i13:I, reg r193:V, reg envns:*, reg envns1:V, reg c48:V, reg c49:L, reg i14:I, reg c50:V, reg exists1:cls, reg this:*, reg this1:V, reg p46:p(V +), reg envp10:*, reg envp11:V, reg p47:p(V +), reg r196:V, reg c52:L, reg c53:V, reg c55:L, reg envp12:*, reg envp13:V, reg get1:cls, reg this2:*, reg this3:V, reg p48:p(V +), reg envp14:*, reg envp15:V, reg p49:p(V +), reg r199:V, reg i19:I, reg envns2:*, reg envns3:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r201:V, reg i22:I, reg r202:V, reg envns4:*, reg envns5:V, reg is_environment1:cls, reg r203:V, reg c56:L, reg i24:I, reg c58:V, reg exists2:cls, reg this4:*, reg this5:V, reg p50:p(V +), reg envns6:*, reg envns7:V, reg p51:p(V +), reg r206:V, reg c59:L, reg c60:V, reg c62:L, reg get2:cls, reg this6:*, reg this7:V, reg p52:p(V +), reg envns8:*, reg envns9:V, reg p53:p(V +), reg r209:V, reg get3:cls, reg this8:*, reg this9:V, reg p54:p(V +), reg env10:*, reg env11:V, reg p55:p(V +), reg r212:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r213:V, reg i30:I, reg r214:V, reg thisObj:*, reg thisObj1:V, reg is_function:cls, reg r215:V, reg c63:L, reg i32:I, reg c65:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r216:V, reg i35:I, reg c68:L, reg r217:V, reg thisWhere:*, reg thisWhere1:V, reg is_function1:cls, reg r218:V, reg c69:L, reg c70:V, reg c72:L, reg i38:I, reg c74:V, reg differs:cls, reg thisObj2:*, reg thisObj3:V, reg p56:p(V +), reg thisWhere2:*, reg thisWhere3:V, reg p57:p(V +), reg r221:V, reg c75:L, reg c76:V, reg c78:L, reg suppressMessages:cls, reg _TraceWithMethods:cls, reg this10:*, reg this11:V, reg p58:p(V +), reg envwhere:*, reg envwhere1:V, reg p59:p(V +), reg env12:*, reg env13:V, reg p60:p(V +), reg r225:V, reg p61:p(V +), reg r227:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r228:V, reg i44:I, reg r229:V, reg objectsDone:*, reg objectsDone1:V, reg this12:*, reg this13:V, reg c79:cls, reg r230:V, reg i45:I, reg force1:*, reg force2:V, reg c80:L, reg assign1:cls, reg this14:*, reg this15:V, reg p62:p(V +), reg thisObj4:*, reg thisObj5:V, reg p63:p(V +), reg envwhere2:*, reg envwhere3:V, reg p64:p(V +), reg r235:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r236:V, reg i50:I, reg r237:V, reg thisObj6:*, reg thisObj7:V, reg is_function2:cls, reg r238:V, reg r239:V, reg c81:L, reg sym29:cls, reg base29:cls, reg guard29:L, reg r240:V, reg i55:I, reg r241:V, reg notTraceable:*, reg notTraceable1:V, reg this16:*, reg this17:V, reg c82:cls, reg r242:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r243:V, reg i58:I, reg r244:V, reg thisWhere4:*, reg thisWhere5:V, reg c83:V, reg c84:L, reg sym31:cls, reg base31:cls, reg guard31:L, reg r245:V, reg i63:I, reg r246:V, reg newObjects:*, reg newObjects1:V, reg this18:*, reg this19:V, reg c85:cls, reg r247:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r248:V, reg r249:V, reg notTraceable2:*, reg notTraceable3:V, reg length1:cls, reg r250:V, reg r251:V, reg c86:L, reg message:cls, reg gettextf4:cls, reg paste3:cls, reg notTraceable4:*, reg notTraceable5:V, reg p65:p(V +), reg r253:V, reg p66:p(V +), reg r255:V, reg p67:p(V +), reg r257:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r259:V, reg r260:V, reg newObjects2:*, reg newObjects3:V, reg length2:cls, reg r261:V, reg r262:V, reg c87:L, reg message1:cls, reg gettextf5:cls, reg paste4:cls, reg newObjects4:*, reg newObjects5:V, reg p68:p(V +), reg r264:V, reg p69:p(V +), reg r266:V, reg p70:p(V +), reg r268:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r270:V, reg r271:V, reg objectsDone2:*, reg objectsDone3:V, reg length3:cls, reg r272:V, reg r273:V, reg c88:L, reg message2:cls, reg gettextf6:cls, reg paste5:cls, reg objectsDone4:*, reg objectsDone5:V, reg p71:p(V +), reg r275:V, reg p72:p(V +), reg r277:V, reg p73:p(V +), reg r279:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r281:V, reg r282:V, reg methods17:*, reg methods18:V, reg r283:I, reg s1:V, reg l2:I, reg i64:I, reg i65:I, reg i66:I, reg c89:L, reg x1:V, reg _copyMethods:cls, reg methods19:*, reg methods20:V, reg c90:L, reg methods22:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg i69:*, reg i70:V, reg __5:cls, reg r284:V, reg p74:p(V +), reg methodNames2:*, reg methodNames3:V, reg c91:L, reg methodNames5:V, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg i71:*, reg i72:V, reg __6:cls, reg r286:V, reg p75:p(V +), reg env14:*, reg env15:V, reg p76:p(V +), reg envp16:*, reg envp17:V, reg p77:p(V +), reg r290:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r291:V, reg r292:V, reg source16:*, reg source17:V, reg is_environment2:cls, reg r293:V, reg r294:V, reg c92:L, reg lockEnvironment:cls, reg env16:*, reg env17:V, reg p78:p(V +), reg r296:V, reg sym37:cls, reg base37:cls, reg guard37:L, reg r297:V, reg r298:V, reg env18:*, reg env19:V, reg invisible:cls, reg r299:V, reg sym38:cls, reg base38:cls, reg guard38:L, reg r300:V, reg r301:V, reg source18:*, reg source19:V, reg invisible1:cls, reg r302:V |
    mkenv;
    st source = source;
    package_isMissing = missing.0(package);
    if package_isMissing then L0("") else L0(package);
  L0(package_orDefault):
    st package = package_orDefault;
    functions_isMissing = missing.0(functions);
    if functions_isMissing then L1() else L2(functions);
  L1():
    p = prom<V +>{
      allPlainObjects = ldf allPlainObjects;
      r = dyn allPlainObjects();
      return r;
    };
    goto L2(p);
  L2(functions_orDefault):
    st functions = functions_orDefault;
    methods_isMissing = missing.0(methods);
    if methods_isMissing then L3() else L4(methods);
  L3():
    p1 = prom<V +>{
      sym = ldf missing;
      base = ldf missing in base;
      guard = `==`.4(sym, base);
      if guard then L3() else L4();
    L0(r3):
      c = `as.logical`(r3);
      if c then L5() else L1();
    L3():
      missing = ldf missing in base;
      r4 = dyn missing(<sym functions>);
      goto L0(r4);
    L4():
      r2 = dyn base(<sym functions>);
      goto L0(r2);
    L1():
      goto L2(NULL);
    L2(r6):
      visible.0();
      return r6;
    L5():
      allMethodTables = ldf allMethodTables;
      r5 = dyn allMethodTables();
      goto L2(r5);
    };
    goto L4(p1);
  L4(methods_orDefault):
    st methods = methods_orDefault;
    force_isMissing = missing.0(force);
    if force_isMissing then L5() else L6(force);
  L5():
    p2 = prom<V +>{
      sym1 = ldf missing;
      base1 = ldf missing in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L2() else L3();
    L0(r9):
      sym2 = ldf missing;
      base2 = ldf missing in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L4() else L5();
    L2():
      missing1 = ldf missing in base;
      r10 = dyn missing1(<sym functions>);
      goto L0(r10);
    L3():
      r8 = dyn base1(<sym functions>);
      goto L0(r8);
    L1(r14, r15):
      r17 = `&&`(r14, r15);
      return r17;
    L4():
      missing2 = ldf missing in base;
      r16 = dyn missing2(<sym methods>);
      goto L1(r9, r16);
    L5():
      r13 = dyn base2(<sym methods>);
      goto L1(r9, r13);
    };
    goto L6(p2);
  L6(force_orDefault):
    st force = force_orDefault;
    _TableMetaPattern = ldf `.TableMetaPattern`;
    check L99() else D0();
  D0():
    deopt 1 [];
  L99():
    r19 = dyn _TableMetaPattern();
    check L100() else D1();
  D1():
    deopt 2 [r19];
  L100():
    st MPattern = r19;
    _ClassMetaPattern = ldf `.ClassMetaPattern`;
    check L101() else D2();
  D2():
    deopt 5 [];
  L101():
    r20 = dyn _ClassMetaPattern();
    check L102() else D3();
  D3():
    deopt 6 [r20];
  L102():
    st CPattern = r20;
    r21 = clos inner2708337952;
    st allPlainObjects = r21;
    r22 = clos inner2708337952;
    st allMethodTables = r22;
    r23 = clos inner1728155755;
    st differs = r23;
    sym3 = ldf `is.environment`;
    base3 = ldf `is.environment` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L103() else L104();
  L7(r25):
    c1 = `as.logical`(r25);
    if c1 then L107() else L8(c1);
  L103():
    source1 = ld source;
    check L105() else D4();
  L104():
    r24 = dyn base3(<sym source>);
    goto L7(r24);
  D4():
    deopt 19 [source1];
  L8(c3):
    c10 = `as.logical`(c3);
    if c10 then L113() else L10();
  L105():
    source2 = force? source1;
    checkMissing(source2);
    is_environment = ldf `is.environment` in base;
    r26 = dyn is_environment(source2);
    check L106() else D5();
  L107():
    sym4 = ldf nzchar;
    base4 = ldf nzchar in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L108() else L109();
  D5():
    deopt 22 [r26];
  L9(c6, r28):
    r30 = `!`(r28);
    c7 = `as.logical`(r30);
    c8 = `&&`(c6, c7);
    goto L8(c8);
  L10():
    goto L14();
  L14():
    is1 = ldf is;
    check L125() else D14();
  L106():
    goto L7(r26);
  L108():
    package1 = ld package;
    check L110() else D6();
  L109():
    r27 = dyn base4(<sym package>);
    goto L9(c1, r27);
  L113():
    is = ldf is;
    check L114() else D8();
  D6():
    deopt 25 [c1, package1];
  D8():
    deopt 32 [];
  D14():
    deopt 59 [];
  L110():
    package2 = force? package1;
    checkMissing(package2);
    nzchar = ldf nzchar in base;
    r29 = dyn nzchar(package2);
    check L111() else D7();
  L114():
    p3 = prom<V +>{
      source3 = ld source;
      source4 = force? source3;
      checkMissing(source4);
      return source4;
    };
    r32 = dyn is(p3, "sourceEnvironment");
    check L115() else D9();
  L125():
    p6 = prom<V +>{
      source9 = ld source;
      source10 = force? source9;
      checkMissing(source10);
      return source10;
    };
    r41 = dyn is1(p6, "environment");
    check L126() else D15();
  D7():
    deopt 28 [c1, r29];
  D9():
    deopt 35 [r32];
  D15():
    deopt 62 [r41];
  L111():
    goto L9(c1, r29);
  L115():
    c11 = `as.logical`(r32);
    if c11 then L116() else L11();
  L126():
    c13 = `as.logical`(r41);
    if c13 then L127() else L15();
  L11():
    exists = ldf exists;
    check L118() else D10();
  L12(r34):
    goto L14();
  L15():
    evalSource = ldf evalSource;
    check L130() else D17();
  L16():
    getPackageName = ldf getPackageName;
    check L132() else D19();
  L116():
    __ = ldf `@` in base;
    r33 = dyn __(<sym source>, <sym packageName>);
    st package = r33;
    goto L12(r33);
  L127():
    source11 = ld source;
    check L128() else D16();
  D10():
    deopt 40 [];
  D16():
    deopt 63 [source11];
  D17():
    deopt 67 [];
  D19():
    deopt 74 [];
  L118():
    p4 = prom<V +>{
      source5 = ld source;
      source6 = force? source5;
      checkMissing(source6);
      return source6;
    };
    r36 = dyn exists[, envir, inherits](".packageName", p4, FALSE);
    check L119() else D11();
  L128():
    source12 = force? source11;
    checkMissing(source12);
    st env = source12;
    goto L16();
  L130():
    p7 = prom<V +>{
      source14 = ld source;
      source15 = force? source14;
      checkMissing(source15);
      return source15;
    };
    p8 = prom<V +>{
      package3 = ld package;
      package4 = force? package3;
      checkMissing(package4);
      return package4;
    };
    r44 = dyn evalSource(p7, p8, FALSE);
    check L131() else D18();
  L132():
    p9 = prom<V +>{
      env = ld env;
      env1 = force? env;
      checkMissing(env1);
      return env1;
    };
    r46 = dyn getPackageName(p9, FALSE);
    check L133() else D20();
  D11():
    deopt 46 [r36];
  D18():
    deopt 71 [r44];
  D20():
    deopt 77 [r46];
  L119():
    c12 = `as.logical`(r36);
    if c12 then L120() else L13();
  L131():
    st env = r44;
    goto L16();
  L133():
    st envPackage = r46;
    parent_env = ldf `parent.env`;
    check L134() else D21();
  D21():
    deopt 80 [];
  L13():
    goto L12(NULL);
  L120():
    get = ldf get;
    check L121() else D12();
  L134():
    p10 = prom<V +>{
      env2 = ld env;
      env3 = force? env2;
      checkMissing(env3);
      return env3;
    };
    r48 = dyn parent_env(p10);
    check L135() else D22();
  D12():
    deopt 48 [];
  D22():
    deopt 82 [r48];
  L121():
    p5 = prom<V +>{
      source7 = ld source;
      source8 = force? source7;
      checkMissing(source8);
      return source8;
    };
    r38 = dyn get[, envir](".packageName", p5);
    check L122() else D13();
  L135():
    st envp = r48;
    sym5 = ldf identical;
    base5 = ldf identical in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L136() else L137();
  D13():
    deopt 52 [r38];
  L17(r50):
    c14 = `as.logical`(r50);
    if c14 then L18(c14) else L141();
  L122():
    st package = r38;
    goto L12(r38);
  L136():
    envp = ld envp;
    check L138() else D23();
  L137():
    r49 = dyn base5(<sym envp>, <sym .GlobalEnv>);
    goto L17(r49);
  D23():
    deopt 86 [envp];
  L18(c15):
    c23 = `as.logical`(c15);
    if c23 then L147() else L20();
  L138():
    envp1 = force? envp;
    checkMissing(envp1);
    _GlobalEnv = ld `.GlobalEnv`;
    check L139() else D24();
  L141():
    sym6 = ldf nzchar;
    base6 = ldf nzchar in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L142() else L143();
  D24():
    deopt 88 [_GlobalEnv];
  L19(c19, r53):
    r55 = `!`(r53);
    c20 = `as.logical`(r55);
    c21 = `||`(c19, c20);
    goto L18(c21);
  L20():
    isNamespace = ldf isNamespace;
    check L191() else D50();
  L36():
    sym14 = ldf nzchar;
    base14 = ldf nzchar in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L198() else L199();
  L139():
    _GlobalEnv1 = force? _GlobalEnv;
    checkMissing(_GlobalEnv1);
    identical = ldf identical in base;
    r51 = dyn identical(envp1, _GlobalEnv1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L140() else D25();
  L142():
    envPackage = ld envPackage;
    check L144() else D26();
  L143():
    r52 = dyn base6(<sym envPackage>);
    goto L19(c14, r52);
  L147():
    sym7 = ldf nzchar;
    base7 = ldf nzchar in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L148() else L149();
  D25():
    deopt 98 [r51];
  D26():
    deopt 101 [c14, envPackage];
  D50():
    deopt 199 [];
  L21(r57):
    r59 = `!`(r57);
    c24 = `as.logical`(r59);
    if c24 then L152() else L22();
  L38(r116):
    c32 = `as.logical`(r116);
    if c32 then L202() else L39(c32);
  L140():
    goto L17(r51);
  L144():
    envPackage1 = force? envPackage;
    checkMissing(envPackage1);
    nzchar1 = ldf nzchar in base;
    r54 = dyn nzchar1(envPackage1);
    check L145() else D27();
  L148():
    package5 = ld package;
    check L150() else D28();
  L149():
    r56 = dyn base7(<sym package>);
    goto L21(r56);
  L191():
    p24 = prom<V +>{
      envp6 = ld envp;
      envp7 = force? envp6;
      checkMissing(envp7);
      return envp7;
    };
    r108 = dyn isNamespace(p24);
    check L192() else D51();
  L198():
    envPackage2 = ld envPackage;
    check L200() else D55();
  L199():
    r115 = dyn base14(<sym envPackage>);
    goto L38(r115);
  D27():
    deopt 104 [c14, r54];
  D28():
    deopt 109 [package5];
  D51():
    deopt 201 [r108];
  D55():
    deopt 214 [envPackage2];
  L22():
    goto L23();
  L23():
    sym8 = ldf identical;
    base8 = ldf identical in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L156() else L157();
  L39(c34):
    c38 = `as.logical`(c34);
    if c38 then L206() else L40();
  L145():
    goto L19(c14, r54);
  L150():
    package6 = force? package5;
    checkMissing(package6);
    nzchar2 = ldf nzchar in base;
    r58 = dyn nzchar2(package6);
    check L151() else D29();
  L152():
    _guessPackageName = ldf `.guessPackageName`;
    check L153() else D30();
  L192():
    c31 = `as.logical`(r108);
    if c31 then L193() else L37();
  L200():
    envPackage3 = force? envPackage2;
    checkMissing(envPackage3);
    nzchar4 = ldf nzchar in base;
    r117 = dyn nzchar4(envPackage3);
    check L201() else D56();
  L202():
    envPackage4 = ld envPackage;
    check L203() else D57();
  D29():
    deopt 112 [r58];
  D30():
    deopt 115 [];
  D56():
    deopt 217 [r117];
  D57():
    deopt 218 [c32, envPackage4];
  L24(r64):
    c25 = `as.logical`(r64);
    if c25 then L160() else L25();
  L37():
    tryCatch3 = ldf tryCatch;
    check L196() else D53();
  L40():
    goto L41();
  L41():
    package25 = ld package;
    check L210() else D61();
  L151():
    goto L21(r58);
  L153():
    p11 = prom<V +>{
      env4 = ld env;
      env5 = force? env4;
      checkMissing(env5);
      return env5;
    };
    r61 = dyn _guessPackageName(p11);
    check L154() else D31();
  L156():
    package7 = ld package;
    check L158() else D32();
  L157():
    r63 = dyn base8(<sym package>, ".GlobalEnv");
    goto L24(r63);
  L193():
    envp8 = ld envp;
    check L194() else D52();
  L201():
    goto L38(r117);
  L203():
    envPackage5 = force? envPackage4;
    checkMissing(envPackage5);
    package21 = ld package;
    check L204() else D58();
  L206():
    warning = ldf warning;
    check L207() else D59();
  D31():
    deopt 117 [r61];
  D32():
    deopt 123 [package7];
  D52():
    deopt 202 [envp8];
  D53():
    deopt 206 [];
  D58():
    deopt 219 [c32, envPackage5, package21];
  D59():
    deopt 224 [];
  D61():
    deopt 231 [package25];
  L25():
    paste0 = ldf paste0;
    check L162() else D34();
  L26():
    sym13 = ldf nzchar;
    base13 = ldf nzchar in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L182() else L183();
  L154():
    st package = r61;
    goto L23();
  L158():
    package8 = force? package7;
    checkMissing(package8);
    identical1 = ldf identical in base;
    r65 = dyn identical1(package8, ".GlobalEnv", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L159() else D33();
  L160():
    st envns = NULL;
    goto L26();
  L194():
    envp9 = force? envp8;
    checkMissing(envp9);
    st envns = envp9;
    goto L36();
  L196():
    p26 = prom<V +>{
      asNamespace1 = ldf asNamespace;
      p25 = prom<V +>{
        package19 = ld package;
        package20 = force? package19;
        checkMissing(package20);
        return package20;
      };
      r110 = dyn asNamespace1(p25);
      return r110;
    };
    p27 = prom<V +>{
      r112 = clos inner913928130;
      return r112;
    };
    r114 = dyn tryCatch3[, error](p26, p27);
    check L197() else D54();
  L204():
    package22 = force? package21;
    checkMissing(package22);
    r118 = `!=`(envPackage5, package22);
    c35 = `as.logical`(r118);
    c36 = `&&`(c32, c35);
    goto L39(c36);
  L207():
    p32 = prom<V +>{
      gettextf1 = ldf gettextf;
      p29 = prom<V +>{
        sQuote = ldf sQuote;
        p28 = prom<V +>{
          package23 = ld package;
          package24 = force? package23;
          checkMissing(package24);
          return package24;
        };
        r120 = dyn sQuote(p28);
        return r120;
      };
      p31 = prom<V +>{
        sQuote1 = ldf sQuote;
        p30 = prom<V +>{
          envPackage6 = ld envPackage;
          envPackage7 = force? envPackage6;
          checkMissing(envPackage7);
          return envPackage7;
        };
        r123 = dyn sQuote1(p30);
        return r123;
      };
      r125 = dyn gettextf1("supplied package, %s, differs from package inferred from source, %s", p29, p31);
      return r125;
    };
    r127 = dyn warning[, domain](p32, NA_LGL);
    check L208() else D60();
  L210():
    package26 = force? package25;
    checkMissing(package26);
    l = ld env;
    packageSlot__ = ldf `packageSlot<-`;
    check L211() else D62();
  D33():
    deopt 134 [r65];
  D34():
    deopt 139 [];
  D54():
    deopt 210 [r114];
  D60():
    deopt 228 [r127];
  D62():
    deopt 234 [package26, l, package26];
  L33(r100):
    c30 = `as.logical`(r100);
    if c30 then L186() else L34();
  L159():
    goto L24(r65);
  L162():
    p12 = prom<V +>{
      package9 = ld package;
      package10 = force? package9;
      checkMissing(package10);
      return package10;
    };
    r68 = dyn paste0("package:", p12);
    check L163() else D35();
  L182():
    package15 = ld package;
    check L184() else D46();
  L183():
    r99 = dyn base13(<sym package>);
    goto L33(r99);
  L197():
    st envns = r114;
    goto L36();
  L208():
    goto L41();
  L211():
    r129 = dyn packageSlot__(l, NULL, package26);
    check L212() else D63();
  D35():
    deopt 142 [r68];
  D46():
    deopt 185 [package15];
  D63():
    deopt 236 [package26, r129];
  L34():
    goto L35(NULL);
  L35(r105):
    goto L36();
  L163():
    st pname = r68;
    tryCatch = ldf tryCatch;
    check L164() else D36();
  L184():
    package16 = force? package15;
    checkMissing(package16);
    nzchar3 = ldf nzchar in base;
    r101 = dyn nzchar3(package16);
    check L185() else D47();
  L186():
    assign = ldf assign;
    check L187() else D48();
  L212():
    st env = r129;
    sym15 = ldf names;
    base15 = ldf names in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L213() else L214();
  D36():
    deopt 145 [];
  D47():
    deopt 188 [r101];
  D48():
    deopt 190 [];
  L42(r131):
    st allObjects = r131;
    sym16 = ldf missing;
    base16 = ldf missing in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L217() else L218();
  L164():
    p13 = prom<V +>{
      sym9 = ldf `as.environment`;
      base9 = ldf `as.environment` in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r70):
      return r70;
    L1():
      pname = ld pname;
      pname1 = force? pname;
      checkMissing(pname1);
      as_environment = ldf `as.environment` in base;
      r71 = dyn as_environment(pname1);
      goto L0(r71);
    L2():
      r69 = dyn base9(<sym pname>);
      goto L0(r69);
    };
    p14 = prom<V +>{
      r73 = clos inner913928130;
      return r73;
    };
    r75 = dyn tryCatch[, error](p13, p14);
    check L165() else D37();
  L185():
    goto L33(r101);
  L187():
    p22 = prom<V +>{
      package17 = ld package;
      package18 = force? package17;
      checkMissing(package18);
      return package18;
    };
    p23 = prom<V +>{
      env6 = ld env;
      env7 = force? env6;
      checkMissing(env7);
      return env7;
    };
    r104 = dyn assign[, , envir](".packageName", p22, p23);
    check L188() else D49();
  L213():
    env8 = ld env;
    check L215() else D64();
  L214():
    r130 = dyn base15(<sym env>);
    goto L42(r130);
  D37():
    deopt 149 [r75];
  D49():
    deopt 195 [r104];
  D64():
    deopt 240 [env8];
  L43(r134):
    r136 = `!`(r134);
    c39 = `as.logical`(r136);
    if c39 then L219() else L44();
  L165():
    st envp = r75;
    sym10 = ldf `is.null`;
    base10 = ldf `is.null` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L166() else L167();
  L188():
    goto L35(r104);
  L215():
    env9 = force? env8;
    checkMissing(env9);
    names = ldf names in base;
    r132 = dyn names(env9);
    check L216() else D65();
  L217():
    missing3 = ldf missing in base;
    r135 = dyn missing3(<sym functions>);
    goto L43(r135);
  L218():
    r133 = dyn base16(<sym functions>);
    goto L43(r133);
  D65():
    deopt 243 [r132];
  L27(r77):
    c27 = `as.logical`(r77);
    if c27 then L169() else L28();
  L44():
    goto L50();
  L50():
    allMethodTables1 = ldf allMethodTables;
    check L237() else D74();
  L166():
    envp2 = ld envp;
    check L168() else D38();
  L167():
    r76 = dyn base10(<sym envp>);
    goto L27(r76);
  L216():
    goto L42(r132);
  L219():
    sym17 = ldf `is.na`;
    base17 = ldf `is.na` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L220() else L221();
  D38():
    deopt 152 [envp2];
  D74():
    deopt 281 [];
  L28():
    goto L32();
  L32():
    tryCatch2 = ldf tryCatch;
    check L180() else D44();
  L45(r138):
    st notThere = r138;
    sym19 = ldf any;
    base19 = ldf any in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L228() else L229();
  L168():
    envp3 = force? envp2;
    checkMissing(envp3);
    c26 = `==`(envp3, NULL);
    goto L27(c26);
  L169():
    tryCatch1 = ldf tryCatch;
    check L170() else D39();
  L220():
    sym18 = ldf match;
    base18 = ldf match in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L222() else L223();
  L221():
    r137 = dyn base17(<lang match(functions, allObjects)>);
    goto L45(r137);
  L237():
    r155 = dyn allMethodTables1();
    check L238() else D75();
  D39():
    deopt 156 [];
  D44():
    deopt 177 [];
  D75():
    deopt 282 [r155];
  L46(r140):
    is_na = ldf `is.na` in base;
    r142 = dyn is_na(r140);
    check L227() else D69();
  L47(r144):
    c40 = `as.logical`(r144);
    if c40 then L232() else L48();
  L170():
    p15 = prom<V +>{
      sym11 = ldf `as.environment`;
      base11 = ldf `as.environment` in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r79):
      return r79;
    L1():
      pname2 = ld pname;
      pname3 = force? pname2;
      checkMissing(pname3);
      as_environment1 = ldf `as.environment` in base;
      r80 = dyn as_environment1(pname3);
      goto L0(r80);
    L2():
      r78 = dyn base11(<sym pname>);
      goto L0(r78);
    };
    p16 = prom<V +>{
      r82 = clos inner913928130;
      return r82;
    };
    r84 = dyn tryCatch1[, error](p15, p16);
    check L171() else D40();
  L180():
    p20 = prom<V +>{
      asNamespace = ldf asNamespace;
      p19 = prom<V +>{
        package13 = ld package;
        package14 = force? package13;
        checkMissing(package14);
        return package14;
      };
      r94 = dyn asNamespace(p19);
      return r94;
    };
    p21 = prom<V +>{
      r96 = clos inner913928130;
      return r96;
    };
    r98 = dyn tryCatch2[, error](p20, p21);
    check L181() else D45();
  L222():
    functions1 = ld functions;
    check L224() else D66();
  L223():
    r139 = dyn base18(<sym functions>, <sym allObjects>);
    goto L46(r139);
  L228():
    notThere = ld notThere;
    check L230() else D70();
  L229():
    r143 = dyn base19(<sym notThere>);
    goto L47(r143);
  L238():
    st `.mnames` = r155;
    sym20 = ldf length;
    base20 = ldf length in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L239() else L240();
  D40():
    deopt 160 [r84];
  D45():
    deopt 181 [r98];
  D66():
    deopt 253 [functions1];
  D69():
    deopt 262 [r142];
  D70():
    deopt 266 [notThere];
  L48():
    goto L49(NULL);
  L49(r153):
    goto L50();
  L51(r157):
    r159 = `>`(r157, 0.0);
    c42 = `as.logical`(r159);
    if c42 then L243() else L52();
  L171():
    st envp = r84;
    sym12 = ldf `is.null`;
    base12 = ldf `is.null` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L172() else L173();
  L181():
    st envns = r98;
    goto L26();
  L224():
    functions2 = force? functions1;
    checkMissing(functions2);
    allObjects = ld allObjects;
    check L225() else D67();
  L227():
    goto L45(r142);
  L230():
    notThere1 = force? notThere;
    checkMissing(notThere1);
    any = ldf any in base;
    r145 = dyn any(notThere1);
    check L231() else D71();
  L232():
    warning1 = ldf warning;
    check L233() else D72();
  L239():
    methods1 = ld methods;
    check L241() else D76();
  L240():
    r156 = dyn base20(<sym methods>);
    goto L51(r156);
  D67():
    deopt 255 [allObjects];
  D71():
    deopt 269 [r145];
  D72():
    deopt 271 [];
  D76():
    deopt 286 [methods1];
  L29(r86):
    c29 = `as.logical`(r86);
    if c29 then L175() else L30();
  L52():
    _mnames = ld `.mnames`;
    check L262() else D88();
  L57():
    character = ldf character;
    check L267() else D93();
  L172():
    envp4 = ld envp;
    check L174() else D41();
  L173():
    r85 = dyn base12(<sym envp>);
    goto L29(r85);
  L225():
    allObjects1 = force? allObjects;
    checkMissing(allObjects1);
    match = ldf match in base;
    r141 = dyn match(functions2, allObjects1, NA_INT, NULL);
    check L226() else D68();
  L231():
    goto L47(r145);
  L233():
    p35 = prom<V +>{
      gettextf2 = ldf gettextf;
      p34 = prom<V +>{
        paste1 = ldf paste0;
        p33 = prom<V +>{
          functions3 = ld functions;
          functions4 = force? functions3;
          checkMissing(functions4);
          c41 = `is.object`(functions4);
          if c41 then L1() else L2(functions4);
        L0(dx1):
          return dx1;
        L1():
          dr = tryDispatchBuiltin.1("[", functions4);
          dc = getTryDispatchBuiltinDispatched(dr);
          if dc then L3() else L2(dr);
        L2(functions6):
          notThere2 = ld notThere;
          notThere3 = force? notThere2;
          __1 = ldf `[` in base;
          r146 = dyn __1(functions6, notThere3);
          goto L0(r146);
        L3():
          dx = getTryDispatchBuiltinValue(dr);
          goto L0(dx);
        };
        r148 = dyn paste1[, , , collapse]("\"", p33, "\"", ", ");
        return r148;
      };
      r150 = dyn gettextf2("cannot insert these (not found in source): %s", p34);
      return r150;
    };
    r152 = dyn warning1[, domain](p35, NA_LGL);
    check L234() else D73();
  L241():
    methods2 = force? methods1;
    checkMissing(methods2);
    length = ldf length in base;
    r158 = dyn length(methods2);
    check L242() else D77();
  L243():
    vapply = ldf vapply;
    check L244() else D78();
  D41():
    deopt 163 [envp4];
  D68():
    deopt 260 [r141];
  D73():
    deopt 275 [r152];
  D77():
    deopt 289 [r158];
  D78():
    deopt 293 [];
  D88():
    deopt 327 [_mnames];
  D93():
    deopt 345 [];
  L30():
    goto L31(NULL);
  L31(r91):
    goto L32();
  L174():
    envp5 = force? envp4;
    checkMissing(envp5);
    c28 = `==`(envp5, NULL);
    goto L29(c28);
  L175():
    stop = ldf stop;
    check L176() else D42();
  L226():
    goto L46(r141);
  L234():
    goto L49(r152);
  L242():
    goto L51(r158);
  L244():
    p36 = prom<V +>{
      methods3 = ld methods;
      methods4 = force? methods3;
      checkMissing(methods4);
      return methods4;
    };
    p37 = prom<V +>{
      r161 = clos inner3498582957;
      return r161;
    };
    r163 = dyn vapply(p36, p37, NA_LGL);
    check L245() else D79();
  L262():
    _mnames1 = force? _mnames;
    checkMissing(_mnames1);
    st methodNames = _mnames1;
    sub = ldf sub;
    check L263() else D89();
  L267():
    r187 = dyn character();
    check L268() else D94();
  D42():
    deopt 167 [];
  D79():
    deopt 297 [r163];
  D89():
    deopt 331 [];
  D94():
    deopt 346 [r187];
  L176():
    p18 = prom<V +>{
      gettextf = ldf gettextf;
      p17 = prom<V +>{
        package11 = ld package;
        package12 = force? package11;
        checkMissing(package12);
        return package12;
      };
      r88 = dyn gettextf("cannot find an environment corresponding to package name '%s\"", p17);
      return r88;
    };
    r90 = dyn stop[, domain](p18, NA_LGL);
    check L177() else D43();
  L245():
    st notThere = r163;
    sym21 = ldf any;
    base21 = ldf any in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L246() else L247();
  L263():
    p43 = prom<V +>{
      _TableMetaPrefix = ldf `.TableMetaPrefix`;
      r181 = dyn _TableMetaPrefix();
      return r181;
    };
    p44 = prom<V +>{
      methodNames = ld methodNames;
      methodNames1 = force? methodNames;
      checkMissing(methodNames1);
      return methodNames1;
    };
    r184 = dyn sub(p43, "", p44);
    check L264() else D90();
  L268():
    st objectsDone = r187;
    st newObjects = r187;
    st notTraceable = r187;
    sym22 = ldf seq_along;
    base22 = ldf seq_along in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L269() else L270();
  D43():
    deopt 171 [r90];
  D90():
    deopt 335 [r184];
  L53(r165):
    c43 = `as.logical`(r165);
    if c43 then L250() else L54();
  L58(r189):
    s = toForSeq(r189);
    l1 = length(s);
    i = 0;
    goto L59(i);
  L177():
    goto L31(r90);
  L246():
    notThere4 = ld notThere;
    check L248() else D80();
  L247():
    r164 = dyn base21(<sym notThere>);
    goto L53(r164);
  L264():
    st methods = r184;
    sub1 = ldf sub;
    check L265() else D91();
  L269():
    functions7 = ld functions;
    check L271() else D95();
  L270():
    r188 = dyn base22(<sym functions>);
    goto L58(r188);
  D80():
    deopt 301 [notThere4];
  D91():
    deopt 338 [];
  D95():
    deopt 351 [functions7];
  L54():
    goto L56();
  L56():
    vapply1 = ldf vapply;
    check L259() else D86();
  L59(i1):
    i2 = `+`.1(i1, 1);
    c46 = `<`.1(l1, i2);
    if c46 then L272() else L82();
  L248():
    notThere5 = force? notThere4;
    checkMissing(notThere5);
    any1 = ldf any in base;
    r166 = dyn any1(notThere5);
    check L249() else D81();
  L250():
    warning2 = ldf warning;
    check L251() else D82();
  L265():
    p45 = prom<V +>{
      methods15 = ld methods;
      methods16 = force? methods15;
      checkMissing(methods16);
      return methods16;
    };
    r186 = dyn sub1(":.*", "", p45);
    check L266() else D92();
  L271():
    functions8 = force? functions7;
    checkMissing(functions8);
    r190 = seq_along(functions8);
    goto L58(r190);
  D81():
    deopt 304 [r166];
  D82():
    deopt 306 [];
  D86():
    deopt 321 [];
  D92():
    deopt 342 [r186];
  L82():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    functions9 = ld functions;
    check L273() else D96();
  L249():
    goto L53(r166);
  L251():
    p40 = prom<V +>{
      gettextf3 = ldf gettextf;
      p39 = prom<V +>{
        paste2 = ldf paste0;
        p38 = prom<V +>{
          methods5 = ld methods;
          methods6 = force? methods5;
          checkMissing(methods6);
          c44 = `is.object`(methods6);
          if c44 then L1() else L2(methods6);
        L0(dx3):
          return dx3;
        L1():
          dr2 = tryDispatchBuiltin.1("[", methods6);
          dc1 = getTryDispatchBuiltinDispatched(dr2);
          if dc1 then L3() else L2(dr2);
        L2(methods8):
          notThere6 = ld notThere;
          notThere7 = force? notThere6;
          __2 = ldf `[` in base;
          r167 = dyn __2(methods8, notThere7);
          goto L0(r167);
        L3():
          dx2 = getTryDispatchBuiltinValue(dr2);
          goto L0(dx2);
        };
        r169 = dyn paste2[, , , collapse]("\"", p38, "\"", ", ");
        return r169;
      };
      r171 = dyn gettextf3("cannot insert methods for these functions (methods table not found in source): %s", p39);
      return r171;
    };
    r173 = dyn warning2[, domain](p40, NA_LGL);
    check L252() else D83();
  L259():
    p41 = prom<V +>{
      methods13 = ld methods;
      methods14 = force? methods13;
      checkMissing(methods14);
      return methods14;
    };
    p42 = prom<V +>{
      r177 = clos inner3498582957;
      return r177;
    };
    r179 = dyn vapply1(p41, p42, "");
    check L260() else D87();
  L266():
    st methods = r186;
    goto L57();
  L272():
    sym32 = ldf length;
    base32 = ldf length in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L354() else L355();
  D83():
    deopt 310 [r173];
  D87():
    deopt 325 [r179];
  D96():
    deopt 354 [i2, functions9];
  L83(r249):
    r251 = `>`(r249, 0.0);
    c86 = `as.logical`(r251);
    if c86 then L358() else L84();
  L252():
    methods9 = ld methods;
    check L253() else D84();
  L260():
    st methodNames = r179;
    goto L57();
  L273():
    functions10 = force? functions9;
    checkMissing(functions10);
    c47 = `is.object`(functions10);
    if c47 then L274() else L275(i2, functions10);
  L354():
    notTraceable2 = ld notTraceable;
    check L356() else D136();
  L355():
    r248 = dyn base32(<sym notTraceable>);
    goto L83(r248);
  D84():
    deopt 311 [methods9];
  D136():
    deopt 497 [notTraceable2];
  L60(i8, dx8):
    st this = dx8;
    st thisWhere = NULL;
    sym23 = ldf `is.null`;
    base23 = ldf `is.null` in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L278() else L279();
  L84():
    goto L85();
  L85():
    sym33 = ldf length;
    base33 = ldf length in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L362() else L363();
  L253():
    methods10 = force? methods9;
    checkMissing(methods10);
    c45 = `is.object`(methods10);
    if c45 then L254() else L255(methods10);
  L274():
    dr6 = tryDispatchBuiltin.1("[[", functions10);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L276() else L275(i2, dr6);
  L275(i6, functions12):
    i9 = ld i;
    check L277() else D97();
  L356():
    notTraceable3 = force? notTraceable2;
    checkMissing(notTraceable3);
    length1 = ldf length in base;
    r250 = dyn length1(notTraceable3);
    check L357() else D137();
  L358():
    message = ldf message;
    check L359() else D138();
  D97():
    deopt 356 [i6, functions12, i9];
  D137():
    deopt 500 [r250];
  D138():
    deopt 504 [];
  L55(dx5):
    st methods = dx5;
    goto L56();
  L61(i13, r193):
    c49 = `as.logical`(r193);
    if c49 then L62(i13, c49) else L281();
  L86(r260):
    r262 = `>`(r260, 0.0);
    c87 = `as.logical`(r262);
    if c87 then L366() else L87();
  L254():
    dr4 = tryDispatchBuiltin.1("[", methods10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L256() else L255(dr4);
  L255(methods12):
    notThere8 = ld notThere;
    check L257() else D85();
  L276():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L60(i2, dx7);
  L277():
    i10 = force? i9;
    __4 = ldf `[[` in base;
    r191 = dyn __4(functions12, i10);
    goto L60(i6, r191);
  L278():
    envns = ld envns;
    check L280() else D98();
  L279():
    r192 = dyn base23(<sym envns>);
    goto L61(i8, r192);
  L357():
    goto L83(r250);
  L359():
    p67 = prom<V +>{
      gettextf4 = ldf gettextf;
      p66 = prom<V +>{
        paste3 = ldf paste;
        p65 = prom<V +>{
          notTraceable4 = ld notTraceable;
          notTraceable5 = force? notTraceable4;
          checkMissing(notTraceable5);
          return notTraceable5;
        };
        r253 = dyn paste3[, collapse](p65, ", ");
        return r253;
      };
      r255 = dyn gettextf4("Non-function objects are not currently inserted (not traceable): %s", p66);
      return r255;
    };
    r257 = dyn message[, domain](p67, NA_LGL);
    check L360() else D139();
  L362():
    newObjects2 = ld newObjects;
    check L364() else D140();
  L363():
    r259 = dyn base33(<sym newObjects>);
    goto L86(r259);
  D85():
    deopt 313 [methods12, notThere8];
  D98():
    deopt 364 [i8, envns];
  D139():
    deopt 508 [r257];
  D140():
    deopt 513 [newObjects2];
  L62(i14, c50):
    c55 = `as.logical`(c50);
    if c55 then L285() else L63();
  L87():
    goto L88();
  L88():
    sym34 = ldf length;
    base34 = ldf length in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L370() else L371();
  L256():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L55(dx4);
  L257():
    notThere9 = force? notThere8;
    checkMissing(notThere9);
    r174 = `!`(notThere9);
    __3 = ldf `[` in base;
    r175 = dyn __3(methods12, r174);
    goto L55(r175);
  L280():
    envns1 = force? envns;
    checkMissing(envns1);
    c48 = `==`(envns1, NULL);
    goto L61(i8, c48);
  L281():
    exists1 = ldf exists;
    check L282() else D99();
  L360():
    goto L85();
  L364():
    newObjects3 = force? newObjects2;
    checkMissing(newObjects3);
    length2 = ldf length in base;
    r261 = dyn length2(newObjects3);
    check L365() else D141();
  L366():
    message1 = ldf message;
    check L367() else D142();
  D99():
    deopt 368 [i13, c49];
  D141():
    deopt 516 [r261];
  D142():
    deopt 520 [];
  L63():
    envns2 = ld envns;
    check L290() else D104();
  L64(i19):
    get3 = ldf get;
    check L303() else D111();
  L89(r271):
    r273 = `>`(r271, 0.0);
    c88 = `as.logical`(r273);
    if c88 then L374() else L90();
  L282():
    p46 = prom<V +>{
      this = ld this;
      this1 = force? this;
      checkMissing(this1);
      return this1;
    };
    p47 = prom<V +>{
      envp10 = ld envp;
      envp11 = force? envp10;
      checkMissing(envp11);
      return envp11;
    };
    r196 = dyn exists1[, envir, inherits](p46, p47, FALSE);
    check L283() else D100();
  L285():
    envp12 = ld envp;
    check L286() else D101();
  L365():
    goto L86(r261);
  L367():
    p70 = prom<V +>{
      gettextf5 = ldf gettextf;
      p69 = prom<V +>{
        paste4 = ldf paste;
        p68 = prom<V +>{
          newObjects4 = ld newObjects;
          newObjects5 = force? newObjects4;
          checkMissing(newObjects5);
          return newObjects5;
        };
        r264 = dyn paste4[, collapse](p68, ", ");
        return r264;
      };
      r266 = dyn gettextf5("New functions are not currently inserted (not untraceable): %s", p69);
      return r266;
    };
    r268 = dyn message1[, domain](p70, NA_LGL);
    check L368() else D143();
  L370():
    objectsDone2 = ld objectsDone;
    check L372() else D144();
  L371():
    r270 = dyn base34(<sym objectsDone>);
    goto L89(r270);
  D100():
    deopt 374 [i13, c49, r196];
  D101():
    deopt 376 [i14, envp12];
  D104():
    deopt 386 [i14, envns2];
  D111():
    deopt 414 [i19];
  D143():
    deopt 524 [r268];
  D144():
    deopt 529 [objectsDone2];
  L90():
    goto L91();
  L91():
    sym35 = ldf seq_along;
    base35 = ldf seq_along in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L378() else L379();
  L283():
    c52 = `as.logical`(r196);
    c53 = `||`(c49, c52);
    goto L62(i13, c53);
  L286():
    envp13 = force? envp12;
    checkMissing(envp13);
    st envwhere = envp13;
    get1 = ldf get;
    check L287() else D102();
  L290():
    envns3 = force? envns2;
    checkMissing(envns3);
    st envwhere = envns3;
    sym24 = ldf `is.environment`;
    base24 = ldf `is.environment` in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L291() else L292();
  L303():
    p54 = prom<V +>{
      this8 = ld this;
      this9 = force? this8;
      checkMissing(this9);
      return this9;
    };
    p55 = prom<V +>{
      env10 = ld env;
      env11 = force? env10;
      checkMissing(env11);
      return env11;
    };
    r212 = dyn get3[, envir](p54, p55);
    check L304() else D112();
  L368():
    goto L88();
  L372():
    objectsDone3 = force? objectsDone2;
    checkMissing(objectsDone3);
    length3 = ldf length in base;
    r272 = dyn length3(objectsDone3);
    check L373() else D145();
  L374():
    message2 = ldf message;
    check L375() else D146();
  D102():
    deopt 380 [i14];
  D112():
    deopt 418 [i19, r212];
  D145():
    deopt 532 [r272];
  D146():
    deopt 536 [];
  L65(i22, r202):
    c56 = `as.logical`(r202);
    if c56 then L295() else L66(i22, c56);
  L92(r282):
    s1 = toForSeq(r282);
    l2 = length(s1);
    i64 = 0;
    goto L93(i64);
  L287():
    p48 = prom<V +>{
      this2 = ld this;
      this3 = force? this2;
      checkMissing(this3);
      return this3;
    };
    p49 = prom<V +>{
      envp14 = ld envp;
      envp15 = force? envp14;
      checkMissing(envp15);
      return envp15;
    };
    r199 = dyn get1[, envir](p48, p49);
    check L288() else D103();
  L291():
    envns4 = ld envns;
    check L293() else D105();
  L292():
    r201 = dyn base24(<sym envns>);
    goto L65(i14, r201);
  L304():
    st thisObj = r212;
    sym25 = ldf `is.function`;
    base25 = ldf `is.function` in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L305() else L306();
  L373():
    goto L89(r272);
  L375():
    p73 = prom<V +>{
      gettextf6 = ldf gettextf;
      p72 = prom<V +>{
        paste5 = ldf paste;
        p71 = prom<V +>{
          objectsDone4 = ld objectsDone;
          objectsDone5 = force? objectsDone4;
          checkMissing(objectsDone5);
          return objectsDone5;
        };
        r275 = dyn paste5[, collapse](p71, ", ");
        return r275;
      };
      r277 = dyn gettextf6("Modified functions inserted through trace(): %s", p72);
      return r277;
    };
    r279 = dyn message2[, domain](p73, NA_LGL);
    check L376() else D147();
  L378():
    methods17 = ld methods;
    check L380() else D148();
  L379():
    r281 = dyn base35(<sym methods>);
    goto L92(r281);
  D103():
    deopt 384 [i14, r199];
  D105():
    deopt 391 [i14, envns4];
  D147():
    deopt 540 [r279];
  D148():
    deopt 544 [methods17];
  L66(i24, c58):
    c62 = `as.logical`(c58);
    if c62 then L299() else L67();
  L68(i30, r214):
    c63 = `as.logical`(r214);
    if c63 then L309() else L69(i30, c63);
  L93(i65):
    i66 = `+`.1(i65, 1);
    c89 = `<`.1(l2, i66);
    if c89 then L381() else L94();
  L288():
    st thisWhere = r199;
    goto L64(i14);
  L293():
    envns5 = force? envns4;
    checkMissing(envns5);
    is_environment1 = ldf `is.environment` in base;
    r203 = dyn is_environment1(envns5);
    check L294() else D106();
  L295():
    exists2 = ldf exists;
    check L296() else D107();
  L305():
    thisObj = ld thisObj;
    check L307() else D113();
  L306():
    r213 = dyn base25(<sym thisObj>);
    goto L68(i19, r213);
  L376():
    goto L91();
  L380():
    methods18 = force? methods17;
    checkMissing(methods18);
    r283 = seq_along(methods18);
    goto L92(r283);
  D106():
    deopt 394 [i14, r203];
  D107():
    deopt 396 [i22, c56];
  D113():
    deopt 422 [i19, thisObj];
  L67():
    goto L64(i24);
  L69(i32, c65):
    c72 = `as.logical`(c65);
    if c72 then L315() else L71(i32, c72);
  L94():
    x1 = `[[`(s1, i66, NULL, TRUE);
    st i = x1;
    _copyMethods = ldf `.copyMethods`;
    check L382() else D149();
  L294():
    goto L65(i14, r203);
  L296():
    p50 = prom<V +>{
      this4 = ld this;
      this5 = force? this4;
      checkMissing(this5);
      return this5;
    };
    p51 = prom<V +>{
      envns6 = ld envns;
      envns7 = force? envns6;
      checkMissing(envns7);
      return envns7;
    };
    r206 = dyn exists2[, envir, inherits](p50, p51, FALSE);
    check L297() else D108();
  L299():
    get2 = ldf get;
    check L300() else D109();
  L307():
    thisObj1 = force? thisObj;
    checkMissing(thisObj1);
    is_function = ldf `is.function` in base;
    r215 = dyn is_function(thisObj1);
    check L308() else D114();
  L309():
    sym26 = ldf `is.function`;
    base26 = ldf `is.function` in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L310() else L311();
  L381():
    sym36 = ldf `is.environment`;
    base36 = ldf `is.environment` in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L384() else L385();
  D108():
    deopt 402 [i22, c56, r206];
  D109():
    deopt 405 [i24];
  D114():
    deopt 425 [i19, r215];
  D149():
    deopt 548 [i66];
  L70(i35, c68, r217):
    c69 = `as.logical`(r217);
    c70 = `&&`(c68, c69);
    goto L69(i35, c70);
  L71(i38, c74):
    c78 = `as.logical`(c74);
    if c78 then L319() else L72();
  L95(r292):
    r294 = `!`(r292);
    c92 = `as.logical`(r294);
    if c92 then L388() else L96();
  L297():
    c59 = `as.logical`(r206);
    c60 = `&&`(c56, c59);
    goto L66(i22, c60);
  L300():
    p52 = prom<V +>{
      this6 = ld this;
      this7 = force? this6;
      checkMissing(this7);
      return this7;
    };
    p53 = prom<V +>{
      envns8 = ld envns;
      envns9 = force? envns8;
      checkMissing(envns9);
      return envns9;
    };
    r209 = dyn get2[, envir](p52, p53);
    check L301() else D110();
  L308():
    goto L68(i19, r215);
  L310():
    thisWhere = ld thisWhere;
    check L312() else D115();
  L311():
    r216 = dyn base26(<sym thisWhere>);
    goto L70(i30, c63, r216);
  L315():
    differs = ldf differs;
    check L316() else D117();
  L382():
    p74 = prom<V +>{
      methods19 = ld methods;
      methods20 = force? methods19;
      checkMissing(methods20);
      c90 = `is.object`(methods20);
      if c90 then L1() else L2(methods20);
    L0(dx10):
      return dx10;
    L1():
      dr8 = tryDispatchBuiltin.1("[[", methods20);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(methods22):
      i69 = ld i;
      i70 = force? i69;
      __5 = ldf `[[` in base;
      r284 = dyn __5(methods22, i70);
      goto L0(r284);
    L3():
      dx9 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx9);
    };
    p75 = prom<V +>{
      methodNames2 = ld methodNames;
      methodNames3 = force? methodNames2;
      checkMissing(methodNames3);
      c91 = `is.object`(methodNames3);
      if c91 then L1() else L2(methodNames3);
    L0(dx12):
      return dx12;
    L1():
      dr10 = tryDispatchBuiltin.1("[[", methodNames3);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(methodNames5):
      i71 = ld i;
      i72 = force? i71;
      __6 = ldf `[[` in base;
      r286 = dyn __6(methodNames5, i72);
      goto L0(r286);
    L3():
      dx11 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx11);
    };
    p76 = prom<V +>{
      env14 = ld env;
      env15 = force? env14;
      checkMissing(env15);
      return env15;
    };
    p77 = prom<V +>{
      envp16 = ld envp;
      envp17 = force? envp16;
      checkMissing(envp17);
      return envp17;
    };
    r290 = dyn _copyMethods(p74, p75, p76, p77);
    check L383() else D150();
  L384():
    source16 = ld source;
    check L386() else D151();
  L385():
    r291 = dyn base36(<sym source>);
    goto L95(r291);
  D110():
    deopt 409 [i24, r209];
  D115():
    deopt 428 [i30, c63, thisWhere];
  D117():
    deopt 434 [i32, c72];
  D150():
    deopt 553 [i66, r290];
  D151():
    deopt 559 [source16];
  L72():
    force1 = ld force;
    check L328() else D124();
  L74(i45):
    goto L59(i45);
  L96():
    sym38 = ldf invisible;
    base38 = ldf invisible in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L396() else L397();
  L301():
    st thisWhere = r209;
    goto L64(i24);
  L312():
    thisWhere1 = force? thisWhere;
    checkMissing(thisWhere1);
    is_function1 = ldf `is.function` in base;
    r218 = dyn is_function1(thisWhere1);
    check L313() else D116();
  L316():
    p56 = prom<V +>{
      thisObj2 = ld thisObj;
      thisObj3 = force? thisObj2;
      checkMissing(thisObj3);
      return thisObj3;
    };
    p57 = prom<V +>{
      thisWhere2 = ld thisWhere;
      thisWhere3 = force? thisWhere2;
      checkMissing(thisWhere3);
      return thisWhere3;
    };
    r221 = dyn differs(p56, p57);
    check L317() else D118();
  L319():
    suppressMessages = ldf suppressMessages;
    check L320() else D119();
  L383():
    goto L93(i66);
  L386():
    source17 = force? source16;
    checkMissing(source17);
    is_environment2 = ldf `is.environment` in base;
    r293 = dyn is_environment2(source17);
    check L387() else D152();
  L388():
    lockEnvironment = ldf lockEnvironment;
    check L389() else D153();
  D116():
    deopt 431 [i30, c63, r218];
  D118():
    deopt 437 [i32, c72, r221];
  D119():
    deopt 440 [i38];
  D124():
    deopt 452 [i38, force1];
  D152():
    deopt 562 [r293];
  D153():
    deopt 565 [];
  L98(r301):
    popenv;
    return r301;
  L313():
    goto L70(i30, c63, r218);
  L317():
    c75 = `as.logical`(r221);
    c76 = `&&`(c72, c75);
    goto L71(i32, c76);
  L320():
    p61 = prom<V +>{
      _TraceWithMethods = ldf `.TraceWithMethods`;
      p58 = prom<V +>{
        this10 = ld this;
        this11 = force? this10;
        checkMissing(this11);
        return this11;
      };
      p59 = prom<V +>{
        envwhere = ld envwhere;
        envwhere1 = force? envwhere;
        checkMissing(envwhere1);
        return envwhere1;
      };
      p60 = prom<V +>{
        env12 = ld env;
        env13 = force? env12;
        checkMissing(env13);
        return env13;
      };
      r225 = dyn _TraceWithMethods[, where, edit](p58, p59, p60);
      return r225;
    };
    r227 = dyn suppressMessages(p61);
    check L321() else D120();
  L328():
    force2 = force? force1;
    checkMissing(force2);
    c80 = `as.logical`(force2);
    if c80 then L329() else L75();
  L387():
    goto L95(r293);
  L389():
    p78 = prom<V +>{
      env16 = ld env;
      env17 = force? env16;
      checkMissing(env17);
      return env17;
    };
    r296 = dyn lockEnvironment[, bindings](p78, TRUE);
    check L390() else D154();
  L396():
    source18 = ld source;
    check L398() else D157();
  L397():
    r300 = dyn base38(<sym source>);
    goto L98(r300);
  D120():
    deopt 442 [i38, r227];
  D154():
    deopt 569 [r296];
  D157():
    deopt 578 [source18];
  L75():
    sym28 = ldf `is.function`;
    base28 = ldf `is.function` in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L333() else L334();
  L321():
    sym27 = ldf c;
    base27 = ldf c in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L322() else L323();
  L329():
    assign1 = ldf assign;
    check L330() else D125();
  L390():
    sym37 = ldf invisible;
    base37 = ldf invisible in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L391() else L392();
  L398():
    source19 = force? source18;
    checkMissing(source19);
    invisible1 = ldf invisible in base;
    r302 = dyn invisible1(source19);
    check L399() else D158();
  D125():
    deopt 455 [i38];
  D158():
    deopt 581 [r302];
  L73(i44, r229):
    st objectsDone = r229;
    goto L74(i44);
  L76(i50, r237):
    r239 = `!`(r237);
    c81 = `as.logical`(r239);
    if c81 then L337() else L77();
  L97(r298):
    popenv;
    return r298;
  L322():
    objectsDone = ld objectsDone;
    check L324() else D121();
  L323():
    r228 = dyn base27(<sym objectsDone>, <sym this>);
    goto L73(i38, r228);
  L330():
    p62 = prom<V +>{
      this14 = ld this;
      this15 = force? this14;
      checkMissing(this15);
      return this15;
    };
    p63 = prom<V +>{
      thisObj4 = ld thisObj;
      thisObj5 = force? thisObj4;
      checkMissing(thisObj5);
      return thisObj5;
    };
    p64 = prom<V +>{
      envwhere2 = ld envwhere;
      envwhere3 = force? envwhere2;
      checkMissing(envwhere3);
      return envwhere3;
    };
    r235 = dyn assign1[, , envir](p62, p63, p64);
    check L331() else D126();
  L333():
    thisObj6 = ld thisObj;
    check L335() else D127();
  L334():
    r236 = dyn base28(<sym thisObj>);
    goto L76(i38, r236);
  L391():
    env18 = ld env;
    check L393() else D155();
  L392():
    r297 = dyn base37(<sym env>);
    goto L97(r297);
  L399():
    goto L98(r302);
  D121():
    deopt 445 [i38, objectsDone];
  D126():
    deopt 460 [i38, r235];
  D127():
    deopt 463 [i38, thisObj6];
  D155():
    deopt 572 [env18];
  L77():
    sym30 = ldf `is.null`;
    base30 = ldf `is.null` in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L344() else L345();
  L324():
    objectsDone1 = force? objectsDone;
    checkMissing(objectsDone1);
    this12 = ld this;
    check L325() else D122();
  L331():
    goto L74(i38);
  L335():
    thisObj7 = force? thisObj6;
    checkMissing(thisObj7);
    is_function2 = ldf `is.function` in base;
    r238 = dyn is_function2(thisObj7);
    check L336() else D128();
  L337():
    sym29 = ldf c;
    base29 = ldf c in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L338() else L339();
  L393():
    env19 = force? env18;
    checkMissing(env19);
    invisible = ldf invisible in base;
    r299 = dyn invisible(env19);
    check L394() else D156();
  D122():
    deopt 447 [i38, this12];
  D128():
    deopt 466 [i38, r238];
  D156():
    deopt 575 [r299];
  L78(i55, r241):
    st notTraceable = r241;
    goto L74(i55);
  L79(i58, r244):
    c84 = `as.logical`(r244);
    if c84 then L347() else L80();
  L325():
    this13 = force? this12;
    checkMissing(this13);
    c79 = ldf c in base;
    r230 = dyn c79(objectsDone1, this13);
    check L326() else D123();
  L336():
    goto L76(i38, r238);
  L338():
    notTraceable = ld notTraceable;
    check L340() else D129();
  L339():
    r240 = dyn base29(<sym notTraceable>, <sym this>);
    goto L78(i50, r240);
  L344():
    thisWhere4 = ld thisWhere;
    check L346() else D132();
  L345():
    r243 = dyn base30(<sym thisWhere>);
    goto L79(i50, r243);
  L394():
    goto L97(r299);
  D123():
    deopt 450 [i38, r230];
  D129():
    deopt 470 [i50, notTraceable];
  D132():
    deopt 478 [i50, thisWhere4];
  L80():
    goto L74(i58);
  L326():
    goto L73(i38, r230);
  L340():
    notTraceable1 = force? notTraceable;
    checkMissing(notTraceable1);
    this16 = ld this;
    check L341() else D130();
  L346():
    thisWhere5 = force? thisWhere4;
    checkMissing(thisWhere5);
    c83 = `==`(thisWhere5, NULL);
    goto L79(i50, c83);
  L347():
    sym31 = ldf c;
    base31 = ldf c in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L348() else L349();
  D130():
    deopt 472 [i50, this16];
  L81(i63, r246):
    st newObjects = r246;
    goto L74(i63);
  L341():
    this17 = force? this16;
    checkMissing(this17);
    c82 = ldf c in base;
    r242 = dyn c82(notTraceable1, this17);
    check L342() else D131();
  L348():
    newObjects = ld newObjects;
    check L350() else D133();
  L349():
    r245 = dyn base31(<sym newObjects>, <sym this>);
    goto L81(i58, r245);
  D131():
    deopt 475 [i50, r242];
  D133():
    deopt 483 [i58, newObjects];
  L342():
    goto L78(i50, r242);
  L350():
    newObjects1 = force? newObjects;
    checkMissing(newObjects1);
    this18 = ld this;
    check L351() else D134();
  D134():
    deopt 485 [i58, this18];
  L351():
    this19 = force? this18;
    checkMissing(this19);
    c85 = ldf c in base;
    r247 = dyn c85(newObjects1, this19);
    check L352() else D135();
  D135():
    deopt 488 [i58, r247];
  L352():
    goto L81(i58, r247);
  }
}
fun inner2708337952() {
  () -+> V { reg allObjects:*, reg allObjects1:V, reg c:L, reg allObjects3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg grepl:cls, reg MPattern:*, reg MPattern1:V, reg p:p(V +), reg allObjects4:*, reg allObjects5:V, reg p1:p(V +), reg r2:V, reg grepl1:cls, reg CPattern:*, reg CPattern1:V, reg p2:p(V +), reg allObjects6:*, reg allObjects7:V, reg p3:p(V +), reg r5:V, reg r6:V, reg allObjects8:*, reg allObjects9:V, reg r7:V, reg r8:V, reg r9:V, reg __:cls, reg r10:V |
    mkenv;
    allObjects = ld allObjects;
    check L1() else D0();
  D0():
    deopt 0 [allObjects];
  L1():
    allObjects1 = force? allObjects;
    checkMissing(allObjects1);
    c = `is.object`(allObjects1);
    if c then L2() else L3(allObjects1);
  L0(dx1):
    popenv;
    return dx1;
  L2():
    dr = tryDispatchBuiltin.1("[", allObjects1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L4() else L3(dr);
  L3(allObjects3):
    grepl = ldf grepl;
    check L5() else D1();
  D1():
    deopt 3 [allObjects3];
  L4():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L5():
    p = prom<V +>{
      MPattern = ld MPattern;
      MPattern1 = force? MPattern;
      checkMissing(MPattern1);
      return MPattern1;
    };
    p1 = prom<V +>{
      allObjects4 = ld allObjects;
      allObjects5 = force? allObjects4;
      checkMissing(allObjects5);
      return allObjects5;
    };
    r2 = dyn grepl(p, p1);
    check L6() else D2();
  D2():
    deopt 6 [allObjects3, r2];
  L6():
    grepl1 = ldf grepl;
    check L7() else D3();
  D3():
    deopt 7 [allObjects3, r2];
  L7():
    p2 = prom<V +>{
      CPattern = ld CPattern;
      CPattern1 = force? CPattern;
      checkMissing(CPattern1);
      return CPattern1;
    };
    p3 = prom<V +>{
      allObjects6 = ld allObjects;
      allObjects7 = force? allObjects6;
      checkMissing(allObjects7);
      return allObjects7;
    };
    r5 = dyn grepl1(p2, p3);
    check L8() else D4();
  D4():
    deopt 10 [allObjects3, r2, r5];
  L8():
    r6 = `||`(r2, r5);
    allObjects8 = ld allObjects;
    check L9() else D5();
  D5():
    deopt 12 [allObjects3, r6, ".cacheOnAssign", allObjects8];
  L9():
    allObjects9 = force? allObjects8;
    checkMissing(allObjects9);
    r7 = `==`(".cacheOnAssign", allObjects9);
    r8 = `||`(r6, r7);
    r9 = `!`(r8);
    __ = ldf `[` in base;
    r10 = dyn __(allObjects3, r9);
    goto L0(r10);
  }
}
fun inner1728155755(f1, f2) {
  (reg f1:*, reg f2:*) -+> V { var f1:*, var f2:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg body:cls, reg f3:*, reg f4:V, reg p:p(V +), reg r3:V, reg body1:cls, reg f5:*, reg f6:V, reg p1:p(V +), reg r5:V, reg identical:cls, reg r6:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg c5:L, reg r8:V, reg args:cls, reg f7:*, reg f8:V, reg p2:p(V +), reg r10:V, reg args1:cls, reg f9:*, reg f10:V, reg p3:p(V +), reg r12:V, reg identical1:cls, reg r13:V, reg c6:L, reg c7:V, reg r14:V |
    mkenv;
    st f1 = f1;
    st f2 = f2;
    sym = ldf identical;
    base = ldf identical in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    c = `as.logical`(r1);
    if c then L10() else L1(c);
  L3():
    body = ldf body;
    check L5() else D0();
  L4():
    r = dyn base(<lang body(f1)>, <lang body(f2)>);
    goto L0(r);
  D0():
    deopt 3 [];
  L1(c2):
    r14 = `!`(c2);
    popenv;
    return r14;
  L5():
    p = prom<V +>{
      f3 = ld f1;
      f4 = force? f3;
      checkMissing(f4);
      return f4;
    };
    r3 = dyn body(p);
    check L6() else D1();
  L10():
    sym1 = ldf identical;
    base1 = ldf identical in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  D1():
    deopt 5 [r3];
  L2(c5, r8):
    c6 = `as.logical`(r8);
    c7 = `&&`(c5, c6);
    goto L1(c7);
  L6():
    body1 = ldf body;
    check L7() else D2();
  L11():
    args = ldf args;
    check L13() else D5();
  L12():
    r7 = dyn base1(<lang args(f1)>, <lang args(f2)>);
    goto L2(c, r7);
  D2():
    deopt 7 [];
  D5():
    deopt 22 [c];
  L7():
    p1 = prom<V +>{
      f5 = ld f2;
      f6 = force? f5;
      checkMissing(f6);
      return f6;
    };
    r5 = dyn body1(p1);
    check L8() else D3();
  L13():
    p2 = prom<V +>{
      f7 = ld f1;
      f8 = force? f7;
      checkMissing(f8);
      return f8;
    };
    r10 = dyn args(p2);
    check L14() else D6();
  D3():
    deopt 9 [r5];
  D6():
    deopt 24 [c, r10];
  L8():
    identical = ldf identical in base;
    r6 = dyn identical(r3, r5, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L9() else D4();
  L14():
    args1 = ldf args;
    check L15() else D7();
  D4():
    deopt 18 [r6];
  D7():
    deopt 26 [c];
  L9():
    goto L0(r6);
  L15():
    p3 = prom<V +>{
      f9 = ld f2;
      f10 = force? f9;
      checkMissing(f10);
      return f10;
    };
    r12 = dyn args1(p3);
    check L16() else D8();
  D8():
    deopt 28 [c, r12];
  L16():
    identical1 = ldf identical in base;
    r13 = dyn identical1(r10, r12, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L17() else D9();
  D9():
    deopt 37 [c, r13];
  L17():
    goto L2(c, r13);
  }
}
fun inner913928130(cond) {
  (reg cond:*) -+> V { var cond:* |
    mkenv;
    st cond = cond;
    popenv;
    return NULL;
  }
}
fun inner3498582957(fname) {
  (reg fname:*) -+> V { var fname:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg grep:cls, reg fname1:*, reg fname2:V, reg p:p(V +), reg _mnames:*, reg _mnames1:V, reg p1:p(V +), reg r4:V, reg length:cls, reg r5:V, reg r6:V |
    mkenv;
    st fname = fname;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    r6 = `==`(r1, 0.0);
    popenv;
    return r6;
  L1():
    grep = ldf grep;
    check L3() else D0();
  L2():
    r = dyn base(<lang grep(fname, .mnames, fixed=TRUE)>);
    goto L0(r);
  D0():
    deopt 3 [];
  L3():
    p = prom<V +>{
      fname1 = ld fname;
      fname2 = force? fname1;
      checkMissing(fname2);
      return fname2;
    };
    p1 = prom<V +>{
      _mnames = ld `.mnames`;
      _mnames1 = force? _mnames;
      checkMissing(_mnames1);
      return _mnames1;
    };
    r4 = dyn grep[, , fixed](p, p1, TRUE);
    check L4() else D1();
  D1():
    deopt 8 [r4];
  L4():
    length = ldf length in base;
    r5 = dyn length(r4);
    check L5() else D2();
  D2():
    deopt 10 [r5];
  L5():
    goto L0(r5);
  }
}