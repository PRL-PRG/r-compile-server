fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg splines:*, reg splines1:V, reg p:p(V +), reg r4:V, reg detach:cls, reg package:*, reg package1:V, reg splines2:*, reg splines3:V, reg r5:V, reg p1:p(V +), reg r7:V, reg library:cls, reg splines4:*, reg splines5:V, reg p2:p(V +), reg r9:V, reg stopifnot:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg tryCatch:cls, reg detach1:cls, reg pkg:*, reg pkg1:V, reg p3:p(V +), reg r13:V, reg p4:p(V +), reg r15:cls, reg p5:p(V +), reg r17:V, reg inherits:cls, reg r18:V, reg p6:p(V +), reg r20:V, reg detach2:cls, reg pkg2:*, reg pkg3:V, reg p7:p(V +), reg r22:V, reg library1:cls, reg splines6:*, reg splines7:V, reg p8:p(V +), reg r24:V, reg detach3:cls, reg r25:V, reg r26:cls, reg attach_and_detach:cls, reg women:*, reg women1:V, reg p9:p(V +), reg r28:V |
    mkenv;
    r = clos `inner-1022971408`;
    st detach = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0():
    detach = ldf detach;
    check L5() else D2();
  L1():
    require = ldf require;
    check L3() else D0();
  L2():
    r1 = dyn base(<sym splines>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L3():
    p = prom<V +>{
      splines = ld splines;
      splines1 = force? splines;
      checkMissing(splines1);
      return splines1;
    };
    r4 = dyn require(p);
    check L4() else D1();
  L5():
    p1 = prom<V +>{
      package = ld package;
      package1 = force? package;
      checkMissing(package1);
      splines2 = ld splines;
      splines3 = force? splines2;
      checkMissing(splines3);
      r5 = `:`(package1, splines3);
      return r5;
    };
    r7 = dyn detach(p1);
    check L6() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 11 [r7];
  L4():
    goto L0();
  L6():
    library = ldf library;
    check L7() else D4();
  D4():
    deopt 13 [];
  L7():
    p2 = prom<V +>{
      splines4 = ld splines;
      splines5 = force? splines4;
      checkMissing(splines5);
      return splines5;
    };
    r9 = dyn library(p2);
    check L8() else D5();
  D5():
    deopt 15 [r9];
  L8():
    st pkg = "package:splines";
    stopifnot = ldf stopifnot;
    check L9() else D6();
  D6():
    deopt 20 [];
  L9():
    p6 = prom<V +>{
      sym1 = ldf inherits;
      base1 = ldf inherits in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r11):
      return r11;
    L1():
      tryCatch = ldf tryCatch;
      p4 = prom<V +>{
        detach1 = ldf detach;
        p3 = prom<V +>{
          pkg = ld pkg;
          pkg1 = force? pkg;
          checkMissing(pkg1);
          return pkg1;
        };
        r13 = dyn detach1(p3);
        return r13;
      };
      p5 = prom<V +>{
        r15 = clos inner533430315;
        return r15;
      };
      r17 = dyn tryCatch[, error](p4, p5);
      inherits = ldf inherits in base;
      r18 = dyn inherits(r17, "error", FALSE);
      goto L0(r18);
    L2():
      r10 = dyn base1(<lang tryCatch(detach(pkg), error=function((.=), ., NULL))>, "error");
      goto L0(r10);
    };
    r20 = dyn stopifnot(p6);
    check L10() else D7();
  D7():
    deopt 22 [r20];
  L10():
    detach2 = ldf detach;
    check L11() else D8();
  D8():
    deopt 24 [];
  L11():
    p7 = prom<V +>{
      pkg2 = ld pkg;
      pkg3 = force? pkg2;
      checkMissing(pkg3);
      return pkg3;
    };
    r22 = dyn detach2[, `character.only`](p7, TRUE);
    check L12() else D9();
  D9():
    deopt 28 [r22];
  L12():
    library1 = ldf library;
    check L13() else D10();
  D10():
    deopt 30 [];
  L13():
    p8 = prom<V +>{
      splines6 = ld splines;
      splines7 = force? splines6;
      checkMissing(splines7);
      return splines7;
    };
    r24 = dyn library1(p8);
    check L14() else D11();
  D11():
    deopt 32 [r24];
  L14():
    detach3 = ldf detach;
    check L15() else D12();
  D12():
    deopt 34 [];
  L15():
    r25 = dyn detach3(2.0);
    check L16() else D13();
  D13():
    deopt 36 [r25];
  L16():
    r26 = clos inner642453750;
    st attach_and_detach = r26;
    attach_and_detach = ldf attach_and_detach;
    check L17() else D14();
  D14():
    deopt 41 [];
  L17():
    p9 = prom<V +>{
      women = ld women;
      women1 = force? women;
      checkMissing(women1);
      return women1;
    };
    r28 = dyn attach_and_detach[, pos](p9, 3.0);
    check L18() else D15();
  D15():
    deopt 45 [r28];
  L18():
    popenv;
    return r28;
  }
}
fun `inner-1022971408`(name, pos, unload, `character.only`, force) {
  (reg name:*, reg pos:*, reg unload:*, reg character_only:*, reg force:*) -+> V { var name:*, var pos:*, reg pos_isMissing:L, reg pos_orDefault:*, var unload:*, reg unload_isMissing:L, reg unload_orDefault:*, var `character.only`:*, reg character_only_isMissing:L, reg character_only_orDefault:*, var force:*, reg force_isMissing:L, reg force_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg r3:V, reg c:L, reg character_only1:*, reg character_only2:V, reg r4:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg substitute:cls, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg name1:*, reg name2:V, reg is_numeric:cls, reg r11:V, reg c2:L, reg name3:*, reg name4:V, reg name5:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg name6:*, reg name7:V, reg c3:L, reg r14:V, reg c4:L, reg deparse1:cls, reg name8:*, reg name9:V, reg p:p(V +), reg r16:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg name10:*, reg name11:V, reg search:cls, reg r19:V, reg match:cls, reg r20:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r21:V, reg r22:V, reg pos1:*, reg pos2:V, reg is_na:cls, reg r23:V, reg c5:L, reg stop:cls, reg r24:V, reg r25:V, reg search1:cls, reg r27:V, reg c6:L, reg r29:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg pos3:*, reg pos4:V, reg __:cls, reg r30:V, reg startsWith:cls, reg packageName:*, reg packageName1:V, reg p1:p(V +), reg r32:V, reg r33:V, reg c7:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r34:V, reg r35:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r36:V, reg r37:V, reg pos5:*, reg pos6:V, reg detach:cls, reg r38:V, reg invisible:cls, reg r39:V, reg _rmpkg:cls, reg packageName2:*, reg packageName3:V, reg p2:p(V +), reg r43:V, reg search2:cls, reg r44:V, reg c8:L, reg r46:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r47:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c9:L, reg x:V, reg startsWith1:cls, reg pkg:*, reg pkg1:V, reg p3:p(V +), reg r49:V, reg c10:L, reg i6:I, reg c12:V, reg exists:cls, reg pkg2:*, reg pkg3:V, reg p4:p(V +), reg r51:V, reg c13:L, reg c14:V, reg c16:L, reg i9:I, reg c18:V, reg _in_:cls, reg pkgname:*, reg pkgname1:V, reg p5:p(V +), reg get:cls, reg pkg4:*, reg pkg5:V, reg p6:p(V +), reg r54:V, reg p7:p(V +), reg r56:V, reg c19:L, reg c20:V, reg c22:L, reg force1:*, reg force2:V, reg c23:L, reg warning:cls, reg gettextf:cls, reg sQuote:cls, reg pkgname2:*, reg pkgname3:V, reg p8:p(V +), reg r58:V, reg p9:p(V +), reg sQuote1:cls, reg _rmpkg1:cls, reg pkg6:*, reg pkg7:V, reg p10:p(V +), reg r61:V, reg p11:p(V +), reg r63:V, reg p12:p(V +), reg r65:V, reg p13:p(V +), reg r67:V, reg i15:I, reg r68:V, reg stop1:cls, reg gettextf1:cls, reg sQuote2:cls, reg pkgname4:*, reg pkgname5:V, reg p14:p(V +), reg r70:V, reg p15:p(V +), reg sQuote3:cls, reg _rmpkg2:cls, reg pkg8:*, reg pkg9:V, reg p16:p(V +), reg r73:V, reg p17:p(V +), reg r75:V, reg p18:p(V +), reg r77:V, reg p19:p(V +), reg r79:V, reg i16:I, reg sym8:cls, reg base8:cls, reg guard8:L, reg r81:V, reg r82:V, reg pos7:*, reg pos8:V, reg as_environment:cls, reg r83:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r84:V, reg r85:V, reg env:*, reg env1:V, reg attr:cls, reg r86:V, reg getHook:cls, reg packageEvent:cls, reg pkgname6:*, reg pkgname7:V, reg p20:p(V +), reg r88:V, reg p21:p(V +), reg r90:V, reg rev:cls, reg hook:*, reg hook1:V, reg p22:p(V +), reg r92:V, reg s1:V, reg l1:I, reg i17:I, reg i18:I, reg i19:I, reg c24:L, reg x1:V, reg try:cls, reg fun:cls, reg pkgname8:*, reg pkgname9:V, reg p23:p(V +), reg libpath:*, reg libpath1:V, reg p24:p(V +), reg r95:V, reg p25:p(V +), reg r97:V, reg _getNamespace:cls, reg pkgname10:*, reg pkgname11:V, reg p26:p(V +), reg r99:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r100:V, reg r101:V, reg ns:*, reg ns1:V, reg c25:V, reg r102:V, reg c26:L, reg c28:V, reg exists1:cls, reg ns2:*, reg ns3:V, reg p27:p(V +), reg r104:V, reg c29:L, reg c30:V, reg c32:L, reg get1:cls, reg ns4:*, reg ns5:V, reg p28:p(V +), reg r106:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r107:V, reg r108:V, reg libpath2:*, reg libpath3:V, reg c33:V, reg r109:V, reg c34:L, reg tryCatch:cls, reg _onDetach:cls, reg libpath4:*, reg libpath5:V, reg p29:p(V +), reg r111:V, reg p30:p(V +), reg identity:*, reg identity1:V, reg p31:p(V +), reg r114:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r115:V, reg r116:V, reg res:*, reg res1:V, reg inherits:cls, reg r117:V, reg c35:L, reg warning1:cls, reg gettextf2:cls, reg pkgname12:*, reg pkgname13:V, reg p32:p(V +), reg deparse2:cls, reg conditionCall:cls, reg res2:*, reg res3:V, reg p33:p(V +), reg r120:V, reg p34:p(V +), reg r122:V, reg c36:L, reg r124:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r125:V, reg p35:p(V +), reg conditionMessage:cls, reg res4:*, reg res5:V, reg p36:p(V +), reg r128:V, reg p37:p(V +), reg r130:V, reg p38:p(V +), reg r132:V, reg r133:V, reg r134:V, reg exists2:cls, reg pos9:*, reg pos10:V, reg p39:p(V +), reg r137:V, reg c37:L, reg get2:cls, reg pos11:*, reg pos12:V, reg p40:p(V +), reg r139:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r140:V, reg r141:V, reg libpath6:*, reg libpath7:V, reg c38:V, reg r142:V, reg c39:L, reg tryCatch1:cls, reg _Last_lib:cls, reg libpath8:*, reg libpath9:V, reg p41:p(V +), reg r144:V, reg p42:p(V +), reg identity2:*, reg identity3:V, reg p43:p(V +), reg r147:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r148:V, reg r149:V, reg res6:*, reg res7:V, reg inherits1:cls, reg r150:V, reg c40:L, reg warning2:cls, reg gettextf3:cls, reg pkgname14:*, reg pkgname15:V, reg p44:p(V +), reg deparse3:cls, reg conditionCall1:cls, reg res8:*, reg res9:V, reg p45:p(V +), reg r153:V, reg p46:p(V +), reg r155:V, reg c41:L, reg r157:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r158:V, reg p47:p(V +), reg conditionMessage1:cls, reg res10:*, reg res11:V, reg p48:p(V +), reg r161:V, reg p49:p(V +), reg r163:V, reg p50:p(V +), reg r165:V, reg r166:V, reg r167:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r168:V, reg pos13:*, reg pos14:V, reg detach1:cls, reg r170:V, reg isNamespaceLoaded:cls, reg pkgname16:*, reg pkgname17:V, reg p51:p(V +), reg r172:V, reg c42:L, reg unload1:*, reg unload2:V, reg c43:L, reg tryCatch2:cls, reg unloadNamespace:cls, reg pkgname18:*, reg pkgname19:V, reg p52:p(V +), reg r174:V, reg p53:p(V +), reg r176:cls, reg p54:p(V +), reg r178:V, reg r179:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r181:V, reg r182:V, reg _isMethodsDispatchOn:cls, reg r183:V, reg c44:L, reg c46:V, reg ___:cls, reg r184:V, reg r185:cls, reg env2:*, reg env3:V, reg p55:p(V +), reg r187:V, reg c47:L, reg c48:V, reg c50:L, reg __4:cls, reg r188:V, reg r189:cls, reg env4:*, reg env5:V, reg p56:p(V +), reg r191:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r193:V, reg paste0:cls, reg libpath10:*, reg libpath11:V, reg p57:p(V +), reg pkgname20:*, reg pkgname21:V, reg p58:p(V +), reg r196:V, reg lazyLoadDBflush:cls, reg r197:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r198:V, reg r199:V, reg invisible1:cls, reg r200:V |
    mkenv;
    st name = name;
    pos_isMissing = missing.0(pos);
    if pos_isMissing then L0(2) else L0(pos);
  L0(pos_orDefault):
    st pos = pos_orDefault;
    unload_isMissing = missing.0(unload);
    if unload_isMissing then L1(FALSE) else L1(unload);
  L1(unload_orDefault):
    st unload = unload_orDefault;
    character_only_isMissing = missing.0(character_only);
    if character_only_isMissing then L2(FALSE) else L2(character_only);
  L2(character_only_orDefault):
    st `character.only` = character_only_orDefault;
    force_isMissing = missing.0(force);
    if force_isMissing then L3(FALSE) else L3(force);
  L3(force_orDefault):
    st force = force_orDefault;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L64() else L65();
  L4(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L66() else L5();
  L64():
    missing = ldf missing in base;
    r2 = dyn missing(<sym name>);
    goto L4(r2);
  L65():
    r = dyn base(<sym name>);
    goto L4(r);
  L5():
    goto L18();
  L18():
    search1 = ldf search;
    check L101() else D15();
  L66():
    character_only1 = ld `character.only`;
    check L67() else D0();
  D0():
    deopt 4 [character_only1];
  D15():
    deopt 60 [];
  L67():
    character_only2 = force? character_only1;
    checkMissing(character_only2);
    r4 = `!`(character_only2);
    c1 = `as.logical`(r4);
    if c1 then L68() else L6();
  L101():
    r27 = dyn search1();
    check L102() else D16();
  D16():
    deopt 61 [r27];
  L6():
    goto L8();
  L8():
    sym2 = ldf `is.numeric`;
    base2 = ldf `is.numeric` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L72() else L73();
  L68():
    sym1 = ldf substitute;
    base1 = ldf substitute in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L69() else L70();
  L102():
    c6 = `is.object`(r27);
    if c6 then L103() else L104(r27);
  L7(r6):
    st name = r6;
    goto L8();
  L9(r10):
    c2 = `as.logical`(r10);
    if c2 then L76() else L10();
  L19(dx1):
    st packageName = dx1;
    startsWith = ldf startsWith;
    check L107() else D18();
  L69():
    substitute = ldf substitute in base;
    r7 = dyn substitute(<sym name>);
    goto L7(r7);
  L70():
    r5 = dyn base1(<sym name>);
    goto L7(r5);
  L72():
    name1 = ld name;
    check L74() else D1();
  L73():
    r9 = dyn base2(<sym name>);
    goto L9(r9);
  L103():
    dr = tryDispatchBuiltin.1("[[", r27);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L105() else L104(dr);
  L104(r29):
    pos3 = ld pos;
    check L106() else D17();
  D1():
    deopt 15 [name1];
  D17():
    deopt 62 [r29, pos3];
  D18():
    deopt 67 [];
  L10():
    sym3 = ldf `is.character`;
    base3 = ldf `is.character` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L79() else L80();
  L11(name5):
    st pos = name5;
    sym5 = ldf `is.na`;
    base5 = ldf `is.na` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L92() else L93();
  L74():
    name2 = force? name1;
    checkMissing(name2);
    is_numeric = ldf `is.numeric` in base;
    r11 = dyn is_numeric(name2);
    check L75() else D2();
  L76():
    name3 = ld name;
    check L77() else D3();
  L105():
    dx = getTryDispatchBuiltinValue(dr);
    goto L19(dx);
  L106():
    pos4 = force? pos3;
    __ = ldf `[[` in base;
    r30 = dyn __(r29, pos4);
    goto L19(r30);
  L107():
    p1 = prom<V +>{
      packageName = ld packageName;
      packageName1 = force? packageName;
      checkMissing(packageName1);
      return packageName1;
    };
    r32 = dyn startsWith(p1, "package:");
    check L108() else D19();
  D2():
    deopt 18 [r11];
  D3():
    deopt 19 [name3];
  D19():
    deopt 70 [r32];
  L12(r13):
    r14 = `!`(r13);
    c4 = `as.logical`(r14);
    if c4 then L82() else L13();
  L15(r22):
    c5 = `as.logical`(r22);
    if c5 then L96() else L16();
  L75():
    goto L9(r11);
  L77():
    name4 = force? name3;
    checkMissing(name4);
    goto L11(name4);
  L79():
    name6 = ld name;
    check L81() else D4();
  L80():
    r12 = dyn base3(<sym name>);
    goto L12(r12);
  L92():
    pos1 = ld pos;
    check L94() else D11();
  L93():
    r21 = dyn base5(<sym pos>);
    goto L15(r21);
  L108():
    r33 = `!`(r32);
    c7 = `as.logical`(r33);
    if c7 then L109() else L20();
  D4():
    deopt 22 [name6];
  D11():
    deopt 47 [pos1];
  L13():
    goto L14();
  L14():
    sym4 = ldf match;
    base4 = ldf match in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L86() else L87();
  L16():
    goto L17(NULL);
  L17(r25):
    goto L18();
  L20():
    _rmpkg = ldf `.rmpkg`;
    check L119() else D23();
  L81():
    name7 = force? name6;
    checkMissing(name7);
    c3 = `is.character`(name7);
    goto L12(c3);
  L82():
    deparse1 = ldf deparse1;
    check L83() else D5();
  L94():
    pos2 = force? pos1;
    checkMissing(pos2);
    is_na = ldf `is.na` in base;
    r23 = dyn is_na(pos2);
    check L95() else D12();
  L96():
    stop = ldf stop;
    check L97() else D13();
  L109():
    sym6 = ldf invisible;
    base6 = ldf invisible in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L110() else L111();
  D5():
    deopt 27 [];
  D12():
    deopt 50 [r23];
  D13():
    deopt 52 [];
  D23():
    deopt 86 [];
  L21(r35):
    popenv;
    return r35;
  L83():
    p = prom<V +>{
      name8 = ld name;
      name9 = force? name8;
      checkMissing(name9);
      return name9;
    };
    r16 = dyn deparse1(p);
    check L84() else D6();
  L86():
    name10 = ld name;
    check L88() else D7();
  L87():
    r18 = dyn base4(<sym name>, <lang search()>);
    goto L11(r18);
  L95():
    goto L15(r23);
  L97():
    r24 = dyn stop("invalid 'name' argument");
    check L98() else D14();
  L110():
    sym7 = ldf `.Internal`;
    base7 = ldf `.Internal` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L112() else L113();
  L111():
    r34 = dyn base6(<lang .Internal(detach(pos))>);
    goto L21(r34);
  L119():
    p2 = prom<V +>{
      packageName2 = ld packageName;
      packageName3 = force? packageName2;
      checkMissing(packageName3);
      return packageName3;
    };
    r43 = dyn _rmpkg(p2);
    check L120() else D24();
  D6():
    deopt 29 [r16];
  D7():
    deopt 35 [name10];
  D14():
    deopt 54 [r24];
  D24():
    deopt 88 [r43];
  L22(r37):
    invisible = ldf invisible in base;
    r39 = dyn invisible(r37);
    check L116() else D22();
  L84():
    st name = r16;
    goto L14();
  L88():
    name11 = force? name10;
    checkMissing(name11);
    search = ldf search;
    check L89() else D8();
  L98():
    goto L17(r24);
  L112():
    pos5 = ld pos;
    check L114() else D20();
  L113():
    r36 = dyn base7(<lang detach(pos)>);
    goto L22(r36);
  L120():
    st pkgname = r43;
    search2 = ldf search;
    check L121() else D25();
  D8():
    deopt 38 [];
  D20():
    deopt 76 [pos5];
  D22():
    deopt 81 [r39];
  D25():
    deopt 91 [];
  L89():
    r19 = dyn search();
    check L90() else D9();
  L114():
    pos6 = force? pos5;
    checkMissing(pos6);
    detach = ldf detach in base;
    r38 = dyn detach(pos6);
    check L115() else D21();
  L116():
    goto L21(r39);
  L121():
    r44 = dyn search2();
    check L122() else D26();
  D9():
    deopt 39 [r19];
  D21():
    deopt 79 [r38];
  D26():
    deopt 92 [r44];
  L90():
    match = ldf match in base;
    r20 = dyn match(name11, r19, NA_INT, NULL);
    check L91() else D10();
  L115():
    goto L22(r38);
  L122():
    c8 = `is.object`(r44);
    if c8 then L123() else L124(r44);
  D10():
    deopt 43 [r20];
  L24(dx3):
    s = toForSeq(dx3);
    l = length(s);
    i = 0;
    goto L25(i);
  L91():
    goto L11(r20);
  L123():
    dr2 = tryDispatchBuiltin.1("[", r44);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L125() else L124(dr2);
  L124(r46):
    __1 = ldf `[` in base;
    r47 = dyn __1(r46, -1);
    goto L24(r47);
  L25(i1):
    i2 = `+`.1(i1, 1);
    c9 = `<`.1(l, i2);
    if c9 then L126() else L32();
  L125():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L24(dx2);
  L32():
    x = `[[`(s, i2, NULL, TRUE);
    st pkg = x;
    startsWith1 = ldf startsWith;
    check L127() else D27();
  L126():
    sym8 = ldf `as.environment`;
    base8 = ldf `as.environment` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L146() else L147();
  D27():
    deopt 97 [i2];
  L33(r82):
    st env = r82;
    sym9 = ldf attr;
    base9 = ldf attr in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L150() else L151();
  L127():
    p3 = prom<V +>{
      pkg = ld pkg;
      pkg1 = force? pkg;
      checkMissing(pkg1);
      return pkg1;
    };
    r49 = dyn startsWith1(p3, "package:");
    check L128() else D28();
  L146():
    pos7 = ld pos;
    check L148() else D38();
  L147():
    r81 = dyn base8(<sym pos>);
    goto L33(r81);
  D28():
    deopt 100 [i2, r49];
  D38():
    deopt 140 [pos7];
  L34(r85):
    st libpath = r85;
    getHook = ldf getHook;
    check L154() else D42();
  L128():
    c10 = `as.logical`(r49);
    if c10 then L129() else L26(i2, c10);
  L148():
    pos8 = force? pos7;
    checkMissing(pos8);
    as_environment = ldf `as.environment` in base;
    r83 = dyn as_environment(pos8);
    check L149() else D39();
  L150():
    env = ld env;
    check L152() else D40();
  L151():
    r84 = dyn base9(<sym env>, "path");
    goto L34(r84);
  D39():
    deopt 143 [r83];
  D40():
    deopt 147 [env];
  D42():
    deopt 154 [];
  L26(i6, c12):
    c16 = `as.logical`(c12);
    if c16 then L133() else L27(i6, c16);
  L129():
    exists = ldf exists;
    check L130() else D29();
  L149():
    goto L33(r83);
  L152():
    env1 = force? env;
    checkMissing(env1);
    attr = ldf attr in base;
    r86 = dyn attr(env1, "path");
    check L153() else D41();
  L154():
    p21 = prom<V +>{
      packageEvent = ldf packageEvent;
      p20 = prom<V +>{
        pkgname6 = ld pkgname;
        pkgname7 = force? pkgname6;
        checkMissing(pkgname7);
        return pkgname7;
      };
      r88 = dyn packageEvent(p20, "detach");
      return r88;
    };
    r90 = dyn getHook(p21);
    check L155() else D43();
  D29():
    deopt 102 [i2, c10];
  D41():
    deopt 151 [r86];
  D43():
    deopt 156 [r90];
  L27(i9, c18):
    c22 = `as.logical`(c18);
    if c22 then L137() else L28();
  L130():
    p4 = prom<V +>{
      pkg2 = ld pkg;
      pkg3 = force? pkg2;
      checkMissing(pkg3);
      return pkg3;
    };
    r51 = dyn exists[, , inherits](".Depends", p4, FALSE);
    check L131() else D30();
  L133():
    _in_ = ldf `%in%`;
    check L134() else D31();
  L153():
    goto L34(r86);
  L155():
    st hook = r90;
    rev = ldf rev;
    check L156() else D44();
  D30():
    deopt 107 [i2, c10, r51];
  D31():
    deopt 110 [i6, c16];
  D44():
    deopt 159 [];
  L28():
    goto L31(i9);
  L31(i16):
    goto L25(i16);
  L131():
    c13 = `as.logical`(r51);
    c14 = `&&`(c10, c13);
    goto L26(i2, c14);
  L134():
    p5 = prom<V +>{
      pkgname = ld pkgname;
      pkgname1 = force? pkgname;
      checkMissing(pkgname1);
      return pkgname1;
    };
    p7 = prom<V +>{
      get = ldf get;
      p6 = prom<V +>{
        pkg4 = ld pkg;
        pkg5 = force? pkg4;
        checkMissing(pkg5);
        return pkg5;
      };
      r54 = dyn get[, , inherits](".Depends", p6, FALSE);
      return r54;
    };
    r56 = dyn _in_(p5, p7);
    check L135() else D32();
  L137():
    force1 = ld force;
    check L138() else D33();
  L156():
    p22 = prom<V +>{
      hook = ld hook;
      hook1 = force? hook;
      checkMissing(hook1);
      return hook1;
    };
    r92 = dyn rev(p22);
    check L157() else D45();
  D32():
    deopt 113 [i6, c16, r56];
  D33():
    deopt 115 [i9, force1];
  D45():
    deopt 161 [r92];
  L135():
    c19 = `as.logical`(r56);
    c20 = `&&`(c16, c19);
    goto L27(i6, c20);
  L138():
    force2 = force? force1;
    checkMissing(force2);
    c23 = `as.logical`(force2);
    if c23 then L139() else L29();
  L157():
    s1 = toForSeq(r92);
    l1 = length(s1);
    i17 = 0;
    goto L35(i17);
  L29():
    stop1 = ldf stop;
    check L143() else D36();
  L30(i15, r68):
    goto L31(i15);
  L35(i18):
    i19 = `+`.1(i18, 1);
    c24 = `<`.1(l1, i19);
    if c24 then L158() else L36();
  L139():
    warning = ldf warning;
    check L140() else D34();
  D34():
    deopt 118 [i9];
  D36():
    deopt 126 [i9];
  L36():
    x1 = `[[`(s1, i19, NULL, TRUE);
    st fun = x1;
    try = ldf try;
    check L159() else D46();
  L140():
    p13 = prom<V +>{
      gettextf = ldf gettextf;
      p9 = prom<V +>{
        sQuote = ldf sQuote;
        p8 = prom<V +>{
          pkgname2 = ld pkgname;
          pkgname3 = force? pkgname2;
          checkMissing(pkgname3);
          return pkgname3;
        };
        r58 = dyn sQuote(p8);
        return r58;
      };
      p12 = prom<V +>{
        sQuote1 = ldf sQuote;
        p11 = prom<V +>{
          _rmpkg1 = ldf `.rmpkg`;
          p10 = prom<V +>{
            pkg6 = ld pkg;
            pkg7 = force? pkg6;
            checkMissing(pkg7);
            return pkg7;
          };
          r61 = dyn _rmpkg1(p10);
          return r61;
        };
        r63 = dyn sQuote1(p11);
        return r63;
      };
      r65 = dyn gettextf("package %s is required by %s, which may no longer work correctly", p9, p12);
      return r65;
    };
    r67 = dyn warning[, `call.`, domain](p13, FALSE, NA_LGL);
    check L141() else D35();
  L143():
    p19 = prom<V +>{
      gettextf1 = ldf gettextf;
      p15 = prom<V +>{
        sQuote2 = ldf sQuote;
        p14 = prom<V +>{
          pkgname4 = ld pkgname;
          pkgname5 = force? pkgname4;
          checkMissing(pkgname5);
          return pkgname5;
        };
        r70 = dyn sQuote2(p14);
        return r70;
      };
      p18 = prom<V +>{
        sQuote3 = ldf sQuote;
        p17 = prom<V +>{
          _rmpkg2 = ldf `.rmpkg`;
          p16 = prom<V +>{
            pkg8 = ld pkg;
            pkg9 = force? pkg8;
            checkMissing(pkg9);
            return pkg9;
          };
          r73 = dyn _rmpkg2(p16);
          return r73;
        };
        r75 = dyn sQuote3(p17);
        return r75;
      };
      r77 = dyn gettextf1("package %s is required by %s so will not be detached", p15, p18);
      return r77;
    };
    r79 = dyn stop1[, `call.`, domain](p19, FALSE, NA_LGL);
    check L144() else D37();
  L158():
    _getNamespace = ldf `.getNamespace`;
    check L161() else D48();
  D35():
    deopt 124 [i9, r67];
  D37():
    deopt 132 [i9, r79];
  D46():
    deopt 163 [i19];
  D48():
    deopt 170 [];
  L141():
    goto L30(i9, r67);
  L144():
    goto L30(i9, r79);
  L159():
    p25 = prom<V +>{
      fun = ldf fun;
      p23 = prom<V +>{
        pkgname8 = ld pkgname;
        pkgname9 = force? pkgname8;
        checkMissing(pkgname9);
        return pkgname9;
      };
      p24 = prom<V +>{
        libpath = ld libpath;
        libpath1 = force? libpath;
        checkMissing(libpath1);
        return libpath1;
      };
      r95 = dyn fun(p23, p24);
      return r95;
    };
    r97 = dyn try(p25);
    check L160() else D47();
  L161():
    p26 = prom<V +>{
      pkgname10 = ld pkgname;
      pkgname11 = force? pkgname10;
      checkMissing(pkgname11);
      return pkgname11;
    };
    r99 = dyn _getNamespace(p26);
    check L162() else D49();
  D47():
    deopt 165 [i19, r97];
  D49():
    deopt 172 [r99];
  L160():
    goto L35(i19);
  L162():
    st ns = r99;
    sym10 = ldf `is.null`;
    base10 = ldf `is.null` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L163() else L164();
  L37(r101):
    r102 = `!`(r101);
    c26 = `as.logical`(r102);
    if c26 then L166() else L38(c26);
  L163():
    ns = ld ns;
    check L165() else D50();
  L164():
    r100 = dyn base10(<sym ns>);
    goto L37(r100);
  D50():
    deopt 175 [ns];
  L38(c28):
    c32 = `as.logical`(c28);
    if c32 then L170() else L39();
  L165():
    ns1 = force? ns;
    checkMissing(ns1);
    c25 = `==`(ns1, NULL);
    goto L37(c25);
  L166():
    exists1 = ldf exists;
    check L167() else D51();
  D51():
    deopt 180 [c26];
  L39():
    exists2 = ldf exists;
    check L189() else D62();
  L46():
    sym15 = ldf `.Internal`;
    base15 = ldf `.Internal` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L210() else L211();
  L167():
    p27 = prom<V +>{
      ns2 = ld ns;
      ns3 = force? ns2;
      checkMissing(ns3);
      return ns3;
    };
    r104 = dyn exists1[, mode, where, inherits](".onDetach", "function", p27, FALSE);
    check L168() else D52();
  L170():
    get1 = ldf get;
    check L171() else D53();
  D52():
    deopt 188 [c26, r104];
  D53():
    deopt 191 [];
  D62():
    deopt 234 [];
  L54():
    isNamespaceLoaded = ldf isNamespaceLoaded;
    check L214() else D75();
  L168():
    c29 = `as.logical`(r104);
    c30 = `&&`(c26, c29);
    goto L38(c30);
  L171():
    p28 = prom<V +>{
      ns4 = ld ns;
      ns5 = force? ns4;
      checkMissing(ns5);
      return ns5;
    };
    r106 = dyn get1[, mode, pos, inherits](".onDetach", "function", p28, FALSE);
    check L172() else D54();
  L189():
    p39 = prom<V +>{
      pos9 = ld pos;
      pos10 = force? pos9;
      checkMissing(pos10);
      return pos10;
    };
    r137 = dyn exists2[, mode, where, inherits](".Last.lib", "function", p39, FALSE);
    check L190() else D63();
  L210():
    pos13 = ld pos;
    check L212() else D73();
  L211():
    r168 = dyn base15(<lang detach(pos)>);
    goto L54();
  D54():
    deopt 199 [r106];
  D63():
    deopt 242 [r137];
  D73():
    deopt 290 [pos13];
  D75():
    deopt 295 [];
  L172():
    st `.onDetach` = r106;
    sym11 = ldf `is.null`;
    base11 = ldf `is.null` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L173() else L174();
  L190():
    c37 = `as.logical`(r137);
    if c37 then L191() else L47();
  L212():
    pos14 = force? pos13;
    checkMissing(pos14);
    detach1 = ldf detach in base;
    r170 = dyn detach1(pos14);
    check L213() else D74();
  L214():
    p51 = prom<V +>{
      pkgname16 = ld pkgname;
      pkgname17 = force? pkgname16;
      checkMissing(pkgname17);
      return pkgname17;
    };
    r172 = dyn isNamespaceLoaded(p51);
    check L215() else D76();
  D74():
    deopt 293 [r170];
  D76():
    deopt 297 [r172];
  L40(r108):
    r109 = `!`(r108);
    c34 = `as.logical`(r109);
    if c34 then L176() else L41();
  L47():
    goto L46();
  L173():
    libpath2 = ld libpath;
    check L175() else D55();
  L174():
    r107 = dyn base11(<sym libpath>);
    goto L40(r107);
  L191():
    get2 = ldf get;
    check L192() else D64();
  L213():
    goto L54();
  L215():
    c42 = `as.logical`(r172);
    if c42 then L216() else L55();
  D55():
    deopt 202 [libpath2];
  D64():
    deopt 244 [];
  L41():
    goto L45(NULL);
  L45(r134):
    goto L46();
  L55():
    sym16 = ldf `.isMethodsDispatchOn`;
    base16 = ldf `.isMethodsDispatchOn` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L223() else L224();
  L58():
    sym18 = ldf invisible;
    base18 = ldf invisible in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L241() else L242();
  L175():
    libpath3 = force? libpath2;
    checkMissing(libpath3);
    c33 = `==`(libpath3, NULL);
    goto L40(c33);
  L176():
    tryCatch = ldf tryCatch;
    check L177() else D56();
  L192():
    p40 = prom<V +>{
      pos11 = ld pos;
      pos12 = force? pos11;
      checkMissing(pos12);
      return pos12;
    };
    r139 = dyn get2[, mode, pos, inherits](".Last.lib", "function", p40, FALSE);
    check L193() else D65();
  L216():
    unload1 = ld unload;
    check L217() else D77();
  D56():
    deopt 207 [];
  D65():
    deopt 252 [r139];
  D77():
    deopt 298 [unload1];
  L59(r182):
    c44 = `as.logical`(r182);
    if c44 then L226() else L60(c44);
  L63(r199):
    popenv;
    return r199;
  L177():
    p30 = prom<V +>{
      _onDetach = ldf `.onDetach`;
      p29 = prom<V +>{
        libpath4 = ld libpath;
        libpath5 = force? libpath4;
        checkMissing(libpath5);
        return libpath5;
      };
      r111 = dyn _onDetach(p29);
      return r111;
    };
    p31 = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    r114 = dyn tryCatch[, error](p30, p31);
    check L178() else D57();
  L193():
    st `.Last.lib` = r139;
    sym13 = ldf `is.null`;
    base13 = ldf `is.null` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L194() else L195();
  L217():
    unload2 = force? unload1;
    checkMissing(unload2);
    c43 = `as.logical`(unload2);
    if c43 then L218() else L56();
  L223():
    _isMethodsDispatchOn = ldf `.isMethodsDispatchOn` in base;
    r183 = dyn _isMethodsDispatchOn();
    check L225() else D80();
  L224():
    r181 = dyn base16();
    goto L59(r181);
  L241():
    invisible1 = ldf invisible in base;
    r200 = dyn invisible1();
    check L243() else D90();
  L242():
    r198 = dyn base18();
    goto L63(r198);
  D57():
    deopt 211 [r114];
  D80():
    deopt 311 [r183];
  D90():
    deopt 346 [r200];
  L48(r141):
    r142 = `!`(r141);
    c39 = `as.logical`(r142);
    if c39 then L197() else L49();
  L56():
    goto L57(NULL);
  L57(r179):
    goto L58();
  L60(c46):
    c50 = `as.logical`(c46);
    if c50 then L231() else L61();
  L178():
    st res = r114;
    sym12 = ldf inherits;
    base12 = ldf inherits in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L179() else L180();
  L194():
    libpath6 = ld libpath;
    check L196() else D66();
  L195():
    r140 = dyn base13(<sym libpath>);
    goto L48(r140);
  L218():
    tryCatch2 = ldf tryCatch;
    check L219() else D78();
  L225():
    goto L59(r183);
  L226():
    ___ = ldf `:::`;
    check L227() else D81();
  L243():
    goto L63(r200);
  D66():
    deopt 255 [libpath6];
  D78():
    deopt 301 [];
  D81():
    deopt 313 [c44];
  L42(r116):
    c35 = `as.logical`(r116);
    if c35 then L183() else L43();
  L49():
    goto L53(NULL);
  L53(r167):
    goto L46();
  L61():
    goto L62();
  L62():
    sym17 = ldf `.Internal`;
    base17 = ldf `.Internal` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L236() else L237();
  L179():
    res = ld res;
    check L181() else D58();
  L180():
    r115 = dyn base12(<sym res>, "error");
    goto L42(r115);
  L196():
    libpath7 = force? libpath6;
    checkMissing(libpath7);
    c38 = `==`(libpath7, NULL);
    goto L48(c38);
  L197():
    tryCatch1 = ldf tryCatch;
    check L198() else D67();
  L219():
    p53 = prom<V +>{
      unloadNamespace = ldf unloadNamespace;
      p52 = prom<V +>{
        pkgname18 = ld pkgname;
        pkgname19 = force? pkgname18;
        checkMissing(pkgname19);
        return pkgname19;
      };
      r174 = dyn unloadNamespace(p52);
      return r174;
    };
    p54 = prom<V +>{
      r176 = clos inner1560918050;
      return r176;
    };
    r178 = dyn tryCatch2[, error](p53, p54);
    check L220() else D79();
  L227():
    r184 = dyn ___("methods", ".hasS4MetaData");
    check L228() else D82();
  L231():
    __4 = ldf `::`;
    check L232() else D84();
  D58():
    deopt 215 [res];
  D67():
    deopt 260 [];
  D79():
    deopt 305 [r178];
  D82():
    deopt 316 [c44, r184];
  D84():
    deopt 322 [];
  L43():
    goto L44(NULL);
  L44(r133):
    goto L45(r133);
  L181():
    res1 = force? res;
    checkMissing(res1);
    inherits = ldf inherits in base;
    r117 = dyn inherits(res1, "error", FALSE);
    check L182() else D59();
  L183():
    warning1 = ldf warning;
    check L184() else D60();
  L198():
    p42 = prom<V +>{
      _Last_lib = ldf `.Last.lib`;
      p41 = prom<V +>{
        libpath8 = ld libpath;
        libpath9 = force? libpath8;
        checkMissing(libpath9);
        return libpath9;
      };
      r144 = dyn _Last_lib(p41);
      return r144;
    };
    p43 = prom<V +>{
      identity2 = ld identity;
      identity3 = force? identity2;
      checkMissing(identity3);
      return identity3;
    };
    r147 = dyn tryCatch1[, error](p42, p43);
    check L199() else D68();
  L220():
    goto L57(r178);
  L228():
    checkFun.0(r184);
    r185 = r184 as cls;
    p55 = prom<V +>{
      env2 = ld env;
      env3 = force? env2;
      checkMissing(env3);
      return env3;
    };
    r187 = dyn r185(p55);
    check L229() else D83();
  L232():
    r188 = dyn __4("methods", "cacheMetaData");
    check L233() else D85();
  L236():
    paste0 = ldf paste0;
    check L238() else D87();
  L237():
    r193 = dyn base17(<lang lazyLoadDBflush(paste0(libpath, "/R/", pkgname, ".rdb"))>);
    goto L58();
  D59():
    deopt 220 [r117];
  D60():
    deopt 222 [];
  D68():
    deopt 264 [r147];
  D83():
    deopt 319 [c44, r187];
  D85():
    deopt 325 [r188];
  D87():
    deopt 335 [];
  L182():
    goto L42(r117);
  L184():
    p38 = prom<V +>{
      gettextf2 = ldf gettextf;
      p32 = prom<V +>{
        pkgname12 = ld pkgname;
        pkgname13 = force? pkgname12;
        checkMissing(pkgname13);
        return pkgname13;
      };
      p35 = prom<V +>{
        deparse2 = ldf deparse;
        p34 = prom<V +>{
          conditionCall = ldf conditionCall;
          p33 = prom<V +>{
            res2 = ld res;
            res3 = force? res2;
            checkMissing(res3);
            return res3;
          };
          r120 = dyn conditionCall(p33);
          return r120;
        };
        r122 = dyn deparse2(p34);
        c36 = `is.object`(r122);
        if c36 then L1() else L2(r122);
      L0(dx5):
        return dx5;
      L1():
        dr4 = tryDispatchBuiltin.1("[", r122);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(r124):
        __2 = ldf `[` in base;
        r125 = dyn __2(r124, 1);
        goto L0(r125);
      L3():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      };
      p37 = prom<V +>{
        conditionMessage = ldf conditionMessage;
        p36 = prom<V +>{
          res4 = ld res;
          res5 = force? res4;
          checkMissing(res5);
          return res5;
        };
        r128 = dyn conditionMessage(p36);
        return r128;
      };
      r130 = dyn gettextf2("%s failed in %s() for '%s', details:\n  call: %s\n  error: %s", ".onDetach", "detach", p32, p35, p37);
      return r130;
    };
    r132 = dyn warning1[, `call.`, domain](p38, FALSE, NA_LGL);
    check L185() else D61();
  L199():
    st res = r147;
    sym14 = ldf inherits;
    base14 = ldf inherits in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L200() else L201();
  L229():
    c47 = `as.logical`(r187);
    c48 = `&&`(c44, c47);
    goto L60(c48);
  L233():
    checkFun.0(r188);
    r189 = r188 as cls;
    p56 = prom<V +>{
      env4 = ld env;
      env5 = force? env4;
      checkMissing(env5);
      return env5;
    };
    r191 = dyn r189(p56, FALSE);
    check L234() else D86();
  L238():
    p57 = prom<V +>{
      libpath10 = ld libpath;
      libpath11 = force? libpath10;
      checkMissing(libpath11);
      return libpath11;
    };
    p58 = prom<V +>{
      pkgname20 = ld pkgname;
      pkgname21 = force? pkgname20;
      checkMissing(pkgname21);
      return pkgname21;
    };
    r196 = dyn paste0(p57, "/R/", p58, ".rdb");
    check L239() else D88();
  D61():
    deopt 228 [r132];
  D86():
    deopt 329 [r191];
  D88():
    deopt 340 [r196];
  L50(r149):
    c40 = `as.logical`(r149);
    if c40 then L204() else L51();
  L185():
    goto L44(r132);
  L200():
    res6 = ld res;
    check L202() else D69();
  L201():
    r148 = dyn base14(<sym res>, "error");
    goto L50(r148);
  L234():
    goto L62();
  L239():
    lazyLoadDBflush = ldf lazyLoadDBflush in base;
    r197 = dyn lazyLoadDBflush(r196);
    check L240() else D89();
  D69():
    deopt 268 [res6];
  D89():
    deopt 342 [r197];
  L51():
    goto L52(NULL);
  L52(r166):
    goto L53(r166);
  L202():
    res7 = force? res6;
    checkMissing(res7);
    inherits1 = ldf inherits in base;
    r150 = dyn inherits1(res7, "error", FALSE);
    check L203() else D70();
  L204():
    warning2 = ldf warning;
    check L205() else D71();
  L240():
    goto L58();
  D70():
    deopt 273 [r150];
  D71():
    deopt 275 [];
  L203():
    goto L50(r150);
  L205():
    p50 = prom<V +>{
      gettextf3 = ldf gettextf;
      p44 = prom<V +>{
        pkgname14 = ld pkgname;
        pkgname15 = force? pkgname14;
        checkMissing(pkgname15);
        return pkgname15;
      };
      p47 = prom<V +>{
        deparse3 = ldf deparse;
        p46 = prom<V +>{
          conditionCall1 = ldf conditionCall;
          p45 = prom<V +>{
            res8 = ld res;
            res9 = force? res8;
            checkMissing(res9);
            return res9;
          };
          r153 = dyn conditionCall1(p45);
          return r153;
        };
        r155 = dyn deparse3(p46);
        c41 = `is.object`(r155);
        if c41 then L1() else L2(r155);
      L0(dx7):
        return dx7;
      L1():
        dr6 = tryDispatchBuiltin.1("[", r155);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L3() else L2(dr6);
      L2(r157):
        __3 = ldf `[` in base;
        r158 = dyn __3(r157, 1);
        goto L0(r158);
      L3():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx6);
      };
      p49 = prom<V +>{
        conditionMessage1 = ldf conditionMessage;
        p48 = prom<V +>{
          res10 = ld res;
          res11 = force? res10;
          checkMissing(res11);
          return res11;
        };
        r161 = dyn conditionMessage1(p48);
        return r161;
      };
      r163 = dyn gettextf3("%s failed in %s() for '%s', details:\n  call: %s\n  error: %s", ".Last.lib", "detach", p44, p47, p49);
      return r163;
    };
    r165 = dyn warning2[, `call.`, domain](p50, FALSE, NA_LGL);
    check L206() else D72();
  D72():
    deopt 281 [r165];
  L206():
    goto L52(r165);
  }
}
fun inner1560918050(e) {
  (reg e:*) -+> V { var e:*, reg warning:cls, reg gettextf:cls, reg sQuote:cls, reg pkgname:*, reg pkgname1:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg conditionMessage:cls, reg e1:*, reg e2:V, reg p3:p(V +), reg r6:V, reg p4:p(V +), reg r8:V |
    mkenv;
    st e = e;
    warning = ldf warning;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p2 = prom<V +>{
      gettextf = ldf gettextf;
      p1 = prom<V +>{
        sQuote = ldf sQuote;
        p = prom<V +>{
          pkgname = ld pkgname;
          pkgname1 = force? pkgname;
          checkMissing(pkgname1);
          return pkgname1;
        };
        r1 = dyn sQuote(p);
        return r1;
      };
      r3 = dyn gettextf("%s namespace cannot be unloaded:\n  ", p1);
      return r3;
    };
    p4 = prom<V +>{
      conditionMessage = ldf conditionMessage;
      p3 = prom<V +>{
        e1 = ld e;
        e2 = force? e1;
        checkMissing(e2);
        return e2;
      };
      r6 = dyn conditionMessage(p3);
      return r6;
    };
    r8 = dyn warning[, , `call.`, domain](p2, p4, FALSE, NA_LGL);
    check L1() else D1();
  D1():
    deopt 8 [r8];
  L1():
    popenv;
    return r8;
  }
}
fun inner533430315(`.`) {
  (reg __:*) -+> V { var `.`:*, reg __1:*, reg __2:V |
    mkenv;
    st `.` = __;
    __1 = ld `.`;
    check L0() else D0();
  D0():
    deopt 0 [__1];
  L0():
    __2 = force? __1;
    checkMissing(__2);
    popenv;
    return __2;
  }
}
fun inner642453750(db, pos) {
  (reg db:*, reg pos:*) -+> V { var db:*, var pos:*, reg pos_isMissing:L, reg pos_orDefault:*, reg deparse1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg substitute:cls, reg r2:V, reg p:p(V +), reg r4:V, reg attach:cls, reg db1:*, reg db2:V, reg p1:p(V +), reg pos1:*, reg pos2:V, reg p2:p(V +), reg name:*, reg name1:V, reg p3:p(V +), reg r8:V, reg print:cls, reg search:cls, reg r9:V, reg c:L, reg r11:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg pos3:*, reg pos4:V, reg __:cls, reg r12:V, reg p4:p(V +), reg r14:V, reg detach:cls, reg name2:*, reg name3:V, reg p5:p(V +), reg r16:V |
    mkenv;
    st db = db;
    pos_isMissing = missing.0(pos);
    if pos_isMissing then L0(2.0) else L0(pos);
  L0(pos_orDefault):
    st pos = pos_orDefault;
    deparse1 = ldf deparse1;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      sym = ldf substitute;
      base = ldf substitute in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      substitute = ldf substitute in base;
      r2 = dyn substitute(<sym db>);
      goto L0(r2);
    L2():
      r = dyn base(<sym db>);
      goto L0(r);
    };
    r4 = dyn deparse1(p);
    check L2() else D1();
  D1():
    deopt 3 [r4];
  L2():
    st name = r4;
    attach = ldf attach;
    check L3() else D2();
  D2():
    deopt 6 [];
  L3():
    p1 = prom<V +>{
      db1 = ld db;
      db2 = force? db1;
      checkMissing(db2);
      return db2;
    };
    p2 = prom<V +>{
      pos1 = ld pos;
      pos2 = force? pos1;
      checkMissing(pos2);
      return pos2;
    };
    p3 = prom<V +>{
      name = ld name;
      name1 = force? name;
      checkMissing(name1);
      return name1;
    };
    r8 = dyn attach[, pos, name](p1, p2, p3);
    check L4() else D3();
  D3():
    deopt 12 [r8];
  L4():
    print = ldf print;
    check L5() else D4();
  D4():
    deopt 14 [];
  L5():
    p4 = prom<V +>{
      search = ldf search;
      r9 = dyn search();
      c = `is.object`(r9);
      if c then L1() else L2(r9);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", r9);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(r11):
      pos3 = ld pos;
      pos4 = force? pos3;
      __ = ldf `[` in base;
      r12 = dyn __(r11, pos4);
      goto L0(r12);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r14 = dyn print(p4);
    check L6() else D5();
  D5():
    deopt 16 [r14];
  L6():
    detach = ldf detach;
    check L7() else D6();
  D6():
    deopt 18 [];
  L7():
    p5 = prom<V +>{
      name2 = ld name;
      name3 = force? name2;
      checkMissing(name3);
      return name3;
    };
    r16 = dyn detach[, `character.only`](p5, TRUE);
    check L8() else D7();
  D7():
    deopt 22 [r16];
  L8():
    popenv;
    return r16;
  }
}