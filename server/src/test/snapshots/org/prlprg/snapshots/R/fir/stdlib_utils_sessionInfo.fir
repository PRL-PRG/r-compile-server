fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner170925150;
    st sessionInfo = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner170925150(package) {
  (reg package:*) -+> V { var package:*, reg package_isMissing:L, reg package_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg r2:V, reg R_Version:cls, reg r3:V, reg l:*, reg c:L, reg r5:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r8:V, reg z:*, reg z1:V, reg c1:L, reg z3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r9:V, reg c2:L, reg dx5:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg r10:V, reg l3:*, reg c3:L, reg dx9:V, reg l5:*, reg dr6:V, reg dc3:L, reg dx11:V, reg dx13:V, reg r11:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg _Platform:*, reg _Platform1:V, reg c4:L, reg _Platform3:V, reg dr8:V, reg dc4:L, reg dx14:V, reg dx15:V, reg r14:V, reg nzchar:cls, reg r15:V, reg c5:L, reg paste:cls, reg z4:*, reg z5:V, reg c6:L, reg z7:V, reg dr10:V, reg dc5:L, reg dx16:V, reg dx17:V, reg r16:V, reg p:p(V +), reg _Platform4:*, reg _Platform5:V, reg c7:L, reg _Platform7:V, reg dr12:V, reg dc6:L, reg dx18:V, reg dx19:V, reg r18:V, reg p1:p(V +), reg r20:V, reg l6:*, reg c8:L, reg r22:V, reg l8:*, reg dr14:V, reg dc7:L, reg dx20:V, reg r24:V, reg dx21:V, reg r25:V, reg _Machine:*, reg _Machine1:V, reg c9:L, reg r28:R, reg _Machine3:V, reg dr16:V, reg dc8:L, reg dx22:V, reg r30:R, reg dx23:V, reg r31:V, reg r32:V, reg sp:*, reg sp1:V, reg r33:V, reg c10:L, reg paste1:cls, reg z8:*, reg z9:V, reg c11:L, reg z11:V, reg dr18:V, reg dc9:L, reg dx24:V, reg dx25:V, reg r34:V, reg p2:p(V +), reg sp2:*, reg sp3:V, reg p3:p(V +), reg r37:V, reg l9:*, reg c12:L, reg r39:V, reg l11:*, reg dr20:V, reg dc10:L, reg dx26:V, reg r41:V, reg dx27:V, reg r42:V, reg Sys_getlocale:cls, reg r44:V, reg l12:*, reg c13:L, reg r46:V, reg l14:*, reg dr22:V, reg dc11:L, reg dx28:V, reg dx29:V, reg r49:V, reg Sys_timezone:cls, reg r50:V, reg l15:*, reg c14:L, reg r52:V, reg l17:*, reg dr24:V, reg dc12:L, reg dx30:V, reg dx31:V, reg r55:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r56:V, reg r57:V, reg C_tzcode_type:*, reg C_tzcode_type1:V, reg vargs:dots, reg r58:V, reg l18:*, reg c15:L, reg r60:V, reg l20:*, reg dr26:V, reg dc13:L, reg dx32:V, reg dx33:V, reg r63:V, reg osVersion:*, reg osVersion1:V, reg l21:*, reg c16:L, reg osVersion3:V, reg l23:*, reg dr28:V, reg dc14:L, reg dx34:V, reg dx35:V, reg r64:V, reg RNGkind:cls, reg r65:V, reg l24:*, reg c17:L, reg r67:V, reg l26:*, reg dr30:V, reg dc15:L, reg dx36:V, reg dx37:V, reg r70:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r71:V, reg r72:V, reg package1:*, reg package2:V, reg c18:V, reg c19:L, reg grep:cls, reg search:cls, reg r73:V, reg p4:p(V +), reg r75:V, reg vapply:cls, reg package3:*, reg package4:V, reg p5:p(V +), reg r77:cls, reg p6:p(V +), reg r79:V, reg _rmpkg:cls, reg package5:*, reg package6:V, reg c20:L, reg package8:V, reg dr32:V, reg dc16:L, reg dx38:V, reg dx39:V, reg keep:*, reg keep1:V, reg __:cls, reg r80:V, reg p7:p(V +), reg r82:V, reg lapply:cls, reg package9:*, reg package10:V, reg p8:p(V +), reg packageDescription:*, reg packageDescription1:V, reg p9:p(V +), reg r86:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r87:V, reg r88:V, reg package11:*, reg package12:V, reg length:cls, reg r89:V, reg r90:V, reg c21:L, reg stop:cls, reg r91:V, reg sapply:cls, reg pkgDesc:*, reg pkgDesc1:V, reg p10:p(V +), reg r94:cls, reg p11:p(V +), reg r96:V, reg package13:*, reg package14:V, reg c22:L, reg package16:V, reg dr34:V, reg dc17:L, reg dx40:V, reg dx41:V, reg basePkgs:*, reg basePkgs1:V, reg __1:cls, reg r97:V, reg l27:*, reg c23:L, reg dx43:V, reg l29:*, reg dr36:V, reg dc18:L, reg dx45:V, reg dx47:V, reg r98:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r99:V, reg r100:V, reg basePkgs2:*, reg basePkgs3:V, reg r101:V, reg any:cls, reg r102:V, reg c24:L, reg pkgDesc2:*, reg pkgDesc3:V, reg c25:L, reg pkgDesc5:V, reg dr38:V, reg dc19:L, reg dx48:V, reg dx49:V, reg basePkgs4:*, reg basePkgs5:V, reg r103:V, reg __2:cls, reg r104:V, reg l30:*, reg c26:L, reg dx51:V, reg l32:*, reg dr40:V, reg dc20:L, reg dx53:V, reg dx55:V, reg r105:V, reg package17:*, reg package18:V, reg c27:L, reg package20:V, reg dr42:V, reg dc21:L, reg dx56:V, reg dx57:V, reg basePkgs6:*, reg basePkgs7:V, reg r106:V, reg __3:cls, reg r107:V, reg l33:*, reg c28:L, reg dx60:V, reg l36:*, reg dx61:V, reg l37:*, reg dr44:V, reg dc22:L, reg dx64:V, reg dx65:V, reg l39:*, reg dx66:V, reg dx67:V, reg r108:V, reg names__:cls, reg r109:V, reg c29:L, reg dx69:V, reg l41:*, reg dr46:V, reg dc23:L, reg dx71:V, reg dx72:V, reg dx73:V, reg r110:V, reg loadedNamespaces:cls, reg r111:V, reg loadedOnly:*, reg loadedOnly1:V, reg c30:L, reg loadedOnly3:V, reg dr48:V, reg dc24:L, reg dx75:V, reg dx76:V, reg _in_:cls, reg loadedOnly4:*, reg loadedOnly5:V, reg p12:p(V +), reg package21:*, reg package22:V, reg p13:p(V +), reg r114:V, reg r115:V, reg __4:cls, reg r116:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r117:V, reg r118:V, reg loadedOnly6:*, reg loadedOnly7:V, reg length1:cls, reg r119:V, reg c31:L, reg loadedOnly8:*, reg loadedOnly9:V, reg l42:*, reg names__1:cls, reg r120:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r121:V, reg r122:V, reg pkgDesc6:*, reg pkgDesc7:V, reg lapply1:cls, reg loadedOnly10:*, reg loadedOnly11:V, reg p14:p(V +), reg packageDescription2:*, reg packageDescription3:V, reg p15:p(V +), reg r125:V, reg c32:cls, reg r126:V, reg pkgDesc8:*, reg pkgDesc9:V, reg c33:L, reg pkgDesc11:V, reg dr50:V, reg dc25:L, reg dx77:V, reg dx78:V, reg loadedOnly12:*, reg loadedOnly13:V, reg __5:cls, reg r127:V, reg l43:*, reg c34:L, reg dx80:V, reg l45:*, reg dr52:V, reg dc26:L, reg dx82:V, reg dx83:V, reg dx84:V, reg r128:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r129:V, reg r130:V, reg options:cls, reg r131:V, reg as_character:cls, reg r132:V, reg l46:*, reg c35:L, reg r134:V, reg l48:*, reg dr54:V, reg dc27:L, reg dx86:V, reg dx87:V, reg r137:V, reg extSoftVersion:cls, reg r138:V, reg es:*, reg es1:V, reg c36:L, reg es3:V, reg dr56:V, reg dc28:L, reg dx88:V, reg dx89:V, reg __6:cls, reg r139:V, reg l49:*, reg c37:L, reg dx91:V, reg l51:*, reg dr58:V, reg dc29:L, reg dx93:V, reg dx95:V, reg r140:V, reg La_library:cls, reg r141:V, reg l52:*, reg c38:L, reg r143:V, reg l54:*, reg dr60:V, reg dc30:L, reg dx96:V, reg dx97:V, reg r146:V, reg La_version:cls, reg r147:V, reg l55:*, reg c39:L, reg r149:V, reg l57:*, reg dr62:V, reg dc31:L, reg dx98:V, reg dx99:V, reg r152:V, reg l10n_info:cls, reg r153:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r154:V, reg r155:V, reg l10n:*, reg l10n1:V, reg c40:L, reg l10n3:V, reg dr64:V, reg dc32:L, reg dx100:V, reg dx101:V, reg __7:cls, reg r156:V, reg c41:V, reg r157:V, reg c42:L, reg l10n4:*, reg l10n5:V, reg c43:L, reg l10n7:V, reg dr66:V, reg dc33:L, reg dx102:V, reg dx103:V, reg __8:cls, reg r158:V, reg l58:*, reg c44:L, reg dx105:V, reg l60:*, reg dr68:V, reg dc34:L, reg dx107:V, reg dx108:V, reg dx109:V, reg r159:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r160:V, reg r161:V, reg l10n8:*, reg l10n9:V, reg c45:L, reg l10n11:V, reg dr70:V, reg dc35:L, reg dx111:V, reg dx112:V, reg __9:cls, reg r162:V, reg c46:V, reg r163:V, reg c47:L, reg l10n12:*, reg l10n13:V, reg c48:L, reg l10n15:V, reg dr72:V, reg dc36:L, reg dx113:V, reg dx114:V, reg __10:cls, reg r164:V, reg l61:*, reg c49:L, reg dx116:V, reg l63:*, reg dr74:V, reg dc37:L, reg dx118:V, reg dx119:V, reg dx120:V, reg r165:V, reg l64:*, reg class__:cls, reg r166:V, reg z12:*, reg z13:V |
    mkenv;
    package_isMissing = missing.0(package);
    if package_isMissing then L0(NULL) else L0(package);
  L0(package_orDefault):
    st package = package_orDefault;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L38() else L39();
  L1(r1):
    st z = r1;
    R_Version = ldf `R.Version`;
    check L41() else D1();
  L38():
    list = ldf list in base;
    r2 = dyn list();
    check L40() else D0();
  L39():
    r = dyn base();
    goto L1(r);
  D0():
    deopt 3 [r2];
  D1():
    deopt 6 [];
  L40():
    goto L1(r2);
  L41():
    r3 = dyn R_Version();
    check L42() else D2();
  D2():
    deopt 7 [r3];
  L42():
    l = ld z;
    c = `is.object`(l);
    if c then L44() else L45(r3, l);
  L43(dx1):
    st z = dx1;
    z = ld z;
    check L47() else D3();
  L44():
    dr = tryDispatchBuiltin.0("$<-", l, r3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L46() else L45(r3, dr);
  L45(r5, l2):
    r8 = `$<-`(l2, <sym R.version>, r3);
    goto L43(r8);
  D3():
    deopt 11 [z];
  L46():
    dx = getTryDispatchBuiltinValue(dr);
    goto L43(dx);
  L47():
    z1 = force? z;
    checkMissing(z1);
    c1 = `is.object`(z1);
    if c1 then L49() else L50(z1);
  L48(dx3):
    c2 = `is.object`(dx3);
    if c2 then L53() else L54(dx3);
  L49():
    dr2 = tryDispatchBuiltin.1("$", z1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L51() else L50(dr2);
  L50(z3):
    r9 = `$`(z3, <sym R.version>);
    goto L48(r9);
  L51():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L48(dx2);
  L52(dx7):
    l3 = ld z;
    c3 = `is.object`(l3);
    if c3 then L57() else L58(dx7, l3);
  L53():
    dr4 = tryDispatchBuiltin.1("$", dx3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L55() else L54(dr4);
  L54(dx5):
    r10 = `$`(dx5, <sym platform>);
    goto L52(r10);
  L55():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L52(dx6);
  L56(dx13):
    st z = dx13;
    sym1 = ldf nzchar;
    base1 = ldf nzchar in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L60() else L61();
  L57():
    dr6 = tryDispatchBuiltin.0("$<-", l3, dx7);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L59() else L58(dx7, dr6);
  L58(dx9, l5):
    r11 = `$<-`(l5, <sym platform>, dx7);
    goto L56(r11);
  L2(r13):
    c5 = `as.logical`(r13);
    if c5 then L68() else L3();
  L59():
    dx11 = getTryDispatchBuiltinValue(dr6);
    goto L56(dx11);
  L60():
    _Platform = ld `.Platform`;
    check L62() else D4();
  L61():
    r12 = dyn base1(<lang `$`(.Platform, r_arch)>);
    goto L2(r12);
  D4():
    deopt 20 [_Platform];
  L3():
    goto L4();
  L4():
    _Machine = ld `.Machine`;
    check L76() else D8();
  L62():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c4 = `is.object`(_Platform1);
    if c4 then L64() else L65(_Platform1);
  L68():
    paste = ldf paste;
    check L69() else D6();
  D6():
    deopt 26 [];
  D8():
    deopt 38 [8.0, _Machine];
  L63(dx15):
    nzchar = ldf nzchar in base;
    r15 = dyn nzchar(dx15);
    check L67() else D5();
  L64():
    dr8 = tryDispatchBuiltin.1("$", _Platform1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L66() else L65(dr8);
  L65(_Platform3):
    r14 = `$`(_Platform3, <sym r_arch>);
    goto L63(r14);
  L69():
    p = prom<V +>{
      z4 = ld z;
      z5 = force? z4;
      checkMissing(z5);
      c6 = `is.object`(z5);
      if c6 then L1() else L2(z5);
    L0(dx17):
      return dx17;
    L1():
      dr10 = tryDispatchBuiltin.1("$", z5);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(z7):
      r16 = `$`(z7, <sym platform>);
      goto L0(r16);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx16);
    };
    p1 = prom<V +>{
      _Platform4 = ld `.Platform`;
      _Platform5 = force? _Platform4;
      checkMissing(_Platform5);
      c7 = `is.object`(_Platform5);
      if c7 then L1() else L2(_Platform5);
    L0(dx19):
      return dx19;
    L1():
      dr12 = tryDispatchBuiltin.1("$", _Platform5);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(_Platform7):
      r18 = `$`(_Platform7, <sym r_arch>);
      goto L0(r18);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx18);
    };
    r20 = dyn paste[, , sep](p, p1, "/");
    check L70() else D7();
  L76():
    _Machine1 = force? _Machine;
    checkMissing(_Machine1);
    c9 = `is.object`(_Machine1);
    if c9 then L78() else L79(8.0, _Machine1);
  D5():
    deopt 24 [r15];
  D7():
    deopt 31 [r20];
  L66():
    dx14 = getTryDispatchBuiltinValue(dr8);
    goto L63(dx14);
  L67():
    goto L2(r15);
  L70():
    l6 = ld z;
    c8 = `is.object`(l6);
    if c8 then L72() else L73(r20, l6);
  L77(r30, dx23):
    r32 = `*`(r30, dx23);
    st sp = r32;
    sp = ld sp;
    check L81() else D9();
  L78():
    dr16 = tryDispatchBuiltin.1("$", _Machine1);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L80() else L79(8.0, dr16);
  L79(r28, _Machine3):
    r31 = `$`(_Machine3, <sym sizeof.pointer>);
    goto L77(r28, r31);
  D9():
    deopt 43 [sp];
  L71(r24, dx21):
    st z = dx21;
    goto L4();
  L72():
    dr14 = tryDispatchBuiltin.0("$<-", l6, r20);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L74() else L73(r20, dr14);
  L73(r22, l8):
    r25 = `$<-`(l8, <sym platform>, r20);
    goto L71(r22, r25);
  L80():
    dx22 = getTryDispatchBuiltinValue(dr16);
    goto L77(8.0, dx22);
  L81():
    sp1 = force? sp;
    checkMissing(sp1);
    r33 = `!=`(sp1, 64.0);
    c10 = `as.logical`(r33);
    if c10 then L82() else L5();
  L5():
    goto L6();
  L6():
    Sys_getlocale = ldf `Sys.getlocale`;
    check L90() else D12();
  L74():
    dx20 = getTryDispatchBuiltinValue(dr14);
    goto L71(r20, dx20);
  L82():
    paste1 = ldf paste0;
    check L83() else D10();
  D10():
    deopt 48 [];
  D12():
    deopt 60 [];
  L83():
    p2 = prom<V +>{
      z8 = ld z;
      z9 = force? z8;
      checkMissing(z9);
      c11 = `is.object`(z9);
      if c11 then L1() else L2(z9);
    L0(dx25):
      return dx25;
    L1():
      dr18 = tryDispatchBuiltin.1("$", z9);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(z11):
      r34 = `$`(z11, <sym platform>);
      goto L0(r34);
    L3():
      dx24 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx24);
    };
    p3 = prom<V +>{
      sp2 = ld sp;
      sp3 = force? sp2;
      checkMissing(sp3);
      return sp3;
    };
    r37 = dyn paste1(p2, " (", p3, "-bit)");
    check L84() else D11();
  L90():
    r44 = dyn Sys_getlocale();
    check L91() else D13();
  D11():
    deopt 53 [r37];
  D13():
    deopt 61 [r44];
  L84():
    l9 = ld z;
    c12 = `is.object`(l9);
    if c12 then L86() else L87(r37, l9);
  L91():
    l12 = ld z;
    c13 = `is.object`(l12);
    if c13 then L93() else L94(r44, l12);
  L85(r41, dx27):
    st z = dx27;
    goto L6();
  L86():
    dr20 = tryDispatchBuiltin.0("$<-", l9, r37);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L88() else L87(r37, dr20);
  L87(r39, l11):
    r42 = `$<-`(l11, <sym platform>, r37);
    goto L85(r39, r42);
  L92(dx29):
    st z = dx29;
    Sys_timezone = ldf `Sys.timezone`;
    check L96() else D14();
  L93():
    dr22 = tryDispatchBuiltin.0("$<-", l12, r44);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L95() else L94(r44, dr22);
  L94(r46, l14):
    r49 = `$<-`(l14, <sym locale>, r44);
    goto L92(r49);
  D14():
    deopt 66 [];
  L88():
    dx26 = getTryDispatchBuiltinValue(dr20);
    goto L85(r37, dx26);
  L95():
    dx28 = getTryDispatchBuiltinValue(dr22);
    goto L92(dx28);
  L96():
    r50 = dyn Sys_timezone();
    check L97() else D15();
  D15():
    deopt 67 [r50];
  L97():
    l15 = ld z;
    c14 = `is.object`(l15);
    if c14 then L99() else L100(r50, l15);
  L98(dx31):
    st z = dx31;
    sym2 = ldf `.Call`;
    base2 = ldf `.Call` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L102() else L103();
  L99():
    dr24 = tryDispatchBuiltin.0("$<-", l15, r50);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L101() else L100(r50, dr24);
  L100(r52, l17):
    r55 = `$<-`(l17, <sym tzone>, r50);
    goto L98(r55);
  L7(r57):
    l18 = ld z;
    c15 = `is.object`(l18);
    if c15 then L106() else L107(r57, l18);
  L101():
    dx30 = getTryDispatchBuiltinValue(dr24);
    goto L98(dx30);
  L102():
    C_tzcode_type = ld C_tzcode_type;
    check L104() else D16();
  L103():
    r56 = dyn base2(<sym C_tzcode_type>);
    goto L7(r56);
  D16():
    deopt 72 [C_tzcode_type];
  L104():
    C_tzcode_type1 = force? C_tzcode_type;
    checkMissing(C_tzcode_type1);
    vargs = dots[];
    r58 = `.Call`(C_tzcode_type1, vargs, <missing>);
    goto L7(r58);
  L105(dx33):
    st z = dx33;
    osVersion = ld osVersion;
    check L109() else D17();
  L106():
    dr26 = tryDispatchBuiltin.0("$<-", l18, r57);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L108() else L107(r57, dr26);
  L107(r60, l20):
    r63 = `$<-`(l20, <sym tzcode_type>, r57);
    goto L105(r63);
  D17():
    deopt 78 [osVersion];
  L108():
    dx32 = getTryDispatchBuiltinValue(dr26);
    goto L105(dx32);
  L109():
    osVersion1 = force? osVersion;
    checkMissing(osVersion1);
    l21 = ld z;
    c16 = `is.object`(l21);
    if c16 then L111() else L112(osVersion1, l21);
  L110(dx35):
    st z = dx35;
    RNGkind = ldf RNGkind;
    check L114() else D18();
  L111():
    dr28 = tryDispatchBuiltin.0("$<-", l21, osVersion1);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L113() else L112(osVersion1, dr28);
  L112(osVersion3, l23):
    r64 = `$<-`(l23, <sym running>, osVersion1);
    goto L110(r64);
  D18():
    deopt 84 [];
  L113():
    dx34 = getTryDispatchBuiltinValue(dr28);
    goto L110(dx34);
  L114():
    r65 = dyn RNGkind();
    check L115() else D19();
  D19():
    deopt 85 [r65];
  L115():
    l24 = ld z;
    c17 = `is.object`(l24);
    if c17 then L117() else L118(r65, l24);
  L116(dx37):
    st z = dx37;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L120() else L121();
  L117():
    dr30 = tryDispatchBuiltin.0("$<-", l24, r65);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L119() else L118(r65, dr30);
  L118(r67, l26):
    r70 = `$<-`(l26, <sym RNGkind>, r65);
    goto L116(r70);
  L8(r72):
    c19 = `as.logical`(r72);
    if c19 then L123() else L9();
  L119():
    dx36 = getTryDispatchBuiltinValue(dr30);
    goto L116(dx36);
  L120():
    package1 = ld package;
    check L122() else D20();
  L121():
    r71 = dyn base3(<sym package>);
    goto L8(r71);
  D20():
    deopt 90 [package1];
  L9():
    goto L10();
  L10():
    lapply = ldf lapply;
    check L131() else D27();
  L122():
    package2 = force? package1;
    checkMissing(package2);
    c18 = `==`(package2, NULL);
    goto L8(c18);
  L123():
    grep = ldf grep;
    check L124() else D21();
  D21():
    deopt 94 [];
  D27():
    deopt 116 [];
  L124():
    p4 = prom<V +>{
      search = ldf search;
      r73 = dyn search();
      return r73;
    };
    r75 = dyn grep[, , value]("^package:", p4, TRUE);
    check L125() else D22();
  L131():
    p8 = prom<V +>{
      package9 = ld package;
      package10 = force? package9;
      checkMissing(package10);
      return package10;
    };
    p9 = prom<V +>{
      packageDescription = ld packageDescription;
      packageDescription1 = force? packageDescription;
      checkMissing(packageDescription1);
      return packageDescription1;
    };
    r86 = dyn lapply[, , encoding](p8, p9, NA_LGL);
    check L132() else D28();
  D22():
    deopt 99 [r75];
  D28():
    deopt 121 [r86];
  L125():
    st package = r75;
    vapply = ldf vapply;
    check L126() else D23();
  L132():
    st pkgDesc = r86;
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L133() else L134();
  D23():
    deopt 102 [];
  L11(r88):
    r90 = `==`(r88, 0.0);
    c21 = `as.logical`(r90);
    if c21 then L137() else L12();
  L126():
    p5 = prom<V +>{
      package3 = ld package;
      package4 = force? package3;
      checkMissing(package4);
      return package4;
    };
    p6 = prom<V +>{
      r77 = clos inner2501545716;
      return r77;
    };
    r79 = dyn vapply(p5, p6, NA_LGL);
    check L127() else D24();
  L133():
    package11 = ld package;
    check L135() else D29();
  L134():
    r87 = dyn base4(<sym package>);
    goto L11(r87);
  D24():
    deopt 106 [r79];
  D29():
    deopt 125 [package11];
  L12():
    goto L13();
  L13():
    sapply = ldf sapply;
    check L141() else D33();
  L127():
    st keep = r79;
    _rmpkg = ldf `.rmpkg`;
    check L128() else D25();
  L135():
    package12 = force? package11;
    checkMissing(package12);
    length = ldf length in base;
    r89 = dyn length(package12);
    check L136() else D30();
  L137():
    stop = ldf stop;
    check L138() else D31();
  D25():
    deopt 109 [];
  D30():
    deopt 128 [r89];
  D31():
    deopt 132 [];
  D33():
    deopt 138 [];
  L128():
    p7 = prom<V +>{
      package5 = ld package;
      package6 = force? package5;
      checkMissing(package6);
      c20 = `is.object`(package6);
      if c20 then L1() else L2(package6);
    L0(dx39):
      return dx39;
    L1():
      dr32 = tryDispatchBuiltin.1("[", package6);
      dc16 = getTryDispatchBuiltinDispatched(dr32);
      if dc16 then L3() else L2(dr32);
    L2(package8):
      keep = ld keep;
      keep1 = force? keep;
      __ = ldf `[` in base;
      r80 = dyn __(package8, keep1);
      goto L0(r80);
    L3():
      dx38 = getTryDispatchBuiltinValue(dr32);
      goto L0(dx38);
    };
    r82 = dyn _rmpkg(p7);
    check L129() else D26();
  L136():
    goto L11(r89);
  L138():
    r91 = dyn stop("no valid packages were specified");
    check L139() else D32();
  L141():
    p10 = prom<V +>{
      pkgDesc = ld pkgDesc;
      pkgDesc1 = force? pkgDesc;
      checkMissing(pkgDesc1);
      return pkgDesc1;
    };
    p11 = prom<V +>{
      r94 = clos inner2501545716;
      return r94;
    };
    r96 = dyn sapply(p10, p11);
    check L142() else D34();
  D26():
    deopt 111 [r82];
  D32():
    deopt 134 [r91];
  D34():
    deopt 141 [r96];
  L129():
    st package = r82;
    goto L10();
  L139():
    goto L13();
  L142():
    st basePkgs = r96;
    package13 = ld package;
    check L143() else D35();
  D35():
    deopt 143 [package13];
  L143():
    package14 = force? package13;
    checkMissing(package14);
    c22 = `is.object`(package14);
    if c22 then L144() else L145(package14);
  L14(dx41):
    l27 = ld z;
    c23 = `is.object`(l27);
    if c23 then L149() else L150(dx41, l27);
  L144():
    dr34 = tryDispatchBuiltin.1("[", package14);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L146() else L145(dr34);
  L145(package16):
    basePkgs = ld basePkgs;
    check L147() else D36();
  D36():
    deopt 145 [package16, basePkgs];
  L146():
    dx40 = getTryDispatchBuiltinValue(dr34);
    goto L14(dx40);
  L147():
    basePkgs1 = force? basePkgs;
    __1 = ldf `[` in base;
    r97 = dyn __1(package16, basePkgs1);
    goto L14(r97);
  L148(dx47):
    st z = dx47;
    sym5 = ldf any;
    base5 = ldf any in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L152() else L153();
  L149():
    dr36 = tryDispatchBuiltin.0("$<-", l27, dx41);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L151() else L150(dx41, dr36);
  L150(dx43, l29):
    r98 = `$<-`(l29, <sym basePkgs>, dx41);
    goto L148(r98);
  L15(r100):
    c24 = `as.logical`(r100);
    if c24 then L156() else L16();
  L151():
    dx45 = getTryDispatchBuiltinValue(dr36);
    goto L148(dx45);
  L152():
    basePkgs2 = ld basePkgs;
    check L154() else D37();
  L153():
    r99 = dyn base5(<lang `!`(basePkgs)>);
    goto L15(r99);
  D37():
    deopt 153 [basePkgs2];
  L16():
    goto L19();
  L19():
    loadedNamespaces = ldf loadedNamespaces;
    check L182() else D45();
  L154():
    basePkgs3 = force? basePkgs2;
    checkMissing(basePkgs3);
    r101 = `!`(basePkgs3);
    any = ldf any in base;
    r102 = dyn any(r101);
    check L155() else D38();
  L156():
    pkgDesc2 = ld pkgDesc;
    check L157() else D39();
  D38():
    deopt 157 [r102];
  D39():
    deopt 158 [pkgDesc2];
  D45():
    deopt 185 [];
  L155():
    goto L15(r102);
  L157():
    pkgDesc3 = force? pkgDesc2;
    checkMissing(pkgDesc3);
    c25 = `is.object`(pkgDesc3);
    if c25 then L158() else L159(pkgDesc3);
  L182():
    r111 = dyn loadedNamespaces();
    check L183() else D46();
  D46():
    deopt 186 [r111];
  L17(dx49):
    l30 = ld z;
    c26 = `is.object`(l30);
    if c26 then L163() else L164(dx49, l30);
  L158():
    dr38 = tryDispatchBuiltin.1("[", pkgDesc3);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L160() else L159(dr38);
  L159(pkgDesc5):
    basePkgs4 = ld basePkgs;
    check L161() else D40();
  L183():
    st loadedOnly = r111;
    loadedOnly = ld loadedOnly;
    check L184() else D47();
  D40():
    deopt 160 [pkgDesc5, basePkgs4];
  D47():
    deopt 188 [loadedOnly];
  L160():
    dx48 = getTryDispatchBuiltinValue(dr38);
    goto L17(dx48);
  L161():
    basePkgs5 = force? basePkgs4;
    checkMissing(basePkgs5);
    r103 = `!`(basePkgs5);
    __2 = ldf `[` in base;
    r104 = dyn __2(pkgDesc5, r103);
    goto L17(r104);
  L162(dx55):
    st z = dx55;
    package17 = ld package;
    check L166() else D41();
  L163():
    dr40 = tryDispatchBuiltin.0("$<-", l30, dx49);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L165() else L164(dx49, dr40);
  L164(dx51, l32):
    r105 = `$<-`(l32, <sym otherPkgs>, dx49);
    goto L162(r105);
  L184():
    loadedOnly1 = force? loadedOnly;
    checkMissing(loadedOnly1);
    c30 = `is.object`(loadedOnly1);
    if c30 then L185() else L186(loadedOnly1);
  D41():
    deopt 167 [package17];
  L20(dx76):
    st loadedOnly = dx76;
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L190() else L191();
  L165():
    dx53 = getTryDispatchBuiltinValue(dr40);
    goto L162(dx53);
  L166():
    package18 = force? package17;
    checkMissing(package18);
    c27 = `is.object`(package18);
    if c27 then L167() else L168(package18);
  L185():
    dr48 = tryDispatchBuiltin.1("[", loadedOnly1);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L187() else L186(dr48);
  L186(loadedOnly3):
    _in_ = ldf `%in%`;
    check L188() else D48();
  D48():
    deopt 191 [loadedOnly3];
  L18(dx57):
    l33 = ld z;
    c28 = `is.object`(l33);
    if c28 then L172() else L173(dx57, l33, dx57, l33);
  L21(r118):
    c31 = `as.logical`(r118);
    if c31 then L194() else L22();
  L167():
    dr42 = tryDispatchBuiltin.1("[", package18);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L169() else L168(dr42);
  L168(package20):
    basePkgs6 = ld basePkgs;
    check L170() else D42();
  L187():
    dx75 = getTryDispatchBuiltinValue(dr48);
    goto L20(dx75);
  L188():
    p12 = prom<V +>{
      loadedOnly4 = ld loadedOnly;
      loadedOnly5 = force? loadedOnly4;
      checkMissing(loadedOnly5);
      return loadedOnly5;
    };
    p13 = prom<V +>{
      package21 = ld package;
      package22 = force? package21;
      checkMissing(package22);
      return package22;
    };
    r114 = dyn _in_(p12, p13);
    check L189() else D49();
  L190():
    loadedOnly6 = ld loadedOnly;
    check L192() else D50();
  L191():
    r117 = dyn base6(<sym loadedOnly>);
    goto L21(r117);
  D42():
    deopt 169 [package20, basePkgs6];
  D49():
    deopt 194 [loadedOnly3, r114];
  D50():
    deopt 200 [loadedOnly6];
  L22():
    goto L25();
  L25():
    sym8 = ldf `as.character`;
    base8 = ldf `as.character` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L214() else L215();
  L169():
    dx56 = getTryDispatchBuiltinValue(dr42);
    goto L18(dx56);
  L170():
    basePkgs7 = force? basePkgs6;
    checkMissing(basePkgs7);
    r106 = `!`(basePkgs7);
    __3 = ldf `[` in base;
    r107 = dyn __3(package20, r106);
    goto L18(r107);
  L171(dx65, l39, dx66, dx67):
    names__ = ldf `names<-`;
    check L175() else D43();
  L172():
    dr44 = tryDispatchBuiltin.1("$", l33);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L174() else L173(dx57, l33, dx57, dr44);
  L173(dx60, l36, dx61, l37):
    r108 = `$`(l37, <sym otherPkgs>);
    goto L171(dx60, l36, dx61, r108);
  L189():
    r115 = `!`(r114);
    __4 = ldf `[` in base;
    r116 = dyn __4(loadedOnly3, r115);
    goto L20(r116);
  L192():
    loadedOnly7 = force? loadedOnly6;
    checkMissing(loadedOnly7);
    length1 = ldf length in base;
    r119 = dyn length1(loadedOnly7);
    check L193() else D51();
  L194():
    loadedOnly8 = ld loadedOnly;
    check L195() else D52();
  D43():
    deopt 177 [dx65, l39, dx67, dx66];
  D51():
    deopt 203 [r119];
  D52():
    deopt 204 [loadedOnly8];
  L26(r130):
    l46 = ld z;
    c35 = `is.object`(l46);
    if c35 then L220() else L221(r130, l46);
  L174():
    dx64 = getTryDispatchBuiltinValue(dr44);
    goto L171(dx57, l33, dx57, dx64);
  L175():
    r109 = dyn names__(dx67, NULL, dx66);
    check L176() else D44();
  L193():
    goto L21(r119);
  L195():
    loadedOnly9 = force? loadedOnly8;
    checkMissing(loadedOnly9);
    l42 = ld loadedOnly;
    names__1 = ldf `names<-`;
    check L196() else D53();
  L214():
    options = ldf options;
    check L216() else D61();
  L215():
    r129 = dyn base8(<lang options("matprod")>);
    goto L26(r129);
  D44():
    deopt 179 [dx65, l39, r109];
  D53():
    deopt 207 [loadedOnly9, l42, loadedOnly9];
  D61():
    deopt 238 [];
  L176():
    c29 = `is.object`(l39);
    if c29 then L178() else L179(dx65, l39);
  L196():
    r120 = dyn names__1(l42, NULL, loadedOnly9);
    check L197() else D54();
  L216():
    r131 = dyn options("matprod");
    check L217() else D62();
  L219(dx87):
    st z = dx87;
    extSoftVersion = ldf extSoftVersion;
    check L223() else D64();
  L220():
    dr54 = tryDispatchBuiltin.0("$<-", l46, r130);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L222() else L221(r130, dr54);
  L221(r134, l48):
    r137 = `$<-`(l48, <sym matprod>, r130);
    goto L219(r137);
  D54():
    deopt 209 [loadedOnly9, r120];
  D62():
    deopt 240 [r131];
  D64():
    deopt 247 [];
  L177(dx72, dx73):
    st z = dx73;
    goto L19();
  L178():
    dr46 = tryDispatchBuiltin.0("$<-", l39, r109);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L180() else L179(dx65, dr46);
  L179(dx69, l41):
    r110 = `$<-`(l41, <sym otherPkgs>, r109);
    goto L177(dx69, r110);
  L197():
    st loadedOnly = r120;
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L198() else L199();
  L217():
    as_character = ldf `as.character` in base;
    r132 = dyn as_character(r131);
    check L218() else D63();
  L222():
    dx86 = getTryDispatchBuiltinValue(dr54);
    goto L219(dx86);
  L223():
    r138 = dyn extSoftVersion();
    check L224() else D65();
  D63():
    deopt 242 [r132];
  D65():
    deopt 248 [r138];
  L23(r122):
    st pkgDesc = r122;
    pkgDesc8 = ld pkgDesc;
    check L204() else D59();
  L180():
    dx71 = getTryDispatchBuiltinValue(dr46);
    goto L177(dx65, dx71);
  L198():
    pkgDesc6 = ld pkgDesc;
    check L200() else D55();
  L199():
    r121 = dyn base7(<sym pkgDesc>, <lang lapply(loadedOnly, packageDescription, encoding=NA_LGL)>);
    goto L23(r121);
  L218():
    goto L26(r132);
  L224():
    st es = r138;
    es = ld es;
    check L225() else D66();
  D55():
    deopt 213 [pkgDesc6];
  D59():
    deopt 225 [pkgDesc8];
  D66():
    deopt 250 [es];
  L200():
    pkgDesc7 = force? pkgDesc6;
    checkMissing(pkgDesc7);
    lapply1 = ldf lapply;
    check L201() else D56();
  L204():
    pkgDesc9 = force? pkgDesc8;
    checkMissing(pkgDesc9);
    c33 = `is.object`(pkgDesc9);
    if c33 then L205() else L206(pkgDesc9);
  L225():
    es1 = force? es;
    checkMissing(es1);
    c36 = `is.object`(es1);
    if c36 then L226() else L227(es1);
  D56():
    deopt 216 [];
  L24(dx78):
    l43 = ld z;
    c34 = `is.object`(l43);
    if c34 then L210() else L211(dx78, l43);
  L27(dx89):
    l49 = ld z;
    c37 = `is.object`(l49);
    if c37 then L230() else L231(dx89, l49);
  L201():
    p14 = prom<V +>{
      loadedOnly10 = ld loadedOnly;
      loadedOnly11 = force? loadedOnly10;
      checkMissing(loadedOnly11);
      return loadedOnly11;
    };
    p15 = prom<V +>{
      packageDescription2 = ld packageDescription;
      packageDescription3 = force? packageDescription2;
      checkMissing(packageDescription3);
      return packageDescription3;
    };
    r125 = dyn lapply1[, , encoding](p14, p15, NA_LGL);
    check L202() else D57();
  L205():
    dr50 = tryDispatchBuiltin.1("[", pkgDesc9);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L207() else L206(dr50);
  L206(pkgDesc11):
    loadedOnly12 = ld loadedOnly;
    check L208() else D60();
  L226():
    dr56 = tryDispatchBuiltin.1("[[", es1);
    dc28 = getTryDispatchBuiltinDispatched(dr56);
    if dc28 then L228() else L227(dr56);
  L227(es3):
    __6 = ldf `[[` in base;
    r139 = dyn __6(es3, "BLAS");
    goto L27(r139);
  D57():
    deopt 221 [r125];
  D60():
    deopt 227 [pkgDesc11, loadedOnly12];
  L202():
    c32 = ldf c in base;
    r126 = dyn c32(pkgDesc7, r125);
    check L203() else D58();
  L207():
    dx77 = getTryDispatchBuiltinValue(dr50);
    goto L24(dx77);
  L208():
    loadedOnly13 = force? loadedOnly12;
    __5 = ldf `[` in base;
    r127 = dyn __5(pkgDesc11, loadedOnly13);
    goto L24(r127);
  L209(dx83, dx84):
    st z = dx84;
    goto L25();
  L210():
    dr52 = tryDispatchBuiltin.0("$<-", l43, dx78);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L212() else L211(dx78, dr52);
  L211(dx80, l45):
    r128 = `$<-`(l45, <sym loadedOnly>, dx78);
    goto L209(dx80, r128);
  L228():
    dx88 = getTryDispatchBuiltinValue(dr56);
    goto L27(dx88);
  L229(dx95):
    st z = dx95;
    La_library = ldf La_library;
    check L233() else D67();
  L230():
    dr58 = tryDispatchBuiltin.0("$<-", l49, dx89);
    dc29 = getTryDispatchBuiltinDispatched(dr58);
    if dc29 then L232() else L231(dx89, dr58);
  L231(dx91, l51):
    r140 = `$<-`(l51, <sym BLAS>, dx89);
    goto L229(r140);
  D58():
    deopt 223 [r126];
  D67():
    deopt 259 [];
  L203():
    goto L23(r126);
  L212():
    dx82 = getTryDispatchBuiltinValue(dr52);
    goto L209(dx78, dx82);
  L232():
    dx93 = getTryDispatchBuiltinValue(dr58);
    goto L229(dx93);
  L233():
    r141 = dyn La_library();
    check L234() else D68();
  D68():
    deopt 260 [r141];
  L234():
    l52 = ld z;
    c38 = `is.object`(l52);
    if c38 then L236() else L237(r141, l52);
  L235(dx97):
    st z = dx97;
    La_version = ldf La_version;
    check L239() else D69();
  L236():
    dr60 = tryDispatchBuiltin.0("$<-", l52, r141);
    dc30 = getTryDispatchBuiltinDispatched(dr60);
    if dc30 then L238() else L237(r141, dr60);
  L237(r143, l54):
    r146 = `$<-`(l54, <sym LAPACK>, r141);
    goto L235(r146);
  D69():
    deopt 265 [];
  L238():
    dx96 = getTryDispatchBuiltinValue(dr60);
    goto L235(dx96);
  L239():
    r147 = dyn La_version();
    check L240() else D70();
  D70():
    deopt 266 [r147];
  L240():
    l55 = ld z;
    c39 = `is.object`(l55);
    if c39 then L242() else L243(r147, l55);
  L241(dx99):
    st z = dx99;
    l10n_info = ldf l10n_info;
    check L245() else D71();
  L242():
    dr62 = tryDispatchBuiltin.0("$<-", l55, r147);
    dc31 = getTryDispatchBuiltinDispatched(dr62);
    if dc31 then L244() else L243(r147, dr62);
  L243(r149, l57):
    r152 = `$<-`(l57, <sym LA_version>, r147);
    goto L241(r152);
  D71():
    deopt 271 [];
  L244():
    dx98 = getTryDispatchBuiltinValue(dr62);
    goto L241(dx98);
  L245():
    r153 = dyn l10n_info();
    check L246() else D72();
  D72():
    deopt 272 [r153];
  L246():
    st l10n = r153;
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L247() else L248();
  L28(r155):
    r157 = `!`(r155);
    c42 = `as.logical`(r157);
    if c42 then L253() else L30();
  L247():
    l10n = ld l10n;
    check L249() else D73();
  L248():
    r154 = dyn base9(<lang `[[`(l10n, "system.codepage")>);
    goto L28(r154);
  D73():
    deopt 275 [l10n];
  L30():
    goto L32();
  L32():
    sym10 = ldf `is.null`;
    base10 = ldf `is.null` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L263() else L264();
  L249():
    l10n1 = force? l10n;
    checkMissing(l10n1);
    c40 = `is.object`(l10n1);
    if c40 then L250() else L251(l10n1);
  L253():
    l10n4 = ld l10n;
    check L254() else D74();
  D74():
    deopt 282 [l10n4];
  L29(dx101):
    c41 = `==`(dx101, NULL);
    goto L28(c41);
  L33(r161):
    r163 = `!`(r161);
    c47 = `as.logical`(r163);
    if c47 then L269() else L35();
  L250():
    dr64 = tryDispatchBuiltin.1("[[", l10n1);
    dc32 = getTryDispatchBuiltinDispatched(dr64);
    if dc32 then L252() else L251(dr64);
  L251(l10n3):
    __7 = ldf `[[` in base;
    r156 = dyn __7(l10n3, "system.codepage");
    goto L29(r156);
  L254():
    l10n5 = force? l10n4;
    checkMissing(l10n5);
    c43 = `is.object`(l10n5);
    if c43 then L255() else L256(l10n5);
  L263():
    l10n8 = ld l10n;
    check L265() else D75();
  L264():
    r160 = dyn base10(<lang `[[`(l10n, "codepage")>);
    goto L33(r160);
  D75():
    deopt 293 [l10n8];
  L31(dx103):
    l58 = ld z;
    c44 = `is.object`(l58);
    if c44 then L259() else L260(dx103, l58);
  L35():
    goto L37();
  L37():
    l64 = ld z;
    class__ = ldf `class<-`;
    check L279() else D77();
  L252():
    dx100 = getTryDispatchBuiltinValue(dr64);
    goto L29(dx100);
  L255():
    dr66 = tryDispatchBuiltin.1("[[", l10n5);
    dc33 = getTryDispatchBuiltinDispatched(dr66);
    if dc33 then L257() else L256(dr66);
  L256(l10n7):
    __8 = ldf `[[` in base;
    r158 = dyn __8(l10n7, "system.codepage");
    goto L31(r158);
  L265():
    l10n9 = force? l10n8;
    checkMissing(l10n9);
    c45 = `is.object`(l10n9);
    if c45 then L266() else L267(l10n9);
  L269():
    l10n12 = ld l10n;
    check L270() else D76();
  D76():
    deopt 300 [l10n12];
  D77():
    deopt 313 ["sessionInfo", l64, "sessionInfo"];
  L34(dx112):
    c46 = `==`(dx112, NULL);
    goto L33(c46);
  L257():
    dx102 = getTryDispatchBuiltinValue(dr66);
    goto L31(dx102);
  L258(dx108, dx109):
    st z = dx109;
    goto L32();
  L259():
    dr68 = tryDispatchBuiltin.0("$<-", l58, dx103);
    dc34 = getTryDispatchBuiltinDispatched(dr68);
    if dc34 then L261() else L260(dx103, dr68);
  L260(dx105, l60):
    r159 = `$<-`(l60, <sym system.codepage>, dx103);
    goto L258(dx105, r159);
  L266():
    dr70 = tryDispatchBuiltin.1("[[", l10n9);
    dc35 = getTryDispatchBuiltinDispatched(dr70);
    if dc35 then L268() else L267(dr70);
  L267(l10n11):
    __9 = ldf `[[` in base;
    r162 = dyn __9(l10n11, "codepage");
    goto L34(r162);
  L270():
    l10n13 = force? l10n12;
    checkMissing(l10n13);
    c48 = `is.object`(l10n13);
    if c48 then L271() else L272(l10n13);
  L279():
    r166 = dyn class__(l64, NULL, "sessionInfo");
    check L280() else D78();
  D78():
    deopt 315 ["sessionInfo", r166];
  L36(dx114):
    l61 = ld z;
    c49 = `is.object`(l61);
    if c49 then L275() else L276(dx114, l61);
  L261():
    dx107 = getTryDispatchBuiltinValue(dr68);
    goto L258(dx103, dx107);
  L268():
    dx111 = getTryDispatchBuiltinValue(dr70);
    goto L34(dx111);
  L271():
    dr72 = tryDispatchBuiltin.1("[[", l10n13);
    dc36 = getTryDispatchBuiltinDispatched(dr72);
    if dc36 then L273() else L272(dr72);
  L272(l10n15):
    __10 = ldf `[[` in base;
    r164 = dyn __10(l10n15, "codepage");
    goto L36(r164);
  L280():
    st z = r166;
    z12 = ld z;
    check L281() else D79();
  D79():
    deopt 317 [z12];
  L273():
    dx113 = getTryDispatchBuiltinValue(dr72);
    goto L36(dx113);
  L274(dx119, dx120):
    st z = dx120;
    goto L37();
  L275():
    dr74 = tryDispatchBuiltin.0("$<-", l61, dx114);
    dc37 = getTryDispatchBuiltinDispatched(dr74);
    if dc37 then L277() else L276(dx114, dr74);
  L276(dx116, l63):
    r165 = `$<-`(l63, <sym codepage>, dx114);
    goto L274(dx116, r165);
  L281():
    z13 = force? z12;
    checkMissing(z13);
    popenv;
    return z13;
  L277():
    dx118 = getTryDispatchBuiltinValue(dr74);
    goto L274(dx114, dx118);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg x1:*, reg x2:V, reg r:V, reg c:L, reg c1:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg c5:L, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg c8:L, reg r4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg c11:L, reg r6:V, reg x3:*, reg x4:V, reg as_environment:cls, reg r7:V, reg attr:cls, reg r8:V, reg c12:V, reg r9:V, reg c13:L, reg c14:V |
    mkenv;
    st x = x;
    x1 = ld x;
    check L4() else D0();
  D0():
    deopt 0 [x1];
  L4():
    x2 = force? x1;
    checkMissing(x2);
    r = `==`(x2, "package:base");
    c = `as.logical`(r);
    if c then L0(c) else L5();
  L0(c1):
    popenv;
    return c1;
  L5():
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L1(c5, r2):
    r9 = `!`(r2);
    c13 = `as.logical`(r9);
    c14 = `||`(c5, c13);
    goto L0(c14);
  L6():
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L7():
    r1 = dyn base(<lang attr(as.environment(x), "path")>);
    goto L1(c, r1);
  L2(c8, r4):
    c12 = `==`(r4, NULL);
    goto L1(c8, c12);
  L8():
    sym2 = ldf `as.environment`;
    base2 = ldf `as.environment` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L10() else L11();
  L9():
    r3 = dyn base1(<lang as.environment(x)>, "path");
    goto L2(c, r3);
  L3(c11, r6):
    attr = ldf attr in base;
    r8 = dyn attr(r6, "path");
    check L14() else D3();
  L10():
    x3 = ld x;
    check L12() else D1();
  L11():
    r5 = dyn base2(<sym x>);
    goto L3(c, r5);
  D1():
    deopt 9 [c, x3];
  D3():
    deopt 15 [c11, r8];
  L12():
    x4 = force? x3;
    checkMissing(x4);
    as_environment = ldf `as.environment` in base;
    r7 = dyn as_environment(x4);
    check L13() else D2();
  L14():
    goto L2(c11, r8);
  D2():
    deopt 12 [c, r7];
  L13():
    goto L3(c, r7);
  }
}