fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1586338293;
    st registerS3methods = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1586338293(info, package, env) {
  (reg info:*, reg package:*, reg env:*) -+> V { var info:*, var package:*, var env:*, reg NROW:cls, reg info1:*, reg info2:V, reg p:p(V +), reg r1:V, reg n:*, reg n1:V, reg r2:V, reg c:L, reg r5:cls, reg matrix:cls, reg r6:V, reg r7:cls, reg paste:cls, reg info3:*, reg info4:V, reg c1:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r8:V, reg p1:p(V +), reg info7:*, reg info8:V, reg c2:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r10:V, reg p2:p(V +), reg r12:V, reg sym:cls, reg base:cls, reg guard:L, reg r13:V, reg r14:V, reg info11:*, reg info12:V, reg c3:L, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r15:V, reg is_na:cls, reg r16:V, reg methname:*, reg methname1:V, reg c4:L, reg methname3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg z:*, reg z1:V, reg __3:cls, reg r17:V, reg l:*, reg c5:L, reg dx9:V, reg l2:*, reg dr8:V, reg dc4:L, reg dx11:V, reg dx13:V, reg z2:*, reg z3:V, reg ___:cls, reg r18:V, reg ncol:cls, reg info15:*, reg info16:V, reg p3:p(V +), reg r20:V, reg r21:V, reg c6:L, reg cbind:cls, reg info17:*, reg info18:V, reg p4:p(V +), reg r23:V, reg cbind1:cls, reg info19:*, reg info20:V, reg c7:L, reg dr10:V, reg dc5:L, reg dx14:V, reg dx15:V, reg __4:cls, reg r25:V, reg p5:p(V +), reg methname4:*, reg methname5:V, reg p6:p(V +), reg info23:*, reg info24:V, reg c8:L, reg dr12:V, reg dc6:L, reg dx16:V, reg dx17:V, reg __5:cls, reg r28:V, reg p7:p(V +), reg r30:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r31:V, reg r32:V, reg env1:*, reg env2:V, reg names:cls, reg r33:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r34:V, reg r35:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r36:V, reg r37:V, reg info27:*, reg info28:V, reg c9:L, reg dr14:V, reg dc7:L, reg dx18:V, reg dx19:V, reg __6:cls, reg r38:V, reg loc:*, reg loc1:V, reg match:cls, reg r39:V, reg r40:V, reg any:cls, reg r41:V, reg c10:L, reg vapply:cls, reg info31:*, reg info32:V, reg c11:L, reg info34:V, reg dr16:V, reg dc8:L, reg dx20:V, reg dx21:V, reg notex:*, reg notex1:V, reg __7:cls, reg r42:V, reg p8:p(V +), reg exists:*, reg exists1:V, reg p9:p(V +), reg logical:cls, reg r45:V, reg p10:p(V +), reg parent_env:cls, reg env3:*, reg env4:V, reg p11:p(V +), reg r48:V, reg p12:p(V +), reg r50:V, reg found:*, reg found1:V, reg r51:V, reg l3:*, reg c12:L, reg r53:V, reg l5:*, reg dr18:V, reg dc9:L, reg dx22:V, reg dx23:V, reg notex2:*, reg notex3:V, reg ___1:cls, reg r56:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r57:V, reg r58:V, reg notex4:*, reg notex5:V, reg any1:cls, reg r59:V, reg c13:L, reg warning:cls, reg sprintf:cls, reg ngettext:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r60:V, reg r61:V, reg notex6:*, reg notex7:V, reg sum:cls, reg r62:V, reg p13:p(V +), reg r64:V, reg p14:p(V +), reg paste1:cls, reg sQuote:cls, reg info35:*, reg info36:V, reg c14:L, reg info38:V, reg dr20:V, reg dc10:L, reg dx24:V, reg dx25:V, reg notex8:*, reg notex9:V, reg __8:cls, reg r66:V, reg p15:p(V +), reg r68:V, reg p16:p(V +), reg r70:V, reg p17:p(V +), reg r72:V, reg p18:p(V +), reg r74:V, reg Info:*, reg Info1:V, reg c15:L, reg Info3:V, reg dr22:V, reg dc11:L, reg dx26:V, reg dx27:V, reg notex10:*, reg notex11:V, reg r75:V, reg __9:cls, reg r76:V, reg dx28:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r77:V, reg r78:V, reg Info4:*, reg Info5:V, reg c16:L, reg dr24:V, reg dc12:L, reg dx30:V, reg dx31:V, reg __10:cls, reg r79:V, reg is_na1:cls, reg r80:V, reg Info8:*, reg Info9:V, reg c17:L, reg Info11:V, reg dr26:V, reg dc13:L, reg dx32:V, reg dx33:V, reg eager:*, reg eager1:V, reg r81:V, reg __11:cls, reg r82:V, reg Info12:*, reg Info13:V, reg c18:L, reg Info15:V, reg dr28:V, reg dc14:L, reg dx34:V, reg dx35:V, reg eager2:*, reg eager3:V, reg __12:cls, reg r83:V, reg _in_:cls, reg Info16:*, reg Info17:V, reg c19:L, reg dr30:V, reg dc15:L, reg dx36:V, reg dx37:V, reg __13:cls, reg r84:V, reg p19:p(V +), reg loc2:*, reg loc3:V, reg p20:p(V +), reg r87:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r88:V, reg r89:V, reg _isMethodsDispatchOn:cls, reg r90:V, reg c20:L, reg which:cls, reg localGeneric:*, reg localGeneric1:V, reg p21:p(V +), reg r92:V, reg s:V, reg l6:I, reg i:I, reg i1:I, reg i2:I, reg c21:L, reg x:V, reg get:cls, reg Info20:*, reg Info21:V, reg c22:L, reg Info23:V, reg dr32:V, reg dc16:L, reg dx38:V, reg dx39:V, reg i5:*, reg i6:V, reg __14:cls, reg r93:V, reg p22:p(V +), reg env5:*, reg env6:V, reg p23:p(V +), reg r96:V, reg __15:cls, reg r97:V, reg r98:cls, reg genfun:*, reg genfun1:V, reg p24:p(V +), reg r100:V, reg c23:L, reg l7:*, reg c24:L, reg i10:I, reg r102:L, reg l9:*, reg dr34:V, reg dc17:L, reg dx40:V, reg i12:I, reg dx41:V, reg i13:*, reg i14:V, reg ___2:cls, reg r105:V, reg registerS3method:cls, reg Info24:*, reg Info25:V, reg c25:L, reg Info27:V, reg dr36:V, reg dc18:L, reg dx42:V, reg dx43:V, reg i15:*, reg i16:V, reg __16:cls, reg r106:V, reg p25:p(V +), reg Info28:*, reg Info29:V, reg c26:L, reg Info31:V, reg dr38:V, reg dc19:L, reg dx44:V, reg dx45:V, reg i17:*, reg i18:V, reg __17:cls, reg r108:V, reg p26:p(V +), reg Info32:*, reg Info33:V, reg c27:L, reg Info35:V, reg dr40:V, reg dc20:L, reg dx46:V, reg dx47:V, reg i19:*, reg i20:V, reg __18:cls, reg r110:V, reg p27:p(V +), reg env7:*, reg env8:V, reg p28:p(V +), reg r113:V, reg i21:I, reg sym8:cls, reg base8:cls, reg guard8:L, reg r115:V, reg r116:V, reg localGeneric2:*, reg localGeneric3:V, reg any2:cls, reg r117:V, reg c28:L, reg Info36:*, reg Info37:V, reg c29:L, reg Info39:V, reg dr42:V, reg dc21:L, reg dx48:V, reg dx49:V, reg localGeneric4:*, reg localGeneric5:V, reg __19:cls, reg r118:V, reg env9:*, reg env10:V, reg c30:L, reg env12:V, reg dr44:V, reg dc22:L, reg dx50:V, reg dx51:V, reg __20:cls, reg r119:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r120:V, reg r121:V, reg S3MethodsTable:*, reg S3MethodsTable1:V, reg lin:*, reg lin1:V, reg c31:L, reg dr46:V, reg dc23:L, reg dx52:V, reg dx53:V, reg __21:cls, reg r122:V, reg env13:*, reg env14:V, reg lin4:*, reg lin5:V, reg c32:L, reg dr48:V, reg dc24:L, reg dx54:V, reg dx55:V, reg __22:cls, reg r123:V, reg importIntoEnv:cls, reg r124:V, reg Info40:*, reg Info41:V, reg c33:L, reg Info43:V, reg dr50:V, reg dc25:L, reg dx56:V, reg dx57:V, reg l10:*, reg l11:V, reg r126:V, reg __23:cls, reg r127:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r128:V, reg r129:V, reg nrow:cls, reg fin:*, reg fin1:V, reg p29:p(V +), reg r131:V, reg r132:I, reg s1:V, reg l12:I, reg i23:I, reg i24:I, reg i25:I, reg c34:L, reg x1:V, reg _registerS3method:cls, reg fin2:*, reg fin3:V, reg c35:L, reg fin5:V, reg dr52:V, reg dc26:L, reg dx58:V, reg dx59:V, reg i28:*, reg i29:V, reg __24:cls, reg r133:V, reg p30:p(V +), reg fin6:*, reg fin7:V, reg c36:L, reg fin9:V, reg dr54:V, reg dc27:L, reg dx60:V, reg dx61:V, reg i30:*, reg i31:V, reg __25:cls, reg r135:V, reg p31:p(V +), reg fin10:*, reg fin11:V, reg c37:L, reg fin13:V, reg dr56:V, reg dc28:L, reg dx62:V, reg dx63:V, reg i32:*, reg i33:V, reg __26:cls, reg r137:V, reg p32:p(V +), reg fin14:*, reg fin15:V, reg c38:L, reg fin17:V, reg dr58:V, reg dc29:L, reg dx64:V, reg dx65:V, reg i34:*, reg i35:V, reg __27:cls, reg r139:V, reg p33:p(V +), reg env15:*, reg env16:V, reg p34:p(V +), reg r142:V, reg package1:*, reg package2:V, reg r143:V, reg c39:L, reg c41:V, reg nrow1:cls, reg overwrite:*, reg overwrite1:V, reg p35:p(V +), reg r145:V, reg c42:L, reg c43:V, reg c45:L, reg r146:cls, reg overwrite2:*, reg overwrite3:V, reg c46:L, reg overwrite5:V, reg dr60:V, reg dc30:L, reg dx66:V, reg dx67:V, reg overwrite6:*, reg overwrite7:V, reg c47:L, reg overwrite10:V, reg dr62:V, reg dc31:L, reg dx68:V, reg overwrite13:V, reg dx69:V, reg __28:cls, reg r147:V, reg package3:*, reg package4:V, reg r148:V, reg __29:cls, reg r149:V, reg _in_1:cls, reg Sys_getenv:cls, reg r150:V, reg p36:p(V +), reg sym11:cls, reg base11:cls, reg guard11:L, reg r152:V, reg r153:V, reg package5:*, reg package6:V, reg c48:cls, reg r154:V, reg p37:p(V +), reg r156:V, reg c49:L, reg _in_2:cls, reg overwrite14:*, reg overwrite15:V, reg c50:L, reg dr64:V, reg dc32:L, reg dx70:V, reg dx71:V, reg __30:cls, reg r157:V, reg p38:p(V +), reg unlist:cls, reg ___3:cls, reg r159:V, reg r160:cls, reg r161:V, reg p39:p(V +), reg r163:V, reg p40:p(V +), reg r165:V, reg overwrite18:*, reg overwrite19:V, reg c51:L, reg overwrite21:V, reg dr66:V, reg dc33:L, reg dx72:V, reg dx73:V, reg ind:*, reg ind1:V, reg __31:cls, reg r166:V, reg nrow2:cls, reg bad:*, reg bad1:V, reg p41:p(V +), reg r168:V, reg c52:L, reg ngettext1:cls, reg nr:*, reg nr1:V, reg p42:p(V +), reg r170:V, reg paste2:cls, reg sym12:cls, reg base12:cls, reg guard12:L, reg r171:V, reg r172:V, reg sprintf1:cls, reg msg:*, reg msg1:V, reg p43:p(V +), reg package7:*, reg package8:V, reg p44:p(V +), reg r175:V, reg _fmt:cls, reg bad2:*, reg bad3:V, reg p45:p(V +), reg r177:V, reg c53:cls, reg r178:V, reg p46:p(V +), reg r180:V, reg message:cls, reg msg2:*, reg msg3:V, reg p47:p(V +), reg r182:V, reg overwrite22:*, reg overwrite23:V, reg c54:L, reg overwrite25:V, reg dr68:V, reg dc34:L, reg dx74:V, reg dx75:V, reg ind2:*, reg ind3:V, reg r183:V, reg __32:cls, reg r184:V, reg dx76:V, reg nrow3:cls, reg overwrite26:*, reg overwrite27:V, reg p48:p(V +), reg r186:V, reg c55:L, reg c57:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r187:V, reg c60:L, reg r188:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r189:V, reg c63:L, reg r190:V, reg tolower:cls, reg Sys_getenv1:cls, reg r191:V, reg p49:p(V +), reg r193:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r194:V, reg c66:L, reg r195:V, reg c67:cls, reg r196:V, reg match1:cls, reg r197:V, reg is_na2:cls, reg r198:V, reg c68:L, reg c69:V, reg c71:L, reg c73:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r199:V, reg c76:L, reg r200:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r201:V, reg c79:L, reg r202:V, reg Sys_getenv2:cls, reg r203:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r204:V, reg c82:L, reg r205:V, reg package9:*, reg package10:V, reg c83:cls, reg r206:V, reg match2:cls, reg r207:V, reg is_na3:cls, reg r208:V, reg r209:V, reg c84:L, reg c85:V, reg c87:L, reg ngettext2:cls, reg nr2:*, reg nr3:V, reg p50:p(V +), reg r211:V, reg paste3:cls, reg sym19:cls, reg base19:cls, reg guard19:L, reg r212:V, reg r213:V, reg sprintf2:cls, reg msg4:*, reg msg5:V, reg p51:p(V +), reg package11:*, reg package12:V, reg p52:p(V +), reg r216:V, reg _fmt1:cls, reg overwrite28:*, reg overwrite29:V, reg p53:p(V +), reg r218:V, reg c88:cls, reg r219:V, reg p54:p(V +), reg r221:V, reg packageStartupMessage:cls, reg msg6:*, reg msg7:V, reg p55:p(V +), reg r223:V, reg r224:V, reg r226:cls, reg nrow4:cls, reg delayed:*, reg delayed1:V, reg p56:p(V +), reg r228:V, reg c89:L, reg sym20:cls, reg base20:cls, reg guard20:L, reg r229:V, reg r230:V, reg nrow5:cls, reg delayed2:*, reg delayed3:V, reg p57:p(V +), reg r232:V, reg r233:I, reg s2:V, reg l13:I, reg i36:I, reg i37:I, reg i38:I, reg c90:L, reg x2:V, reg delayed4:*, reg delayed5:V, reg c91:L, reg i42:I, reg delayed7:V, reg dr70:V, reg dc35:L, reg dx78:V, reg i44:I, reg dx79:V, reg i45:*, reg i46:V, reg __33:cls, reg r234:V, reg delayed8:*, reg delayed9:V, reg c92:L, reg i48:I, reg delayed11:V, reg dr72:V, reg dc36:L, reg dx80:V, reg i50:I, reg dx81:V, reg i51:*, reg i52:V, reg __34:cls, reg r235:V, reg get1:cls, reg delayed12:*, reg delayed13:V, reg c93:L, reg delayed15:V, reg dr74:V, reg dc37:L, reg dx82:V, reg dx83:V, reg i53:*, reg i54:V, reg __35:cls, reg r236:V, reg p58:p(V +), reg env17:*, reg env18:V, reg p59:p(V +), reg r239:V, reg delayed16:*, reg delayed17:V, reg c94:L, reg i56:I, reg delayed19:V, reg dr76:V, reg dc38:L, reg dx84:V, reg i58:I, reg dx85:V, reg i59:*, reg i60:V, reg __36:cls, reg r240:V, reg register_S3_method_delayed:cls, reg pkg:*, reg pkg1:V, reg p60:p(V +), reg gen:*, reg gen1:V, reg p61:p(V +), reg cls:*, reg cls1:V, reg p62:p(V +), reg fun:*, reg fun1:V, reg p63:p(V +), reg r245:V, reg getNamespaceInfo:cls, reg env19:*, reg env20:V, reg p64:p(V +), reg r247:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r248:V, reg r249:V, reg ncol1:cls, reg nsI:*, reg nsI1:V, reg p65:p(V +), reg r251:V, reg c95:V, reg r252:V, reg c96:L, reg c98:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r253:V, reg c101:L, reg r254:V, reg ncol2:cls, reg info39:*, reg info40:V, reg p66:p(V +), reg r256:V, reg c102:V, reg r257:V, reg c103:L, reg c104:V, reg c106:L, reg c108:V, reg p67:*, reg p68:V, reg p69:*, reg p70:V, reg r258:V, reg c109:L, reg c110:V, reg c112:L, reg stop:cls, reg gettextf:cls, reg paste4:cls, reg r259:V, reg p71:p(V +), reg package13:*, reg package14:V, reg p72:p(V +), reg p73:*, reg p74:V, reg p75:p(V +), reg p76:*, reg p77:V, reg p78:p(V +), reg getRversion:cls, reg r264:V, reg p79:p(V +), reg r266:V, reg p80:p(V +), reg r268:V, reg setNamespaceInfo:cls, reg env21:*, reg env22:V, reg p81:p(V +), reg rbind:cls, reg info41:*, reg info42:V, reg p82:p(V +), reg nsI2:*, reg nsI3:V, reg p83:p(V +), reg r273:V, reg p84:p(V +), reg r275:V |
    mkenv;
    st info = info;
    st package = package;
    st env = env;
    NROW = ldf NROW;
    check L78() else D0();
  D0():
    deopt 1 [];
  L78():
    p = prom<V +>{
      info1 = ld info;
      info2 = force? info1;
      checkMissing(info2);
      return info2;
    };
    r1 = dyn NROW(p);
    check L79() else D1();
  D1():
    deopt 3 [r1];
  L79():
    st n = r1;
    n = ld n;
    check L80() else D2();
  D2():
    deopt 5 [n];
  L80():
    n1 = force? n;
    checkMissing(n1);
    r2 = `==`(n1, 0);
    c = `as.logical`(r2);
    if c then L81() else L0();
  L0():
    r5 = clos inner2066824098;
    st assignWrapped = r5;
    matrix = ldf matrix;
    check L84() else D3();
  L81():
    popenv;
    return NULL;
  D3():
    deopt 18 [];
  L84():
    r6 = dyn matrix(NA_STR, 0.0, 2.0);
    check L85() else D4();
  D4():
    deopt 22 [r6];
  L85():
    st overwrite = r6;
    r7 = clos inner2277348269;
    st `.registerS3method` = r7;
    paste = ldf paste;
    check L86() else D5();
  D5():
    deopt 28 [];
  L86():
    p1 = prom<V +>{
      info3 = ld info;
      info4 = force? info3;
      checkMissing(info4);
      c1 = `is.object`(info4);
      if c1 then L1() else L2();
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", info4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2();
    L2():
      __ = ldf `[` in base;
      r8 = dyn __(info4, <missing>, 1.0);
      goto L0(r8);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p2 = prom<V +>{
      info7 = ld info;
      info8 = force? info7;
      checkMissing(info8);
      c2 = `is.object`(info8);
      if c2 then L1() else L2();
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", info8);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2();
    L2():
      __1 = ldf `[` in base;
      r10 = dyn __1(info8, <missing>, 2.0);
      goto L0(r10);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r12 = dyn paste[, , sep](p1, p2, ".");
    check L87() else D6();
  D6():
    deopt 33 [r12];
  L87():
    st methname = r12;
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L88() else L89();
  L2(r14):
    st z = r14;
    methname = ld methname;
    check L95() else D9();
  L88():
    info11 = ld info;
    check L90() else D7();
  L89():
    r13 = dyn base(<lang `[`(info, , 3.0)>);
    goto L2(r13);
  D7():
    deopt 37 [info11];
  D9():
    deopt 46 [methname];
  L90():
    info12 = force? info11;
    checkMissing(info12);
    c3 = `is.object`(info12);
    if c3 then L91() else L92();
  L95():
    methname1 = force? methname;
    checkMissing(methname1);
    c4 = `is.object`(methname1);
    if c4 then L96() else L97(methname1);
  L3(dx5):
    is_na = ldf `is.na` in base;
    r16 = dyn is_na(dx5);
    check L94() else D8();
  L4(dx7):
    l = ld info;
    c5 = `is.object`(l);
    if c5 then L100() else L101(dx7, l);
  L91():
    dr4 = tryDispatchBuiltin.1("[", info12);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L93() else L92();
  L92():
    __2 = ldf `[` in base;
    r15 = dyn __2(info12, <missing>, 3.0);
    goto L3(r15);
  L96():
    dr6 = tryDispatchBuiltin.1("[", methname1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L98() else L97(dr6);
  L97(methname3):
    z = ld z;
    check L99() else D10();
  D8():
    deopt 44 [r16];
  D10():
    deopt 48 [methname3, z];
  L5(dx13):
    st info = dx13;
    ncol = ldf ncol;
    check L104() else D12();
  L93():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L3(dx4);
  L94():
    goto L2(r16);
  L98():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L4(dx6);
  L99():
    z1 = force? z;
    __3 = ldf `[` in base;
    r17 = dyn __3(methname3, z1);
    goto L4(r17);
  L100():
    dr8 = tryDispatchBuiltin.0("[<-", l, dx7);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L102() else L101(dx7, dr8);
  L101(dx9, l2):
    z2 = ld z;
    check L103() else D11();
  D11():
    deopt 52 [dx9, l2, dx7, z2];
  D12():
    deopt 58 [];
  L102():
    dx11 = getTryDispatchBuiltinValue(dr8);
    goto L5(dx11);
  L103():
    z3 = force? z2;
    ___ = ldf `[<-` in base;
    r18 = dyn ___(l2, dx7, z3, 3.0);
    goto L5(r18);
  L104():
    p3 = prom<V +>{
      info15 = ld info;
      info16 = force? info15;
      checkMissing(info16);
      return info16;
    };
    r20 = dyn ncol(p3);
    check L105() else D13();
  D13():
    deopt 60 [r20];
  L105():
    r21 = `==`(r20, 3);
    c6 = `as.logical`(r21);
    if c6 then L106() else L6();
  L6():
    goto L7();
  L7():
    cbind1 = ldf cbind;
    check L110() else D16();
  L106():
    cbind = ldf cbind;
    check L107() else D14();
  D14():
    deopt 64 [];
  D16():
    deopt 72 [];
  L107():
    p4 = prom<V +>{
      info17 = ld info;
      info18 = force? info17;
      checkMissing(info18);
      return info18;
    };
    r23 = dyn cbind(p4, NA_STR);
    check L108() else D15();
  L110():
    p5 = prom<V +>{
      info19 = ld info;
      info20 = force? info19;
      checkMissing(info20);
      c7 = `is.object`(info20);
      if c7 then L1() else L2();
    L0(dx15):
      return dx15;
    L1():
      dr10 = tryDispatchBuiltin.1("[", info20);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2();
    L2():
      __4 = ldf `[` in base;
      r25 = dyn __4(info20, <missing>, <int 1, 2, 3>, FALSE);
      goto L0(r25);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx14);
    };
    p6 = prom<V +>{
      methname4 = ld methname;
      methname5 = force? methname4;
      checkMissing(methname5);
      return methname5;
    };
    p7 = prom<V +>{
      info23 = ld info;
      info24 = force? info23;
      checkMissing(info24);
      c8 = `is.object`(info24);
      if c8 then L1() else L2();
    L0(dx17):
      return dx17;
    L1():
      dr12 = tryDispatchBuiltin.1("[", info24);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2();
    L2():
      __5 = ldf `[` in base;
      r28 = dyn __5(info24, <missing>, 4);
      goto L0(r28);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx16);
    };
    r30 = dyn cbind1(p5, p6, p7);
    check L111() else D17();
  D15():
    deopt 67 [r23];
  D17():
    deopt 76 [r30];
  L108():
    st info = r23;
    goto L7();
  L111():
    st Info = r30;
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L112() else L113();
  L8(r32):
    st loc = r32;
    sym2 = ldf any;
    base2 = ldf any in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L116() else L117();
  L112():
    env1 = ld env;
    check L114() else D18();
  L113():
    r31 = dyn base1(<sym env>);
    goto L8(r31);
  D18():
    deopt 80 [env1];
  L9(r35):
    c10 = `as.logical`(r35);
    if c10 then L127() else L12();
  L114():
    env2 = force? env1;
    checkMissing(env2);
    names = ldf names in base;
    r33 = dyn names(env2);
    check L115() else D19();
  L116():
    sym3 = ldf match;
    base3 = ldf match in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L118() else L119();
  L117():
    r34 = dyn base2(<lang `<-`(notex, `==`(match(`[`(info, , 3), loc, nomatch=0), 0))>);
    goto L9(r34);
  D19():
    deopt 83 [r33];
  L10(r37):
    r40 = `==`(r37, 0);
    st notex = r40;
    any = ldf any in base;
    r41 = dyn any(r40);
    check L126() else D23();
  L12():
    goto L18();
  L18():
    sym6 = ldf `is.na`;
    base6 = ldf `is.na` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L149() else L150();
  L115():
    goto L8(r33);
  L118():
    info27 = ld info;
    check L120() else D20();
  L119():
    r36 = dyn base3[, , nomatch](<lang `[`(info, , 3)>, <sym loc>, 0);
    goto L10(r36);
  L127():
    vapply = ldf vapply;
    check L128() else D24();
  D20():
    deopt 89 [info27];
  D23():
    deopt 105 [r41];
  D24():
    deopt 107 [];
  L19(r78):
    st eager = r78;
    Info8 = ld Info;
    check L156() else D36();
  L120():
    info28 = force? info27;
    checkMissing(info28);
    c9 = `is.object`(info28);
    if c9 then L121() else L122();
  L126():
    goto L9(r41);
  L128():
    p8 = prom<V +>{
      info31 = ld info;
      info32 = force? info31;
      checkMissing(info32);
      c11 = `is.object`(info32);
      if c11 then L1() else L2(info32);
    L0(dx21):
      return dx21;
    L1():
      dr16 = tryDispatchBuiltin.1("[", info32);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(info34):
      notex = ld notex;
      notex1 = force? notex;
      __7 = ldf `[` in base;
      r42 = dyn __7(info34, notex1, 3);
      goto L0(r42);
    L3():
      dx20 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx20);
    };
    p9 = prom<V +>{
      exists = ld exists;
      exists1 = force? exists;
      checkMissing(exists1);
      return exists1;
    };
    p10 = prom<V +>{
      logical = ldf logical;
      r45 = dyn logical(1.0);
      return r45;
    };
    p12 = prom<V +>{
      parent_env = ldf `parent.env`;
      p11 = prom<V +>{
        env3 = ld env;
        env4 = force? env3;
        checkMissing(env4);
        return env4;
      };
      r48 = dyn parent_env(p11);
      return r48;
    };
    r50 = dyn vapply[, , , envir](p8, p9, p10, p12);
    check L129() else D25();
  L149():
    Info4 = ld Info;
    check L151() else D34();
  L150():
    r77 = dyn base6(<lang `[`(Info, , 5)>);
    goto L19(r77);
  D25():
    deopt 113 [r50];
  D34():
    deopt 154 [Info4];
  D36():
    deopt 163 [Info8];
  L11(dx19):
    loc = ld loc;
    check L124() else D21();
  L121():
    dr14 = tryDispatchBuiltin.1("[", info28);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L123() else L122();
  L122():
    __6 = ldf `[` in base;
    r38 = dyn __6(info28, <missing>, 3);
    goto L11(r38);
  L129():
    st found = r50;
    found = ld found;
    check L130() else D26();
  L151():
    Info5 = force? Info4;
    checkMissing(Info5);
    c16 = `is.object`(Info5);
    if c16 then L152() else L153();
  L156():
    Info9 = force? Info8;
    checkMissing(Info9);
    c17 = `is.object`(Info9);
    if c17 then L157() else L158(Info9);
  D21():
    deopt 95 [loc];
  D26():
    deopt 115 [found];
  L20(dx31):
    is_na1 = ldf `is.na` in base;
    r80 = dyn is_na1(dx31);
    check L155() else D35();
  L21(dx33):
    st delayed = dx33;
    Info12 = ld Info;
    check L161() else D38();
  L123():
    dx18 = getTryDispatchBuiltinValue(dr14);
    goto L11(dx18);
  L124():
    loc1 = force? loc;
    checkMissing(loc1);
    match = ldf match in base;
    r39 = dyn match(dx19, loc1, 0, NULL);
    check L125() else D22();
  L130():
    found1 = force? found;
    checkMissing(found1);
    r51 = `!`(found1);
    l3 = ld notex;
    c12 = `is.object`(l3);
    if c12 then L131() else L132(r51, l3);
  L152():
    dr24 = tryDispatchBuiltin.1("[", Info5);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L154() else L153();
  L153():
    __10 = ldf `[` in base;
    r79 = dyn __10(Info5, <missing>, 5);
    goto L20(r79);
  L157():
    dr26 = tryDispatchBuiltin.1("[", Info9);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L159() else L158(dr26);
  L158(Info11):
    eager = ld eager;
    check L160() else D37();
  D22():
    deopt 100 [r39];
  D35():
    deopt 161 [r80];
  D37():
    deopt 165 [Info11, eager];
  D38():
    deopt 174 [Info12];
  L13(dx23):
    st notex = dx23;
    sym4 = ldf any;
    base4 = ldf any in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L135() else L136();
  L125():
    goto L10(r39);
  L131():
    dr18 = tryDispatchBuiltin.0("[<-", l3, r51);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L133() else L132(r51, dr18);
  L132(r53, l5):
    notex2 = ld notex;
    check L134() else D27();
  L154():
    dx30 = getTryDispatchBuiltinValue(dr24);
    goto L20(dx30);
  L155():
    goto L19(r80);
  L159():
    dx32 = getTryDispatchBuiltinValue(dr26);
    goto L21(dx32);
  L160():
    eager1 = force? eager;
    checkMissing(eager1);
    r81 = `!`(eager1);
    __11 = ldf `[` in base;
    r82 = dyn __11(Info9, r81, <missing>, FALSE);
    goto L21(r82);
  L161():
    Info13 = force? Info12;
    checkMissing(Info13);
    c18 = `is.object`(Info13);
    if c18 then L162() else L163(Info13);
  D27():
    deopt 119 [r53, l5, r51, notex2];
  L14(r58):
    c13 = `as.logical`(r58);
    if c13 then L139() else L15();
  L22(dx35):
    st Info = dx35;
    _in_ = ldf `%in%`;
    check L166() else D40();
  L133():
    dx22 = getTryDispatchBuiltinValue(dr18);
    goto L13(dx22);
  L134():
    notex3 = force? notex2;
    ___1 = ldf `[<-` in base;
    r56 = dyn ___1(l5, r51, notex3);
    goto L13(r56);
  L135():
    notex4 = ld notex;
    check L137() else D28();
  L136():
    r57 = dyn base4(<sym notex>);
    goto L14(r57);
  L162():
    dr28 = tryDispatchBuiltin.1("[", Info13);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L164() else L163(dr28);
  L163(Info15):
    eager2 = ld eager;
    check L165() else D39();
  D28():
    deopt 125 [notex4];
  D39():
    deopt 176 [Info15, eager2];
  D40():
    deopt 185 [];
  L15():
    goto L17(NULL);
  L17(dx28):
    goto L18();
  L137():
    notex5 = force? notex4;
    checkMissing(notex5);
    any1 = ldf any in base;
    r59 = dyn any1(notex5);
    check L138() else D29();
  L139():
    warning = ldf warning;
    check L140() else D30();
  L164():
    dx34 = getTryDispatchBuiltinValue(dr28);
    goto L22(dx34);
  L165():
    eager3 = force? eager2;
    __12 = ldf `[` in base;
    r83 = dyn __12(Info13, eager3, <missing>, FALSE);
    goto L22(r83);
  L166():
    p19 = prom<V +>{
      Info16 = ld Info;
      Info17 = force? Info16;
      checkMissing(Info17);
      c19 = `is.object`(Info17);
      if c19 then L1() else L2();
    L0(dx37):
      return dx37;
    L1():
      dr30 = tryDispatchBuiltin.1("[", Info17);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L3() else L2();
    L2():
      __13 = ldf `[` in base;
      r84 = dyn __13(Info17, <missing>, 1.0);
      goto L0(r84);
    L3():
      dx36 = getTryDispatchBuiltinValue(dr30);
      goto L0(dx36);
    };
    p20 = prom<V +>{
      loc2 = ld loc;
      loc3 = force? loc2;
      checkMissing(loc3);
      return loc3;
    };
    r87 = dyn _in_(p19, p20);
    check L167() else D41();
  D29():
    deopt 128 [r59];
  D30():
    deopt 130 [];
  D41():
    deopt 188 [r87];
  L138():
    goto L14(r59);
  L140():
    p18 = prom<V +>{
      sprintf = ldf sprintf;
      p14 = prom<V +>{
        ngettext = ldf ngettext;
        p13 = prom<V +>{
          sym5 = ldf sum;
          base5 = ldf sum in base;
          guard5 = `==`.4(sym5, base5);
          if guard5 then L1() else L2();
        L0(r61):
          return r61;
        L1():
          notex6 = ld notex;
          notex7 = force? notex6;
          checkMissing(notex7);
          sum = ldf sum in base;
          r62 = dyn sum(notex7);
          goto L0(r62);
        L2():
          r60 = dyn base5(<sym notex>);
          goto L0(r60);
        };
        r64 = dyn ngettext(p13, "S3 method %s was declared in NAMESPACE but not found", "S3 methods %s were declared in NAMESPACE but not found");
        return r64;
      };
      p17 = prom<V +>{
        paste1 = ldf paste;
        p16 = prom<V +>{
          sQuote = ldf sQuote;
          p15 = prom<V +>{
            info35 = ld info;
            info36 = force? info35;
            checkMissing(info36);
            c14 = `is.object`(info36);
            if c14 then L1() else L2(info36);
          L0(dx25):
            return dx25;
          L1():
            dr20 = tryDispatchBuiltin.1("[", info36);
            dc10 = getTryDispatchBuiltinDispatched(dr20);
            if dc10 then L3() else L2(dr20);
          L2(info38):
            notex8 = ld notex;
            notex9 = force? notex8;
            __8 = ldf `[` in base;
            r66 = dyn __8(info38, notex9, 3.0);
            goto L0(r66);
          L3():
            dx24 = getTryDispatchBuiltinValue(dr20);
            goto L0(dx24);
          };
          r68 = dyn sQuote(p15);
          return r68;
        };
        r70 = dyn paste1[, collapse](p16, ", ");
        return r70;
      };
      r72 = dyn sprintf(p14, p17);
      return r72;
    };
    r74 = dyn warning[, `call.`, domain](p18, FALSE, NA_LGL);
    check L141() else D31();
  L167():
    st localGeneric = r87;
    st l2 = r87;
    sym7 = ldf `.isMethodsDispatchOn`;
    base7 = ldf `.isMethodsDispatchOn` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L168() else L169();
  D31():
    deopt 136 [r74];
  L23(r89):
    c20 = `as.logical`(r89);
    if c20 then L171() else L24();
  L141():
    Info = ld Info;
    check L142() else D32();
  L168():
    _isMethodsDispatchOn = ldf `.isMethodsDispatchOn` in base;
    r90 = dyn _isMethodsDispatchOn();
    check L170() else D42();
  L169():
    r88 = dyn base7();
    goto L23(r88);
  D32():
    deopt 137 [Info];
  D42():
    deopt 194 [r90];
  L24():
    goto L30();
  L30():
    sym8 = ldf any;
    base8 = ldf any in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L189() else L190();
  L142():
    Info1 = force? Info;
    checkMissing(Info1);
    c15 = `is.object`(Info1);
    if c15 then L143() else L144(Info1);
  L170():
    goto L23(r90);
  L171():
    which = ldf which;
    check L172() else D43();
  D43():
    deopt 196 [];
  L16(dx27):
    st Info = dx27;
    goto L17(dx27);
  L31(r116):
    c28 = `as.logical`(r116);
    if c28 then L193() else L32();
  L143():
    dr22 = tryDispatchBuiltin.1("[", Info1);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L145() else L144(dr22);
  L144(Info3):
    notex10 = ld notex;
    check L146() else D33();
  L172():
    p21 = prom<V +>{
      localGeneric = ld localGeneric;
      localGeneric1 = force? localGeneric;
      checkMissing(localGeneric1);
      return localGeneric1;
    };
    r92 = dyn which(p21);
    check L173() else D44();
  L189():
    localGeneric2 = ld localGeneric;
    check L191() else D53();
  L190():
    r115 = dyn base8(<sym localGeneric>);
    goto L31(r115);
  D33():
    deopt 139 [Info3, notex10];
  D44():
    deopt 198 [r92];
  D53():
    deopt 238 [localGeneric2];
  L32():
    goto L38();
  L38():
    Info40 = ld Info;
    check L217() else D63();
  L145():
    dx26 = getTryDispatchBuiltinValue(dr22);
    goto L16(dx26);
  L146():
    notex11 = force? notex10;
    checkMissing(notex11);
    r75 = `!`(notex11);
    __9 = ldf `[` in base;
    r76 = dyn __9(Info1, r75, <missing>, FALSE);
    goto L16(r76);
  L173():
    s = toForSeq(r92);
    l6 = length(s);
    i = 0;
    goto L25(i);
  L191():
    localGeneric3 = force? localGeneric2;
    checkMissing(localGeneric3);
    any2 = ldf any in base;
    r117 = dyn any2(localGeneric3);
    check L192() else D54();
  L193():
    Info36 = ld Info;
    check L194() else D55();
  D54():
    deopt 241 [r117];
  D55():
    deopt 242 [Info36];
  D63():
    deopt 280 [Info40];
  L25(i1):
    i2 = `+`.1(i1, 1);
    c21 = `<`.1(l6, i2);
    if c21 then L174() else L29();
  L192():
    goto L31(r117);
  L194():
    Info37 = force? Info36;
    checkMissing(Info37);
    c29 = `is.object`(Info37);
    if c29 then L195() else L196(Info37);
  L217():
    Info41 = force? Info40;
    checkMissing(Info41);
    c33 = `is.object`(Info41);
    if c33 then L218() else L219(Info41);
  L29():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    get = ldf get;
    check L175() else D45();
  L33(dx49):
    st lin = dx49;
    env9 = ld env;
    check L199() else D57();
  L39(dx57):
    st fin = dx57;
    sym10 = ldf seq_len;
    base10 = ldf seq_len in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L222() else L223();
  L174():
    goto L30();
  L195():
    dr42 = tryDispatchBuiltin.1("[", Info37);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L197() else L196(dr42);
  L196(Info39):
    localGeneric4 = ld localGeneric;
    check L198() else D56();
  L218():
    dr50 = tryDispatchBuiltin.1("[", Info41);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L220() else L219(dr50);
  L219(Info43):
    l10 = ld l2;
    check L221() else D64();
  D45():
    deopt 200 [i2];
  D56():
    deopt 244 [Info39, localGeneric4];
  D57():
    deopt 252 [env9];
  D64():
    deopt 282 [Info43, l10];
  L40(r129):
    s1 = toForSeq(r129);
    l12 = length(s1);
    i23 = 0;
    goto L41(i23);
  L175():
    p22 = prom<V +>{
      Info20 = ld Info;
      Info21 = force? Info20;
      checkMissing(Info21);
      c22 = `is.object`(Info21);
      if c22 then L1() else L2(Info21);
    L0(dx39):
      return dx39;
    L1():
      dr32 = tryDispatchBuiltin.1("[", Info21);
      dc16 = getTryDispatchBuiltinDispatched(dr32);
      if dc16 then L3() else L2(dr32);
    L2(Info23):
      i5 = ld i;
      i6 = force? i5;
      __14 = ldf `[` in base;
      r93 = dyn __14(Info23, i6, 1.0);
      goto L0(r93);
    L3():
      dx38 = getTryDispatchBuiltinValue(dr32);
      goto L0(dx38);
    };
    p23 = prom<V +>{
      env5 = ld env;
      env6 = force? env5;
      checkMissing(env6);
      return env6;
    };
    r96 = dyn get[, envir](p22, p23);
    check L176() else D46();
  L197():
    dx48 = getTryDispatchBuiltinValue(dr42);
    goto L33(dx48);
  L198():
    localGeneric5 = force? localGeneric4;
    __19 = ldf `[` in base;
    r118 = dyn __19(Info37, localGeneric5, <missing>, FALSE);
    goto L33(r118);
  L199():
    env10 = force? env9;
    checkMissing(env10);
    c30 = `is.object`(env10);
    if c30 then L200() else L201(env10);
  L220():
    dx56 = getTryDispatchBuiltinValue(dr50);
    goto L39(dx56);
  L221():
    l11 = force? l10;
    checkMissing(l11);
    r126 = `!`(l11);
    __23 = ldf `[` in base;
    r127 = dyn __23(Info41, r126, <missing>, FALSE);
    goto L39(r127);
  L222():
    nrow = ldf nrow;
    check L224() else D65();
  L223():
    r128 = dyn base10(<lang nrow(fin)>);
    goto L40(r128);
  D46():
    deopt 204 [i2, r96];
  D65():
    deopt 293 [];
  L34(dx51):
    st S3MethodsTable = dx51;
    sym9 = ldf `.Internal`;
    base9 = ldf `.Internal` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L203() else L204();
  L41(i24):
    i25 = `+`.1(i24, 1);
    c34 = `<`.1(l12, i25);
    if c34 then L226() else L42();
  L176():
    st genfun = r96;
    __15 = ldf `::`;
    check L177() else D47();
  L200():
    dr44 = tryDispatchBuiltin.1("[[", env10);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L202() else L201(dr44);
  L201(env12):
    __20 = ldf `[[` in base;
    r119 = dyn __20(env12, ".__S3MethodsTable__.");
    goto L34(r119);
  L224():
    p29 = prom<V +>{
      fin = ld fin;
      fin1 = force? fin;
      checkMissing(fin1);
      return fin1;
    };
    r131 = dyn nrow(p29);
    check L225() else D66();
  D47():
    deopt 207 [i2];
  D66():
    deopt 295 [r131];
  L35(r121):
    goto L38();
  L42():
    x1 = `[[`(s1, i25, NULL, TRUE);
    st i = x1;
    _registerS3method = ldf `.registerS3method`;
    check L227() else D67();
  L177():
    r97 = dyn __15("methods", "is");
    check L178() else D48();
  L202():
    dx50 = getTryDispatchBuiltinValue(dr44);
    goto L34(dx50);
  L203():
    S3MethodsTable = ld S3MethodsTable;
    check L205() else D58();
  L204():
    r120 = dyn base9(<lang importIntoEnv(S3MethodsTable, `[`(lin, , 4.0), env, `[`(lin, , 3.0))>);
    goto L35(r120);
  L225():
    r132 = seq_len(r131);
    goto L40(r132);
  L226():
    package1 = ld package;
    check L229() else D69();
  D48():
    deopt 210 [i2, r97];
  D58():
    deopt 260 [S3MethodsTable];
  D67():
    deopt 298 [i25];
  D69():
    deopt 308 [package1];
  L178():
    checkFun.0(r97);
    r98 = r97 as cls;
    p24 = prom<V +>{
      genfun = ld genfun;
      genfun1 = force? genfun;
      checkMissing(genfun1);
      return genfun1;
    };
    r100 = dyn r98(p24, "genericFunction");
    check L179() else D49();
  L205():
    S3MethodsTable1 = force? S3MethodsTable;
    checkMissing(S3MethodsTable1);
    lin = ld lin;
    check L206() else D59();
  L227():
    p30 = prom<V +>{
      fin2 = ld fin;
      fin3 = force? fin2;
      checkMissing(fin3);
      c35 = `is.object`(fin3);
      if c35 then L1() else L2(fin3);
    L0(dx59):
      return dx59;
    L1():
      dr52 = tryDispatchBuiltin.1("[", fin3);
      dc26 = getTryDispatchBuiltinDispatched(dr52);
      if dc26 then L3() else L2(dr52);
    L2(fin5):
      i28 = ld i;
      i29 = force? i28;
      __24 = ldf `[` in base;
      r133 = dyn __24(fin5, i29, 1.0);
      goto L0(r133);
    L3():
      dx58 = getTryDispatchBuiltinValue(dr52);
      goto L0(dx58);
    };
    p31 = prom<V +>{
      fin6 = ld fin;
      fin7 = force? fin6;
      checkMissing(fin7);
      c36 = `is.object`(fin7);
      if c36 then L1() else L2(fin7);
    L0(dx61):
      return dx61;
    L1():
      dr54 = tryDispatchBuiltin.1("[", fin7);
      dc27 = getTryDispatchBuiltinDispatched(dr54);
      if dc27 then L3() else L2(dr54);
    L2(fin9):
      i30 = ld i;
      i31 = force? i30;
      __25 = ldf `[` in base;
      r135 = dyn __25(fin9, i31, 2.0);
      goto L0(r135);
    L3():
      dx60 = getTryDispatchBuiltinValue(dr54);
      goto L0(dx60);
    };
    p32 = prom<V +>{
      fin10 = ld fin;
      fin11 = force? fin10;
      checkMissing(fin11);
      c37 = `is.object`(fin11);
      if c37 then L1() else L2(fin11);
    L0(dx63):
      return dx63;
    L1():
      dr56 = tryDispatchBuiltin.1("[", fin11);
      dc28 = getTryDispatchBuiltinDispatched(dr56);
      if dc28 then L3() else L2(dr56);
    L2(fin13):
      i32 = ld i;
      i33 = force? i32;
      __26 = ldf `[` in base;
      r137 = dyn __26(fin13, i33, 3.0);
      goto L0(r137);
    L3():
      dx62 = getTryDispatchBuiltinValue(dr56);
      goto L0(dx62);
    };
    p33 = prom<V +>{
      fin14 = ld fin;
      fin15 = force? fin14;
      checkMissing(fin15);
      c38 = `is.object`(fin15);
      if c38 then L1() else L2(fin15);
    L0(dx65):
      return dx65;
    L1():
      dr58 = tryDispatchBuiltin.1("[", fin15);
      dc29 = getTryDispatchBuiltinDispatched(dr58);
      if dc29 then L3() else L2(dr58);
    L2(fin17):
      i34 = ld i;
      i35 = force? i34;
      __27 = ldf `[` in base;
      r139 = dyn __27(fin17, i35, 4.0);
      goto L0(r139);
    L3():
      dx64 = getTryDispatchBuiltinValue(dr58);
      goto L0(dx64);
    };
    p34 = prom<V +>{
      env15 = ld env;
      env16 = force? env15;
      checkMissing(env16);
      return env16;
    };
    r142 = dyn _registerS3method(p30, p31, p32, p33, p34);
    check L228() else D68();
  L229():
    package2 = force? package1;
    checkMissing(package2);
    r143 = `!=`(package2, "MASS");
    c39 = `as.logical`(r143);
    if c39 then L230() else L43(c39);
  D49():
    deopt 214 [i2, r100];
  D59():
    deopt 262 [lin];
  D68():
    deopt 304 [i25, r142];
  L43(c41):
    c45 = `as.logical`(c41);
    if c45 then L234() else L44();
  L179():
    c23 = `as.logical`(r100);
    if c23 then L180() else L26();
  L206():
    lin1 = force? lin;
    checkMissing(lin1);
    c31 = `is.object`(lin1);
    if c31 then L207() else L208();
  L228():
    goto L41(i25);
  L230():
    nrow1 = ldf nrow;
    check L231() else D70();
  D70():
    deopt 313 [c39];
  L26():
    goto L28(i2);
  L28(i21):
    goto L25(i21);
  L36(dx53):
    env13 = ld env;
    check L210() else D60();
  L44():
    goto L63();
  L63():
    r226 = clos inner4138025221;
    st register_S3_method_delayed = r226;
    nrow4 = ldf nrow;
    check L308() else D110();
  L180():
    l7 = ld localGeneric;
    c24 = `is.object`(l7);
    if c24 then L181() else L182(i2, FALSE, l7);
  L207():
    dr46 = tryDispatchBuiltin.1("[", lin1);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L209() else L208();
  L208():
    __21 = ldf `[` in base;
    r122 = dyn __21(lin1, <missing>, 4.0);
    goto L36(r122);
  L231():
    p35 = prom<V +>{
      overwrite = ld overwrite;
      overwrite1 = force? overwrite;
      checkMissing(overwrite1);
      return overwrite1;
    };
    r145 = dyn nrow1(p35);
    check L232() else D71();
  L234():
    r146 = clos inner1942959787;
    st `.fmt` = r146;
    overwrite2 = ld overwrite;
    check L235() else D72();
  D60():
    deopt 268 [env13];
  D71():
    deopt 315 [c39, r145];
  D72():
    deopt 320 [overwrite2];
  D110():
    deopt 479 [];
  L27(i12, dx41):
    st localGeneric = dx41;
    registerS3method = ldf registerS3method;
    check L185() else D51();
  L181():
    dr34 = tryDispatchBuiltin.0("[<-", l7, FALSE);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L183() else L182(i2, FALSE, dr34);
  L182(i10, r102, l9):
    i13 = ld i;
    check L184() else D50();
  L209():
    dx52 = getTryDispatchBuiltinValue(dr46);
    goto L36(dx52);
  L210():
    env14 = force? env13;
    checkMissing(env14);
    lin4 = ld lin;
    check L211() else D61();
  L232():
    c42 = `as.logical`(r145);
    c43 = `&&`(c39, c42);
    goto L43(c43);
  L235():
    overwrite3 = force? overwrite2;
    checkMissing(overwrite3);
    c46 = `is.object`(overwrite3);
    if c46 then L236() else L237(overwrite3);
  L308():
    p56 = prom<V +>{
      delayed = ld delayed;
      delayed1 = force? delayed;
      checkMissing(delayed1);
      return delayed1;
    };
    r228 = dyn nrow4(p56);
    check L309() else D111();
  D50():
    deopt 218 [i10, r102, l9, FALSE, i13];
  D51():
    deopt 223 [i12];
  D61():
    deopt 270 [lin4];
  D111():
    deopt 481 [r228];
  L45(dx67):
    st overwrite = dx67;
    _in_1 = ldf `%in%`;
    check L244() else D75();
  L183():
    dx40 = getTryDispatchBuiltinValue(dr34);
    goto L27(i2, dx40);
  L184():
    i14 = force? i13;
    ___2 = ldf `[<-` in base;
    r105 = dyn ___2(l9, FALSE, i14);
    goto L27(i10, r105);
  L185():
    p25 = prom<V +>{
      Info24 = ld Info;
      Info25 = force? Info24;
      checkMissing(Info25);
      c25 = `is.object`(Info25);
      if c25 then L1() else L2(Info25);
    L0(dx43):
      return dx43;
    L1():
      dr36 = tryDispatchBuiltin.1("[", Info25);
      dc18 = getTryDispatchBuiltinDispatched(dr36);
      if dc18 then L3() else L2(dr36);
    L2(Info27):
      i15 = ld i;
      i16 = force? i15;
      __16 = ldf `[` in base;
      r106 = dyn __16(Info27, i16, 1.0);
      goto L0(r106);
    L3():
      dx42 = getTryDispatchBuiltinValue(dr36);
      goto L0(dx42);
    };
    p26 = prom<V +>{
      Info28 = ld Info;
      Info29 = force? Info28;
      checkMissing(Info29);
      c26 = `is.object`(Info29);
      if c26 then L1() else L2(Info29);
    L0(dx45):
      return dx45;
    L1():
      dr38 = tryDispatchBuiltin.1("[", Info29);
      dc19 = getTryDispatchBuiltinDispatched(dr38);
      if dc19 then L3() else L2(dr38);
    L2(Info31):
      i17 = ld i;
      i18 = force? i17;
      __17 = ldf `[` in base;
      r108 = dyn __17(Info31, i18, 2.0);
      goto L0(r108);
    L3():
      dx44 = getTryDispatchBuiltinValue(dr38);
      goto L0(dx44);
    };
    p27 = prom<V +>{
      Info32 = ld Info;
      Info33 = force? Info32;
      checkMissing(Info33);
      c27 = `is.object`(Info33);
      if c27 then L1() else L2(Info33);
    L0(dx47):
      return dx47;
    L1():
      dr40 = tryDispatchBuiltin.1("[", Info33);
      dc20 = getTryDispatchBuiltinDispatched(dr40);
      if dc20 then L3() else L2(dr40);
    L2(Info35):
      i19 = ld i;
      i20 = force? i19;
      __18 = ldf `[` in base;
      r110 = dyn __18(Info35, i20, 3.0);
      goto L0(r110);
    L3():
      dx46 = getTryDispatchBuiltinValue(dr40);
      goto L0(dx46);
    };
    p28 = prom<V +>{
      env7 = ld env;
      env8 = force? env7;
      checkMissing(env8);
      return env8;
    };
    r113 = dyn registerS3method(p25, p26, p27, p28);
    check L186() else D52();
  L211():
    lin5 = force? lin4;
    checkMissing(lin5);
    c32 = `is.object`(lin5);
    if c32 then L212() else L213();
  L236():
    dr60 = tryDispatchBuiltin.1("[", overwrite3);
    dc30 = getTryDispatchBuiltinDispatched(dr60);
    if dc30 then L238() else L237(dr60);
  L237(overwrite5):
    overwrite6 = ld overwrite;
    check L239() else D73();
  L309():
    c89 = `as.logical`(r228);
    if c89 then L310() else L64();
  D52():
    deopt 228 [i12, r113];
  D73():
    deopt 322 [overwrite5, overwrite6];
  D75():
    deopt 337 [];
  L37(dx55):
    importIntoEnv = ldf importIntoEnv in base;
    r124 = dyn importIntoEnv(S3MethodsTable1, dx53, env14, dx55);
    check L215() else D62();
  L64():
    goto L71();
  L71():
    getNamespaceInfo = ldf getNamespaceInfo;
    check L336() else D124();
  L186():
    goto L28(i12);
  L212():
    dr48 = tryDispatchBuiltin.1("[", lin5);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L214() else L213();
  L213():
    __22 = ldf `[` in base;
    r123 = dyn __22(lin5, <missing>, 3.0);
    goto L37(r123);
  L238():
    dx66 = getTryDispatchBuiltinValue(dr60);
    goto L45(dx66);
  L239():
    overwrite7 = force? overwrite6;
    checkMissing(overwrite7);
    c47 = `is.object`(overwrite7);
    if c47 then L240() else L241(overwrite5);
  L244():
    p36 = prom<V +>{
      Sys_getenv = ldf `Sys.getenv`;
      r150 = dyn Sys_getenv("_R_LOAD_CHECK_OVERWRITE_S3_METHODS_");
      return r150;
    };
    p37 = prom<V +>{
      sym11 = ldf c;
      base11 = ldf c in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r153):
      return r153;
    L1():
      package5 = ld package;
      package6 = force? package5;
      checkMissing(package6);
      c48 = ldf c in base;
      r154 = dyn c48(package6, "all");
      goto L0(r154);
    L2():
      r152 = dyn base11(<sym package>, "all");
      goto L0(r152);
    };
    r156 = dyn _in_1(p36, p37);
    check L245() else D76();
  L310():
    sym20 = ldf seq_len;
    base20 = ldf seq_len in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L311() else L312();
  D62():
    deopt 277 [r124];
  D76():
    deopt 340 [r156];
  D124():
    deopt 529 [];
  L46(overwrite13, dx69):
    package3 = ld package;
    check L243() else D74();
  L65(r230):
    s2 = toForSeq(r230);
    l13 = length(s2);
    i36 = 0;
    goto L66(i36);
  L214():
    dx54 = getTryDispatchBuiltinValue(dr48);
    goto L37(dx54);
  L215():
    goto L35(r124);
  L240():
    dr62 = tryDispatchBuiltin.1("[", overwrite7);
    dc31 = getTryDispatchBuiltinDispatched(dr62);
    if dc31 then L242() else L241(overwrite5);
  L241(overwrite10):
    __28 = ldf `[` in base;
    r147 = dyn __28(overwrite7, <missing>, 2);
    goto L46(overwrite10, r147);
  L245():
    c49 = `as.logical`(r156);
    if c49 then L246() else L47();
  L311():
    nrow5 = ldf nrow;
    check L313() else D112();
  L312():
    r229 = dyn base20(<lang nrow(delayed)>);
    goto L65(r229);
  L336():
    p64 = prom<V +>{
      env19 = ld env;
      env20 = force? env19;
      checkMissing(env20);
      return env20;
    };
    r247 = dyn getNamespaceInfo(p64, "S3methods");
    check L337() else D125();
  D74():
    deopt 327 [overwrite13, dx69, package3];
  D112():
    deopt 484 [];
  D125():
    deopt 532 [r247];
  L47():
    goto L52();
  L52():
    nrow3 = ldf nrow;
    check L270() else D91();
  L66(i37):
    i38 = `+`.1(i37, 1);
    c90 = `<`.1(l13, i38);
    if c90 then L315() else L70();
  L242():
    dx68 = getTryDispatchBuiltinValue(dr62);
    goto L46(overwrite5, dx68);
  L243():
    package4 = force? package3;
    checkMissing(package4);
    r148 = `!=`(dx69, package4);
    __29 = ldf `[` in base;
    r149 = dyn __29(overwrite3, r148, <missing>, FALSE);
    goto L45(r149);
  L246():
    _in_2 = ldf `%in%`;
    check L247() else D77();
  L313():
    p57 = prom<V +>{
      delayed2 = ld delayed;
      delayed3 = force? delayed2;
      checkMissing(delayed3);
      return delayed3;
    };
    r232 = dyn nrow5(p57);
    check L314() else D113();
  L337():
    st nsI = r247;
    sym21 = ldf `is.null`;
    base21 = ldf `is.null` in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L338() else L339();
  D77():
    deopt 342 [];
  D91():
    deopt 400 [];
  D113():
    deopt 486 [r232];
  L70():
    x2 = `[[`(s2, i38, NULL, TRUE);
    st i = x2;
    delayed4 = ld delayed;
    check L316() else D114();
  L72(r249):
    r252 = `!`(r249);
    c96 = `as.logical`(r252);
    if c96 then L342() else L73(c96);
  L247():
    p38 = prom<V +>{
      overwrite14 = ld overwrite;
      overwrite15 = force? overwrite14;
      checkMissing(overwrite15);
      c50 = `is.object`(overwrite15);
      if c50 then L1() else L2();
    L0(dx71):
      return dx71;
    L1():
      dr64 = tryDispatchBuiltin.1("[", overwrite15);
      dc32 = getTryDispatchBuiltinDispatched(dr64);
      if dc32 then L3() else L2();
    L2():
      __30 = ldf `[` in base;
      r157 = dyn __30(overwrite15, <missing>, 2);
      goto L0(r157);
    L3():
      dx70 = getTryDispatchBuiltinValue(dr64);
      goto L0(dx70);
    };
    p40 = prom<V +>{
      unlist = ldf unlist;
      p39 = prom<V +>{
        ___3 = ldf `:::`;
        r159 = dyn ___3("tools", ".get_standard_package_names");
        checkFun.0(r159);
        r160 = r159 as cls;
        r161 = dyn r160();
        return r161;
      };
      r163 = dyn unlist[, `use.names`](p39, FALSE);
      return r163;
    };
    r165 = dyn _in_2(p38, p40);
    check L248() else D78();
  L270():
    p48 = prom<V +>{
      overwrite26 = ld overwrite;
      overwrite27 = force? overwrite26;
      checkMissing(overwrite27);
      return overwrite27;
    };
    r186 = dyn nrow3(p48);
    check L271() else D92();
  L314():
    r233 = seq_len(r232);
    goto L65(r233);
  L315():
    goto L71();
  L338():
    ncol1 = ldf ncol;
    check L340() else D126();
  L339():
    r248 = dyn base21(<lang `<-`(p1, ncol(nsI))>);
    goto L72(r248);
  D78():
    deopt 345 [r165];
  D92():
    deopt 402 [r186];
  D114():
    deopt 488 [i38, delayed4];
  D126():
    deopt 536 [];
  L73(c98):
    c106 = `as.logical`(c98);
    if c106 then L348() else L75(c106);
  L248():
    st ind = r165;
    overwrite18 = ld overwrite;
    check L249() else D79();
  L271():
    st nr = r186;
    c55 = `as.logical`(r186);
    if c55 then L272() else L53(c55);
  L316():
    delayed5 = force? delayed4;
    checkMissing(delayed5);
    c91 = `is.object`(delayed5);
    if c91 then L317() else L318(i38, delayed5);
  L340():
    p65 = prom<V +>{
      nsI = ld nsI;
      nsI1 = force? nsI;
      checkMissing(nsI1);
      return nsI1;
    };
    r251 = dyn ncol1(p65);
    check L341() else D127();
  L342():
    sym22 = ldf `is.null`;
    base22 = ldf `is.null` in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L343() else L344();
  D79():
    deopt 347 [overwrite18];
  D127():
    deopt 538 [r251];
  L53(c57):
    c71 = `as.logical`(c57);
    if c71 then L285() else L57(c71);
  L67(i44, dx79):
    st gen = dx79;
    delayed8 = ld delayed;
    check L321() else D116();
  L74(c101, r254):
    r257 = `!`(r254);
    c103 = `as.logical`(r257);
    c104 = `&&`(c101, c103);
    goto L73(c104);
  L75(c108):
    c112 = `as.logical`(c108);
    if c112 then L352() else L76();
  L249():
    overwrite19 = force? overwrite18;
    checkMissing(overwrite19);
    c51 = `is.object`(overwrite19);
    if c51 then L250() else L251(overwrite19);
  L272():
    sym13 = ldf `is.na`;
    base13 = ldf `is.na` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L273() else L274();
  L317():
    dr70 = tryDispatchBuiltin.1("[", delayed5);
    dc35 = getTryDispatchBuiltinDispatched(dr70);
    if dc35 then L319() else L318(i38, dr70);
  L318(i42, delayed7):
    i45 = ld i;
    check L320() else D115();
  L341():
    st p1 = r251;
    c95 = `==`(r251, NULL);
    goto L72(c95);
  L343():
    ncol2 = ldf ncol;
    check L345() else D128();
  L344():
    r253 = dyn base22(<lang `<-`(p2, ncol(info))>);
    goto L74(c96, r253);
  L348():
    p67 = ld p1;
    check L349() else D130();
  D115():
    deopt 490 [i42, delayed7, i45];
  D116():
    deopt 495 [i44, delayed8];
  D128():
    deopt 544 [c96];
  D130():
    deopt 551 [c106, p67];
  L48(dx73):
    st bad = dx73;
    nrow2 = ldf nrow;
    check L254() else D81();
  L54(c60, r188):
    c68 = `as.logical`(r188);
    c69 = `&&`(c60, c68);
    goto L53(c69);
  L57(c73):
    c87 = `as.logical`(c73);
    if c87 then L299() else L61();
  L76():
    goto L77();
  L77():
    setNamespaceInfo = ldf setNamespaceInfo;
    check L356() else D134();
  L250():
    dr66 = tryDispatchBuiltin.1("[", overwrite19);
    dc33 = getTryDispatchBuiltinDispatched(dr66);
    if dc33 then L252() else L251(dr66);
  L251(overwrite21):
    ind = ld ind;
    check L253() else D80();
  L273():
    sym14 = ldf match;
    base14 = ldf match in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L275() else L276();
  L274():
    r187 = dyn base13(<lang match(tolower(Sys.getenv("_R_S3_METHOD_REGISTRATION_NOTE_OVERWRITES_")), c("0", "no", "false"))>);
    goto L54(c55, r187);
  L285():
    sym16 = ldf `is.na`;
    base16 = ldf `is.na` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L286() else L287();
  L319():
    dx78 = getTryDispatchBuiltinValue(dr70);
    goto L67(i38, dx78);
  L320():
    i46 = force? i45;
    __33 = ldf `[` in base;
    r234 = dyn __33(delayed7, i46, 1);
    goto L67(i42, r234);
  L321():
    delayed9 = force? delayed8;
    checkMissing(delayed9);
    c92 = `is.object`(delayed9);
    if c92 then L322() else L323(i44, delayed9);
  L345():
    p66 = prom<V +>{
      info39 = ld info;
      info40 = force? info39;
      checkMissing(info40);
      return info40;
    };
    r256 = dyn ncol2(p66);
    check L346() else D129();
  L349():
    p68 = force? p67;
    checkMissing(p68);
    p69 = ld p2;
    check L350() else D131();
  L352():
    stop = ldf stop;
    check L353() else D132();
  D80():
    deopt 349 [overwrite21, ind];
  D81():
    deopt 358 [];
  D129():
    deopt 546 [c96, r256];
  D131():
    deopt 552 [c106, p68, p69];
  D132():
    deopt 557 [];
  D134():
    deopt 565 [];
  L55(c63, r190):
    is_na2 = ldf `is.na` in base;
    r198 = dyn is_na2(r190);
    check L283() else D97();
  L58(c76, r200):
    r209 = `!`(r200);
    c84 = `as.logical`(r209);
    c85 = `&&`(c76, c84);
    goto L57(c85);
  L61():
    goto L62(NULL);
  L62(r224):
    goto L63();
  L68(i50, dx81):
    st cls = dx81;
    get1 = ldf get;
    check L326() else D118();
  L252():
    dx72 = getTryDispatchBuiltinValue(dr66);
    goto L48(dx72);
  L253():
    ind1 = force? ind;
    __31 = ldf `[` in base;
    r166 = dyn __31(overwrite19, ind1, <missing>, FALSE);
    goto L48(r166);
  L254():
    p41 = prom<V +>{
      bad = ld bad;
      bad1 = force? bad;
      checkMissing(bad1);
      return bad1;
    };
    r168 = dyn nrow2(p41);
    check L255() else D82();
  L275():
    tolower = ldf tolower;
    check L277() else D93();
  L276():
    r189 = dyn base14(<lang tolower(Sys.getenv("_R_S3_METHOD_REGISTRATION_NOTE_OVERWRITES_"))>, <lang c("0", "no", "false")>);
    goto L55(c55, r189);
  L286():
    sym17 = ldf match;
    base17 = ldf match in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L288() else L289();
  L287():
    r199 = dyn base16(<lang match(Sys.getenv("_R_CHECK_PACKAGE_NAME_"), c("", package))>);
    goto L58(c71, r199);
  L299():
    ngettext2 = ldf ngettext;
    check L300() else D104();
  L322():
    dr72 = tryDispatchBuiltin.1("[", delayed9);
    dc36 = getTryDispatchBuiltinDispatched(dr72);
    if dc36 then L324() else L323(i44, dr72);
  L323(i48, delayed11):
    i51 = ld i;
    check L325() else D117();
  L346():
    st p2 = r256;
    c102 = `==`(r256, NULL);
    goto L74(c96, c102);
  L350():
    p70 = force? p69;
    checkMissing(p70);
    r258 = `!=`(p68, p70);
    c109 = `as.logical`(r258);
    c110 = `&&`(c106, c109);
    goto L75(c110);
  L353():
    p80 = prom<V +>{
      gettextf = ldf gettextf;
      p71 = prom<V +>{
        paste4 = ldf paste;
        r259 = dyn paste4[, , sep]("While loading namespace \"%s\": \"%s\" differ in ncol(.), env=%d, newNS=%d.", "Maybe package installed with version of R newer than %s ?", "\n");
        return r259;
      };
      p72 = prom<V +>{
        package13 = ld package;
        package14 = force? package13;
        checkMissing(package14);
        return package14;
      };
      p75 = prom<V +>{
        p73 = ld p1;
        p74 = force? p73;
        checkMissing(p74);
        return p74;
      };
      p78 = prom<V +>{
        p76 = ld p2;
        p77 = force? p76;
        checkMissing(p77);
        return p77;
      };
      p79 = prom<V +>{
        getRversion = ldf getRversion;
        r264 = dyn getRversion();
        return r264;
      };
      r266 = dyn gettextf(p71, p72, "S3methods", p75, p78, p79);
      return r266;
    };
    r268 = dyn stop[, domain](p80, NA_LGL);
    check L354() else D133();
  L356():
    p81 = prom<V +>{
      env21 = ld env;
      env22 = force? env21;
      checkMissing(env22);
      return env22;
    };
    p84 = prom<V +>{
      rbind = ldf rbind;
      p82 = prom<V +>{
        info41 = ld info;
        info42 = force? info41;
        checkMissing(info42);
        return info42;
      };
      p83 = prom<V +>{
        nsI2 = ld nsI;
        nsI3 = force? nsI2;
        checkMissing(nsI3);
        return nsI3;
      };
      r273 = dyn rbind(p82, p83);
      return r273;
    };
    r275 = dyn setNamespaceInfo(p81, "S3methods", p84);
    check L357() else D135();
  D82():
    deopt 360 [r168];
  D93():
    deopt 409 [c55];
  D97():
    deopt 424 [c63, r198];
  D104():
    deopt 450 [];
  D117():
    deopt 497 [i48, delayed11, i51];
  D118():
    deopt 503 [i50];
  D133():
    deopt 561 [r268];
  D135():
    deopt 569 [r275];
  L59(c79, r202):
    is_na3 = ldf `is.na` in base;
    r208 = dyn is_na3(r202);
    check L297() else D103();
  L255():
    st nr = r168;
    c52 = `as.logical`(r168);
    if c52 then L256() else L49();
  L277():
    p49 = prom<V +>{
      Sys_getenv1 = ldf `Sys.getenv`;
      r191 = dyn Sys_getenv1("_R_S3_METHOD_REGISTRATION_NOTE_OVERWRITES_");
      return r191;
    };
    r193 = dyn tolower(p49);
    check L278() else D94();
  L283():
    goto L54(c63, r198);
  L288():
    Sys_getenv2 = ldf `Sys.getenv`;
    check L290() else D98();
  L289():
    r201 = dyn base17(<lang Sys.getenv("_R_CHECK_PACKAGE_NAME_")>, <lang c("", package)>);
    goto L59(c71, r201);
  L300():
    p50 = prom<V +>{
      nr2 = ld nr;
      nr3 = force? nr2;
      checkMissing(nr3);
      return nr3;
    };
    r211 = dyn ngettext2[, , , domain](p50, "Registered S3 method overwritten by '%s':", "Registered S3 methods overwritten by '%s':", NA_LGL);
    check L301() else D105();
  L324():
    dx80 = getTryDispatchBuiltinValue(dr72);
    goto L68(i44, dx80);
  L325():
    i52 = force? i51;
    __34 = ldf `[` in base;
    r235 = dyn __34(delayed11, i52, 2);
    goto L68(i48, r235);
  L326():
    p58 = prom<V +>{
      delayed12 = ld delayed;
      delayed13 = force? delayed12;
      checkMissing(delayed13);
      c93 = `is.object`(delayed13);
      if c93 then L1() else L2(delayed13);
    L0(dx83):
      return dx83;
    L1():
      dr74 = tryDispatchBuiltin.1("[", delayed13);
      dc37 = getTryDispatchBuiltinDispatched(dr74);
      if dc37 then L3() else L2(dr74);
    L2(delayed15):
      i53 = ld i;
      i54 = force? i53;
      __35 = ldf `[` in base;
      r236 = dyn __35(delayed15, i54, 3);
      goto L0(r236);
    L3():
      dx82 = getTryDispatchBuiltinValue(dr74);
      goto L0(dx82);
    };
    p59 = prom<V +>{
      env17 = ld env;
      env18 = force? env17;
      checkMissing(env18);
      return env18;
    };
    r239 = dyn get1[, envir](p58, p59);
    check L327() else D119();
  L354():
    goto L77();
  L357():
    popenv;
    return r275;
  D94():
    deopt 411 [c55, r193];
  D98():
    deopt 431 [c71];
  D103():
    deopt 446 [c79, r208];
  D105():
    deopt 456 [r211];
  D119():
    deopt 507 [i50, r239];
  L49():
    goto L51(NULL);
  L51(dx76):
    goto L52();
  L256():
    ngettext1 = ldf ngettext;
    check L257() else D83();
  L278():
    sym15 = ldf c;
    base15 = ldf c in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L279() else L280();
  L290():
    r203 = dyn Sys_getenv2("_R_CHECK_PACKAGE_NAME_");
    check L291() else D99();
  L297():
    goto L58(c79, r208);
  L301():
    st msg = r211;
    paste3 = ldf paste;
    check L302() else D106();
  L327():
    st fun = r239;
    delayed16 = ld delayed;
    check L328() else D120();
  D83():
    deopt 363 [];
  D99():
    deopt 433 [c71, r203];
  D106():
    deopt 459 [];
  D120():
    deopt 509 [i50, delayed16];
  L56(c66, r195):
    match1 = ldf match in base;
    r197 = dyn match1(r193, r195, NA_INT, NULL);
    check L282() else D96();
  L257():
    p42 = prom<V +>{
      nr = ld nr;
      nr1 = force? nr;
      checkMissing(nr1);
      return nr1;
    };
    r170 = dyn ngettext1[, , , domain](p42, "Registered S3 method from a standard package overwritten by '%s':", "Registered S3 methods from standard package(s) overwritten by '%s':", NA_LGL);
    check L258() else D84();
  L279():
    c67 = ldf c in base;
    r196 = dyn c67("0", "no", "false");
    check L281() else D95();
  L280():
    r194 = dyn base15("0", "no", "false");
    goto L56(c55, r194);
  L291():
    sym18 = ldf c;
    base18 = ldf c in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L292() else L293();
  L302():
    p54 = prom<V +>{
      sym19 = ldf c;
      base19 = ldf c in base;
      guard19 = `==`.4(sym19, base19);
      if guard19 then L1() else L2();
    L0(r213):
      return r213;
    L1():
      sprintf2 = ldf sprintf;
      p51 = prom<V +>{
        msg4 = ld msg;
        msg5 = force? msg4;
        checkMissing(msg5);
        return msg5;
      };
      p52 = prom<V +>{
        package11 = ld package;
        package12 = force? package11;
        checkMissing(package12);
        return package12;
      };
      r216 = dyn sprintf2(p51, p52);
      _fmt1 = ldf `.fmt`;
      p53 = prom<V +>{
        overwrite28 = ld overwrite;
        overwrite29 = force? overwrite28;
        checkMissing(overwrite29);
        return overwrite29;
      };
      r218 = dyn _fmt1(p53);
      c88 = ldf c in base;
      r219 = dyn c88(r216, r218);
      goto L0(r219);
    L2():
      r212 = dyn base19(<lang sprintf(msg, package)>, <lang .fmt(overwrite)>);
      goto L0(r212);
    };
    r221 = dyn paste3[, collapse](p54, "\n");
    check L303() else D107();
  L328():
    delayed17 = force? delayed16;
    checkMissing(delayed17);
    c94 = `is.object`(delayed17);
    if c94 then L329() else L330(i50, delayed17);
  D84():
    deopt 369 [r170];
  D95():
    deopt 418 [c55, r196];
  D96():
    deopt 422 [c66, r197];
  D107():
    deopt 463 [r221];
  L60(c82, r205):
    match2 = ldf match in base;
    r207 = dyn match2(r203, r205, NA_INT, NULL);
    check L296() else D102();
  L69(i58, dx85):
    st pkg = dx85;
    register_S3_method_delayed = ldf register_S3_method_delayed;
    check L333() else D122();
  L258():
    st msg = r170;
    paste2 = ldf paste;
    check L259() else D85();
  L281():
    goto L56(c55, r196);
  L282():
    goto L55(c66, r197);
  L292():
    package9 = ld package;
    check L294() else D100();
  L293():
    r204 = dyn base18("", <sym package>);
    goto L60(c71, r204);
  L303():
    st msg = r221;
    packageStartupMessage = ldf packageStartupMessage;
    check L304() else D108();
  L329():
    dr76 = tryDispatchBuiltin.1("[", delayed17);
    dc38 = getTryDispatchBuiltinDispatched(dr76);
    if dc38 then L331() else L330(i50, dr76);
  L330(i56, delayed19):
    i59 = ld i;
    check L332() else D121();
  D85():
    deopt 372 [];
  D100():
    deopt 437 [c71, package9];
  D102():
    deopt 444 [c82, r207];
  D108():
    deopt 466 [];
  D121():
    deopt 511 [i56, delayed19, i59];
  D122():
    deopt 517 [i58];
  L259():
    p46 = prom<V +>{
      sym12 = ldf c;
      base12 = ldf c in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L1() else L2();
    L0(r172):
      return r172;
    L1():
      sprintf1 = ldf sprintf;
      p43 = prom<V +>{
        msg = ld msg;
        msg1 = force? msg;
        checkMissing(msg1);
        return msg1;
      };
      p44 = prom<V +>{
        package7 = ld package;
        package8 = force? package7;
        checkMissing(package8);
        return package8;
      };
      r175 = dyn sprintf1(p43, p44);
      _fmt = ldf `.fmt`;
      p45 = prom<V +>{
        bad2 = ld bad;
        bad3 = force? bad2;
        checkMissing(bad3);
        return bad3;
      };
      r177 = dyn _fmt(p45);
      c53 = ldf c in base;
      r178 = dyn c53(r175, r177);
      goto L0(r178);
    L2():
      r171 = dyn base12(<lang sprintf(msg, package)>, <lang .fmt(bad)>);
      goto L0(r171);
    };
    r180 = dyn paste2[, collapse](p46, "\n");
    check L260() else D86();
  L294():
    package10 = force? package9;
    checkMissing(package10);
    c83 = ldf c in base;
    r206 = dyn c83("", package10);
    check L295() else D101();
  L296():
    goto L59(c82, r207);
  L304():
    p55 = prom<V +>{
      msg6 = ld msg;
      msg7 = force? msg6;
      checkMissing(msg7);
      return msg7;
    };
    r223 = dyn packageStartupMessage[, domain](p55, NA_LGL);
    check L305() else D109();
  L331():
    dx84 = getTryDispatchBuiltinValue(dr76);
    goto L69(i50, dx84);
  L332():
    i60 = force? i59;
    __36 = ldf `[` in base;
    r240 = dyn __36(delayed19, i60, 5);
    goto L69(i56, r240);
  L333():
    p60 = prom<V +>{
      pkg = ld pkg;
      pkg1 = force? pkg;
      checkMissing(pkg1);
      return pkg1;
    };
    p61 = prom<V +>{
      gen = ld gen;
      gen1 = force? gen;
      checkMissing(gen1);
      return gen1;
    };
    p62 = prom<V +>{
      cls = ld cls;
      cls1 = force? cls;
      checkMissing(cls1);
      return cls1;
    };
    p63 = prom<V +>{
      fun = ld fun;
      fun1 = force? fun;
      checkMissing(fun1);
      return fun1;
    };
    r245 = dyn register_S3_method_delayed(p60, p61, p62, p63);
    check L334() else D123();
  D86():
    deopt 376 [r180];
  D101():
    deopt 440 [c71, r206];
  D109():
    deopt 470 [r223];
  D123():
    deopt 522 [i58, r245];
  L260():
    st msg = r180;
    message = ldf message;
    check L261() else D87();
  L295():
    goto L60(c71, r206);
  L305():
    goto L62(r223);
  L334():
    goto L66(i58);
  D87():
    deopt 379 [];
  L261():
    p47 = prom<V +>{
      msg2 = ld msg;
      msg3 = force? msg2;
      checkMissing(msg3);
      return msg3;
    };
    r182 = dyn message[, domain](p47, NA_LGL);
    check L262() else D88();
  D88():
    deopt 383 [r182];
  L262():
    overwrite22 = ld overwrite;
    check L263() else D89();
  D89():
    deopt 384 [overwrite22];
  L263():
    overwrite23 = force? overwrite22;
    checkMissing(overwrite23);
    c54 = `is.object`(overwrite23);
    if c54 then L264() else L265(overwrite23);
  L50(dx75):
    st overwrite = dx75;
    goto L51(dx75);
  L264():
    dr68 = tryDispatchBuiltin.1("[", overwrite23);
    dc34 = getTryDispatchBuiltinDispatched(dr68);
    if dc34 then L266() else L265(dr68);
  L265(overwrite25):
    ind2 = ld ind;
    check L267() else D90();
  D90():
    deopt 386 [overwrite25, ind2];
  L266():
    dx74 = getTryDispatchBuiltinValue(dr68);
    goto L50(dx74);
  L267():
    ind3 = force? ind2;
    checkMissing(ind3);
    r183 = `!`(ind3);
    __32 = ldf `[` in base;
    r184 = dyn __32(overwrite23, r183, <missing>, FALSE);
    goto L50(r184);
  }
}
fun inner2066824098(x, method, home, envir) {
  (reg x:*, reg method:*, reg home:*, reg envir:*) -+> V { var x:*, var method:*, var home:*, var envir:*, reg method1:*, reg method2:V, reg home1:*, reg home2:V, reg delayedAssign:cls, reg x1:*, reg x2:V, reg p:p(V +), reg get:cls, reg method3:*, reg method4:V, reg p1:p(V +), reg home3:*, reg home4:V, reg p2:p(V +), reg r3:V, reg p3:p(V +), reg envir1:*, reg envir2:V, reg p4:p(V +), reg r6:V |
    mkenv;
    st x = x;
    st method = method;
    st home = home;
    st envir = envir;
    method1 = ld method;
    check L0() else D0();
  D0():
    deopt 0 [method1];
  L0():
    method2 = force? method1;
    checkMissing(method2);
    st method = method2;
    home1 = ld home;
    check L1() else D1();
  D1():
    deopt 3 [home1];
  L1():
    home2 = force? home1;
    checkMissing(home2);
    st home = home2;
    delayedAssign = ldf delayedAssign;
    check L2() else D2();
  D2():
    deopt 7 [];
  L2():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p3 = prom<V +>{
      get = ldf get;
      p1 = prom<V +>{
        method3 = ld method;
        method4 = force? method3;
        checkMissing(method4);
        return method4;
      };
      p2 = prom<V +>{
        home3 = ld home;
        home4 = force? home3;
        checkMissing(home4);
        return home4;
      };
      r3 = dyn get[, envir](p1, p2);
      return r3;
    };
    p4 = prom<V +>{
      envir1 = ld envir;
      envir2 = force? envir1;
      checkMissing(envir2);
      return envir2;
    };
    r6 = dyn delayedAssign[, , `assign.env`](p, p3, p4);
    check L3() else D3();
  D3():
    deopt 12 [r6];
  L3():
    popenv;
    return r6;
  }
}
fun inner2277348269(genname, class, method, nm, envir) {
  (reg genname:*, reg class:*, reg method:*, reg nm:*, reg envir:*) -+> V { var genname:*, var class:*, var method:*, var nm:*, var envir:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg _knownS3Generics:*, reg _knownS3Generics1:V, reg c:L, reg _knownS3Generics3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg genname1:*, reg genname2:V, reg __:cls, reg r2:V, reg is_na:cls, reg r3:V, reg r4:V, reg c1:L, reg asNamespace:cls, reg w:*, reg w1:V, reg p:p(V +), reg r6:V, reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg get0:cls, reg genname3:*, reg genname4:V, reg p1:p(V +), reg parent_env:cls, reg envir1:*, reg envir2:V, reg p2:p(V +), reg r12:V, reg p3:p(V +), reg r14:V, reg c2:V, reg c3:L, reg stop:cls, reg gettextf:cls, reg genname5:*, reg genname6:V, reg p4:p(V +), reg package:*, reg package1:V, reg p5:p(V +), reg r17:V, reg p6:p(V +), reg r19:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r21:V, reg r22:V, reg _isMethodsDispatchOn:cls, reg r23:V, reg c4:L, reg c6:V, reg __1:cls, reg r24:V, reg r25:cls, reg genfun:*, reg genfun1:V, reg p7:p(V +), reg r27:V, reg c7:L, reg c8:V, reg c10:L, reg __2:cls, reg r28:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r30:V, reg r31:V, reg genfun2:*, reg genfun3:V, reg typeof:cls, reg r32:V, reg r33:V, reg c11:L, reg environment:cls, reg genfun4:*, reg genfun5:V, reg p8:p(V +), reg r35:V, reg _BaseNamespaceEnv:*, reg _BaseNamespaceEnv1:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r36:V, reg r37:V, reg defenv:*, reg defenv1:V, reg c12:L, reg defenv3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __3:cls, reg r38:V, reg c13:V, reg c14:L, reg new_env:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r39:V, reg r40:V, reg baseenv:cls, reg r41:V, reg p9:p(V +), reg r43:V, reg table:*, reg table1:V, reg l:*, reg c15:L, reg table3:V, reg l2:*, reg dr4:V, reg dc2:L, reg dx4:V, reg table5:V, reg dx5:V, reg ____:cls, reg r44:V, reg tryCatch:cls, reg table7:*, reg table8:V, reg c16:L, reg table10:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg nm1:*, reg nm2:V, reg __4:cls, reg r45:V, reg p10:p(V +), reg r47:cls, reg p11:p(V +), reg r49:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r50:V, reg r51:V, reg e:*, reg e1:V, reg c17:V, reg r52:V, reg c18:L, reg c20:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r53:V, reg c23:L, reg r54:V, reg e2:*, reg e3:V, reg get1:cls, reg method1:*, reg method2:V, reg p12:p(V +), reg envir3:*, reg envir4:V, reg p13:p(V +), reg r57:V, reg identical:cls, reg r58:V, reg r59:V, reg c24:L, reg c25:V, reg c27:L, reg environmentName:cls, reg environment1:cls, reg e4:*, reg e5:V, reg p14:p(V +), reg r61:V, reg p15:p(V +), reg r63:V, reg rbind:cls, reg overwrite:*, reg overwrite1:V, reg p16:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r65:V, reg r66:V, reg as_vector:cls, reg nm3:*, reg nm4:V, reg p17:p(V +), reg r68:V, reg current:*, reg current1:V, reg c28:cls, reg r69:V, reg p18:p(V +), reg r71:V, reg assignWrapped:cls, reg nm5:*, reg nm6:V, reg p19:p(V +), reg method3:*, reg method4:V, reg p20:p(V +), reg envir5:*, reg envir6:V, reg p21:p(V +), reg table11:*, reg table12:V, reg p22:p(V +), reg r77:V |
    mkenv;
    st genname = genname;
    st class = class;
    st method = method;
    st nm = nm;
    st envir = envir;
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L23() else L24();
  L0(r1):
    r4 = `!`(r1);
    c1 = `as.logical`(r4);
    if c1 then L31() else L2();
  L23():
    _knownS3Generics = ld `.knownS3Generics`;
    check L25() else D0();
  L24():
    r = dyn base(<lang `<-`(w, `[`(.knownS3Generics, genname))>);
    goto L0(r);
  D0():
    deopt 2 [_knownS3Generics];
  L2():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L35() else L36();
  L3(r7):
    st defenv = r7;
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L62() else L63();
  L25():
    _knownS3Generics1 = force? _knownS3Generics;
    checkMissing(_knownS3Generics1);
    c = `is.object`(_knownS3Generics1);
    if c then L26() else L27(_knownS3Generics1);
  L31():
    asNamespace = ldf asNamespace;
    check L32() else D3();
  D3():
    deopt 12 [];
  L1(dx1):
    st w = dx1;
    is_na = ldf `is.na` in base;
    r3 = dyn is_na(dx1);
    check L30() else D2();
  L4(r9):
    c3 = `as.logical`(r9);
    if c3 then L39() else L5();
  L13(r37):
    c14 = `as.logical`(r37);
    if c14 then L68() else L15();
  L26():
    dr = tryDispatchBuiltin.1("[", _knownS3Generics1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L28() else L27(dr);
  L27(_knownS3Generics3):
    genname1 = ld genname;
    check L29() else D1();
  L32():
    p = prom<V +>{
      w = ld w;
      w1 = force? w;
      checkMissing(w1);
      return w1;
    };
    r6 = dyn asNamespace(p);
    check L33() else D4();
  L35():
    get0 = ldf get0;
    check L37() else D5();
  L36():
    r8 = dyn base1(<lang `<-`(genfun, get0(genname, envir=parent.env(envir)))>);
    goto L4(r8);
  L62():
    defenv = ld defenv;
    check L64() else D18();
  L63():
    r36 = dyn base4(<lang `<-`(table, `[[`(defenv, ".__S3MethodsTable__."))>);
    goto L13(r36);
  D1():
    deopt 4 [_knownS3Generics3, genname1];
  D2():
    deopt 9 [r3];
  D4():
    deopt 14 [r6];
  D5():
    deopt 17 [];
  D18():
    deopt 69 [defenv];
  L5():
    goto L6();
  L6():
    sym2 = ldf `.isMethodsDispatchOn`;
    base2 = ldf `.isMethodsDispatchOn` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L43() else L44();
  L15():
    goto L17();
  L17():
    tryCatch = ldf tryCatch;
    check L76() else D22();
  L28():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L29():
    genname2 = force? genname1;
    __ = ldf `[` in base;
    r2 = dyn __(_knownS3Generics3, genname2);
    goto L1(r2);
  L30():
    goto L0(r3);
  L33():
    goto L3(r6);
  L37():
    p1 = prom<V +>{
      genname3 = ld genname;
      genname4 = force? genname3;
      checkMissing(genname4);
      return genname4;
    };
    p3 = prom<V +>{
      parent_env = ldf `parent.env`;
      p2 = prom<V +>{
        envir1 = ld envir;
        envir2 = force? envir1;
        checkMissing(envir2);
        return envir2;
      };
      r12 = dyn parent_env(p2);
      return r12;
    };
    r14 = dyn get0[, envir](p1, p3);
    check L38() else D6();
  L39():
    stop = ldf stop;
    check L40() else D7();
  L64():
    defenv1 = force? defenv;
    checkMissing(defenv1);
    c12 = `is.object`(defenv1);
    if c12 then L65() else L66(defenv1);
  L68():
    new_env = ldf `new.env`;
    check L69() else D19();
  D6():
    deopt 21 [r14];
  D7():
    deopt 25 [];
  D19():
    deopt 77 [];
  D22():
    deopt 94 [];
  L7(r22):
    c4 = `as.logical`(r22);
    if c4 then L46() else L8(c4);
  L14(dx3):
    st table = dx3;
    c13 = `==`(dx3, NULL);
    goto L13(c13);
  L38():
    st genfun = r14;
    c2 = `==`(r14, NULL);
    goto L4(c2);
  L40():
    p6 = prom<V +>{
      gettextf = ldf gettextf;
      p4 = prom<V +>{
        genname5 = ld genname;
        genname6 = force? genname5;
        checkMissing(genname6);
        return genname6;
      };
      p5 = prom<V +>{
        package = ld package;
        package1 = force? package;
        checkMissing(package1);
        return package1;
      };
      r17 = dyn gettextf("object '%s' not found whilst loading namespace '%s'", p4, p5);
      return r17;
    };
    r19 = dyn stop[, `call.`, domain](p6, FALSE, NA_LGL);
    check L41() else D8();
  L43():
    _isMethodsDispatchOn = ldf `.isMethodsDispatchOn` in base;
    r23 = dyn _isMethodsDispatchOn();
    check L45() else D9();
  L44():
    r21 = dyn base2();
    goto L7(r21);
  L65():
    dr2 = tryDispatchBuiltin.1("[[", defenv1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L67() else L66(dr2);
  L66(defenv3):
    __3 = ldf `[[` in base;
    r38 = dyn __3(defenv3, ".__S3MethodsTable__.");
    goto L14(r38);
  L69():
    p9 = prom<V +>{
      sym5 = ldf baseenv;
      base5 = ldf baseenv in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r40):
      return r40;
    L1():
      baseenv = ldf baseenv in base;
      r41 = dyn baseenv();
      goto L0(r41);
    L2():
      r39 = dyn base5();
      goto L0(r39);
    };
    r43 = dyn new_env[hash, parent](TRUE, p9);
    check L70() else D20();
  L76():
    p10 = prom<V +>{
      table7 = ld table;
      table8 = force? table7;
      checkMissing(table8);
      c16 = `is.object`(table8);
      if c16 then L1() else L2(table8);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[[", table8);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(table10):
      nm1 = ld nm;
      nm2 = force? nm1;
      __4 = ldf `[[` in base;
      r45 = dyn __4(table10, nm2);
      goto L0(r45);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p11 = prom<V +>{
      r47 = clos inner3708401697;
      return r47;
    };
    r49 = dyn tryCatch[, error](p10, p11);
    check L77() else D23();
  D8():
    deopt 31 [r19];
  D9():
    deopt 37 [r23];
  D20():
    deopt 82 [r43];
  D23():
    deopt 98 [r49];
  L8(c6):
    c10 = `as.logical`(c6);
    if c10 then L51() else L9();
  L41():
    goto L6();
  L45():
    goto L7(r23);
  L46():
    __1 = ldf `::`;
    check L47() else D10();
  L67():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L14(dx2);
  L70():
    st table = r43;
    table = ld table;
    check L71() else D21();
  L77():
    st e = r49;
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L78() else L79();
  D10():
    deopt 39 [c4];
  D21():
    deopt 84 [table];
  L9():
    goto L10();
  L10():
    sym3 = ldf typeof;
    base3 = ldf typeof in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L53() else L54();
  L18(r51):
    r52 = `!`(r51);
    c18 = `as.logical`(r52);
    if c18 then L81() else L19(c18);
  L47():
    r24 = dyn __1("methods", "is");
    check L48() else D11();
  L51():
    __2 = ldf `@` in base;
    r28 = dyn __2(<sym genfun>, <sym default>);
    st genfun = r28;
    goto L10();
  L71():
    table1 = force? table;
    checkMissing(table1);
    l = ld defenv;
    c15 = `is.object`(l);
    if c15 then L72() else L73(table1, l);
  L78():
    e = ld e;
    check L80() else D24();
  L79():
    r50 = dyn base6(<sym e>);
    goto L18(r50);
  D11():
    deopt 42 [c4, r24];
  D24():
    deopt 101 [e];
  L11(r31):
    r33 = `==`(r31, "closure");
    c11 = `as.logical`(r33);
    if c11 then L57() else L12();
  L16(table5, dx5):
    st defenv = dx5;
    goto L17();
  L19(c20):
    c27 = `as.logical`(c20);
    if c27 then L89() else L21();
  L48():
    checkFun.0(r24);
    r25 = r24 as cls;
    p7 = prom<V +>{
      genfun = ld genfun;
      genfun1 = force? genfun;
      checkMissing(genfun1);
      return genfun1;
    };
    r27 = dyn r25(p7, "genericFunction");
    check L49() else D12();
  L53():
    genfun2 = ld genfun;
    check L55() else D13();
  L54():
    r30 = dyn base3(<sym genfun>);
    goto L11(r30);
  L72():
    dr4 = tryDispatchBuiltin.0("[[<-", l, table1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L74() else L73(table1, dr4);
  L73(table3, l2):
    ____ = ldf `[[<-` in base;
    r44 = dyn ____(l2, table1, ".__S3MethodsTable__.");
    goto L16(table3, r44);
  L80():
    e1 = force? e;
    checkMissing(e1);
    c17 = `==`(e1, NULL);
    goto L18(c17);
  L81():
    sym7 = ldf identical;
    base7 = ldf identical in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L82() else L83();
  D12():
    deopt 46 [c4, r27];
  D13():
    deopt 55 [genfun2];
  L12():
    _BaseNamespaceEnv = ld `.BaseNamespaceEnv`;
    check L61() else D17();
  L20(c23, r54):
    r59 = `!`(r54);
    c24 = `as.logical`(r59);
    c25 = `&&`(c23, c24);
    goto L19(c25);
  L21():
    goto L22();
  L22():
    assignWrapped = ldf assignWrapped;
    check L95() else D33();
  L49():
    c7 = `as.logical`(r27);
    c8 = `&&`(c4, c7);
    goto L8(c8);
  L55():
    genfun3 = force? genfun2;
    checkMissing(genfun3);
    typeof = ldf typeof in base;
    r32 = dyn typeof(genfun3);
    check L56() else D14();
  L57():
    environment = ldf environment;
    check L58() else D15();
  L74():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L16(table1, dx4);
  L82():
    e2 = ld e;
    check L84() else D25();
  L83():
    r53 = dyn base7(<sym e>, <lang get(method, envir=envir)>);
    goto L20(c18, r53);
  L89():
    environmentName = ldf environmentName;
    check L90() else D29();
  D14():
    deopt 58 [r32];
  D15():
    deopt 62 [];
  D17():
    deopt 65 [_BaseNamespaceEnv];
  D25():
    deopt 107 [c18, e2];
  D29():
    deopt 127 [];
  D33():
    deopt 140 [];
  L56():
    goto L11(r32);
  L58():
    p8 = prom<V +>{
      genfun4 = ld genfun;
      genfun5 = force? genfun4;
      checkMissing(genfun5);
      return genfun5;
    };
    r35 = dyn environment(p8);
    check L59() else D16();
  L61():
    _BaseNamespaceEnv1 = force? _BaseNamespaceEnv;
    checkMissing(_BaseNamespaceEnv1);
    goto L3(_BaseNamespaceEnv1);
  L84():
    e3 = force? e2;
    checkMissing(e3);
    get1 = ldf get;
    check L85() else D26();
  L90():
    p15 = prom<V +>{
      environment1 = ldf environment;
      p14 = prom<V +>{
        e4 = ld e;
        e5 = force? e4;
        checkMissing(e5);
        return e5;
      };
      r61 = dyn environment1(p14);
      return r61;
    };
    r63 = dyn environmentName(p15);
    check L91() else D30();
  L95():
    p19 = prom<V +>{
      nm5 = ld nm;
      nm6 = force? nm5;
      checkMissing(nm6);
      return nm6;
    };
    p20 = prom<V +>{
      method3 = ld method;
      method4 = force? method3;
      checkMissing(method4);
      return method4;
    };
    p21 = prom<V +>{
      envir5 = ld envir;
      envir6 = force? envir5;
      checkMissing(envir6);
      return envir6;
    };
    p22 = prom<V +>{
      table11 = ld table;
      table12 = force? table11;
      checkMissing(table12);
      return table12;
    };
    r77 = dyn assignWrapped[, , home, envir](p19, p20, p21, p22);
    check L96() else D34();
  D16():
    deopt 64 [r35];
  D26():
    deopt 110 [c18];
  D30():
    deopt 129 [r63];
  D34():
    deopt 147 [r77];
  L59():
    goto L3(r35);
  L85():
    p12 = prom<V +>{
      method1 = ld method;
      method2 = force? method1;
      checkMissing(method2);
      return method2;
    };
    p13 = prom<V +>{
      envir3 = ld envir;
      envir4 = force? envir3;
      checkMissing(envir4);
      return envir4;
    };
    r57 = dyn get1[, envir](p12, p13);
    check L86() else D27();
  L91():
    st current = r63;
    rbind = ldf rbind;
    check L92() else D31();
  L96():
    popenv;
    return r77;
  D27():
    deopt 114 [c18, r57];
  D31():
    deopt 132 [];
  L86():
    identical = ldf identical in base;
    r58 = dyn identical(e3, r57, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L87() else D28();
  L92():
    p16 = prom<V +>{
      overwrite = ld overwrite;
      overwrite1 = force? overwrite;
      checkMissing(overwrite1);
      return overwrite1;
    };
    p18 = prom<V +>{
      sym8 = ldf c;
      base8 = ldf c in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r66):
      return r66;
    L1():
      as_vector = ldf `as.vector`;
      p17 = prom<V +>{
        nm3 = ld nm;
        nm4 = force? nm3;
        checkMissing(nm4);
        return nm4;
      };
      r68 = dyn as_vector(p17);
      current = ld current;
      current1 = force? current;
      checkMissing(current1);
      c28 = ldf c in base;
      r69 = dyn c28(r68, current1);
      goto L0(r69);
    L2():
      r65 = dyn base8(<lang as.vector(nm)>, <sym current>);
      goto L0(r65);
    };
    r71 = dyn rbind(p16, p18);
    check L93() else D32();
  D28():
    deopt 123 [c18, r58];
  D32():
    deopt 135 [r71];
  L87():
    goto L20(c18, r58);
  L93():
    sst overwrite = r71;
    goto L22();
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:* |
    mkenv;
    st e = e;
    popenv;
    return NULL;
  }
}
fun inner1942959787(o) {
  (reg o:*) -+> V { var o:*, reg sprintf:cls, reg format:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg o1:*, reg o2:V, reg c:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r2:V, reg c1:cls, reg r3:V, reg p:p(V +), reg r5:V, reg p1:p(V +), reg format1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg o5:*, reg o6:V, reg c2:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r9:V, reg c3:cls, reg r10:V, reg p2:p(V +), reg r12:V, reg p3:p(V +), reg r14:V |
    mkenv;
    st o = o;
    sprintf = ldf sprintf;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      format = ldf format;
      p = prom<V +>{
        sym = ldf c;
        base = ldf c in base;
        guard = `==`.4(sym, base);
        if guard then L2() else L3();
      L0(r1):
        return r1;
      L2():
        o1 = ld o;
        o2 = force? o1;
        checkMissing(o2);
        c = `is.object`(o2);
        if c then L4() else L5();
      L3():
        r = dyn base("method", <lang `[`(o, , 1)>);
        goto L0(r);
      L1(dx1):
        c1 = ldf c in base;
        r3 = dyn c1("method", dx1);
        goto L0(r3);
      L4():
        dr = tryDispatchBuiltin.1("[", o2);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L6() else L5();
      L5():
        __ = ldf `[` in base;
        r2 = dyn __(o2, <missing>, 1);
        goto L1(r2);
      L6():
        dx = getTryDispatchBuiltinValue(dr);
        goto L1(dx);
      };
      r5 = dyn format(p);
      return r5;
    };
    p3 = prom<V +>{
      format1 = ldf format;
      p2 = prom<V +>{
        sym1 = ldf c;
        base1 = ldf c in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L2() else L3();
      L0(r8):
        return r8;
      L2():
        o5 = ld o;
        o6 = force? o5;
        checkMissing(o6);
        c2 = `is.object`(o6);
        if c2 then L4() else L5();
      L3():
        r7 = dyn base1("from", <lang `[`(o, , 2)>);
        goto L0(r7);
      L1(dx3):
        c3 = ldf c in base;
        r10 = dyn c3("from", dx3);
        goto L0(r10);
      L4():
        dr2 = tryDispatchBuiltin.1("[", o6);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L6() else L5();
      L5():
        __1 = ldf `[` in base;
        r9 = dyn __1(o6, <missing>, 2);
        goto L1(r9);
      L6():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L1(dx2);
      };
      r12 = dyn format1(p2);
      return r12;
    };
    r14 = dyn sprintf("  %s %s", p1, p3);
    check L1() else D1();
  D1():
    deopt 5 [r14];
  L1():
    popenv;
    return r14;
  }
}
fun inner4138025221(pkg, gen, cls, fun) {
  (reg pkg:*, reg gen:*, reg cls:*, reg fun:*) -+> V { var pkg:*, var gen:*, var cls:*, var fun:*, reg pkg1:*, reg pkg2:V, reg gen1:*, reg gen2:V, reg cls1:*, reg cls2:V, reg fun1:*, reg fun2:V, reg isNamespaceLoaded:cls, reg pkg3:*, reg pkg4:V, reg p:p(V +), reg r1:V, reg c:L, reg registerS3method:cls, reg gen3:*, reg gen4:V, reg p1:p(V +), reg cls3:*, reg cls4:V, reg p2:p(V +), reg fun3:*, reg fun4:V, reg p3:p(V +), reg asNamespace:cls, reg pkg5:*, reg pkg6:V, reg p4:p(V +), reg r6:V, reg p5:p(V +), reg r8:V, reg setHook:cls, reg packageEvent:cls, reg pkg7:*, reg pkg8:V, reg p6:p(V +), reg r11:V, reg p7:p(V +), reg r13:cls, reg p8:p(V +), reg r15:V |
    mkenv;
    st pkg = pkg;
    st gen = gen;
    st cls = cls;
    st fun = fun;
    pkg1 = ld pkg;
    check L2() else D0();
  D0():
    deopt 0 [pkg1];
  L2():
    pkg2 = force? pkg1;
    checkMissing(pkg2);
    st pkg = pkg2;
    gen1 = ld gen;
    check L3() else D1();
  D1():
    deopt 3 [gen1];
  L3():
    gen2 = force? gen1;
    checkMissing(gen2);
    st gen = gen2;
    cls1 = ld cls;
    check L4() else D2();
  D2():
    deopt 6 [cls1];
  L4():
    cls2 = force? cls1;
    checkMissing(cls2);
    st cls = cls2;
    fun1 = ld fun;
    check L5() else D3();
  D3():
    deopt 9 [fun1];
  L5():
    fun2 = force? fun1;
    checkMissing(fun2);
    st fun = fun2;
    isNamespaceLoaded = ldf isNamespaceLoaded;
    check L6() else D4();
  D4():
    deopt 13 [];
  L6():
    p = prom<V +>{
      pkg3 = ld pkg;
      pkg4 = force? pkg3;
      checkMissing(pkg4);
      return pkg4;
    };
    r1 = dyn isNamespaceLoaded(p);
    check L7() else D5();
  D5():
    deopt 15 [r1];
  L7():
    c = `as.logical`(r1);
    if c then L8() else L0();
  L0():
    goto L1();
  L1():
    setHook = ldf setHook;
    check L12() else D8();
  L8():
    registerS3method = ldf registerS3method;
    check L9() else D6();
  D6():
    deopt 17 [];
  D8():
    deopt 27 [];
  L9():
    p1 = prom<V +>{
      gen3 = ld gen;
      gen4 = force? gen3;
      checkMissing(gen4);
      return gen4;
    };
    p2 = prom<V +>{
      cls3 = ld cls;
      cls4 = force? cls3;
      checkMissing(cls4);
      return cls4;
    };
    p3 = prom<V +>{
      fun3 = ld fun;
      fun4 = force? fun3;
      checkMissing(fun4);
      return fun4;
    };
    p5 = prom<V +>{
      asNamespace = ldf asNamespace;
      p4 = prom<V +>{
        pkg5 = ld pkg;
        pkg6 = force? pkg5;
        checkMissing(pkg6);
        return pkg6;
      };
      r6 = dyn asNamespace(p4);
      return r6;
    };
    r8 = dyn registerS3method[, , , envir](p1, p2, p3, p5);
    check L10() else D7();
  L12():
    p7 = prom<V +>{
      packageEvent = ldf packageEvent;
      p6 = prom<V +>{
        pkg7 = ld pkg;
        pkg8 = force? pkg7;
        checkMissing(pkg8);
        return pkg8;
      };
      r11 = dyn packageEvent(p6, "onLoad");
      return r11;
    };
    p8 = prom<V +>{
      r13 = clos inner1246119658;
      return r13;
    };
    r15 = dyn setHook(p7, p8);
    check L13() else D9();
  D7():
    deopt 23 [r8];
  D9():
    deopt 30 [r15];
  L10():
    goto L1();
  L13():
    popenv;
    return r15;
  }
}
fun inner1246119658(`...`) {
  (reg ddd:dots) -+> V { var `...`:dots?, reg registerS3method:cls, reg gen:*, reg gen1:V, reg p:p(V +), reg cls:*, reg cls1:V, reg p1:p(V +), reg fun:*, reg fun1:V, reg p2:p(V +), reg asNamespace:cls, reg pkg:*, reg pkg1:V, reg p3:p(V +), reg r4:V, reg p4:p(V +), reg r6:V |
    mkenv;
    st `...` = ddd;
    registerS3method = ldf registerS3method;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      gen = ld gen;
      gen1 = force? gen;
      checkMissing(gen1);
      return gen1;
    };
    p1 = prom<V +>{
      cls = ld cls;
      cls1 = force? cls;
      checkMissing(cls1);
      return cls1;
    };
    p2 = prom<V +>{
      fun = ld fun;
      fun1 = force? fun;
      checkMissing(fun1);
      return fun1;
    };
    p4 = prom<V +>{
      asNamespace = ldf asNamespace;
      p3 = prom<V +>{
        pkg = ld pkg;
        pkg1 = force? pkg;
        checkMissing(pkg1);
        return pkg1;
      };
      r4 = dyn asNamespace(p3);
      return r4;
    };
    r6 = dyn registerS3method[, , , envir](p, p1, p2, p4);
    check L1() else D1();
  D1():
    deopt 7 [r6];
  L1():
    popenv;
    return r6;
  }
}