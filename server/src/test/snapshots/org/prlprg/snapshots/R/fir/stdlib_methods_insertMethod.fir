fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2765822873;
    st insertMethod = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2765822873(mlist, signature, args, def, cacheOnly) {
  (reg mlist:*, reg signature:*, reg args:*, reg def:*, reg cacheOnly:*) -+> V { var mlist:*, var signature:*, var args:*, var def:*, var cacheOnly:*, reg cacheOnly_isMissing:L, reg cacheOnly_orDefault:*, reg _MlistDefunct:cls, reg r:V, reg _noMlists:cls, reg r1:V, reg c:L, reg c2:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg c5:L, reg r3:V, reg unique:cls, reg signature1:*, reg signature2:V, reg p:p(V +), reg r5:V, reg identical:cls, reg r6:V, reg r7:V, reg c6:L, reg c7:V, reg c9:L, reg mlist1:*, reg mlist2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg args1:*, reg args2:V, reg c10:L, reg args4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r12:V, reg identical1:cls, reg r13:V, reg c11:L, reg c13:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg c16:L, reg r15:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg c19:L, reg r17:V, reg signature3:*, reg signature4:V, reg names:cls, reg r18:V, reg identical2:cls, reg r19:V, reg r20:V, reg c20:L, reg c21:V, reg c23:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg r22:V, reg signature5:*, reg signature6:V, reg c24:L, reg signature8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r23:V, reg identical3:cls, reg r24:V, reg c25:L, reg stop:cls, reg gettextf:cls, reg dQuote:cls, reg signature9:*, reg signature10:V, reg c26:L, reg signature12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r25:V, reg p1:p(V +), reg r27:V, reg p2:p(V +), reg r29:V, reg p3:p(V +), reg r31:V, reg args5:*, reg args6:V, reg c27:L, reg args8:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r33:V, reg signature13:*, reg signature14:V, reg c28:L, reg signature16:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __4:cls, reg r34:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r35:V, reg r36:V, reg signature17:*, reg signature18:V, reg length:cls, reg r37:V, reg r38:V, reg c29:L, reg mlist3:*, reg mlist4:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r42:V, reg r43:V, reg signature19:*, reg signature20:V, reg length1:cls, reg r44:V, reg r45:V, reg c30:L, reg stop1:cls, reg r46:V, reg is:cls, reg mlist5:*, reg mlist6:V, reg p4:p(V +), reg r49:V, reg r50:V, reg c31:L, reg stop2:cls, reg gettextf1:cls, reg dQuote1:cls, reg _class1:cls, reg mlist7:*, reg mlist8:V, reg p5:p(V +), reg r52:V, reg p6:p(V +), reg r54:V, reg p7:p(V +), reg r56:V, reg p8:p(V +), reg r58:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r60:V, reg r61:V, reg args9:*, reg args10:V, reg length2:cls, reg r62:V, reg r63:V, reg c32:L, reg c34:V, reg cacheOnly1:*, reg cacheOnly2:V, reg r64:V, reg c35:L, reg c36:V, reg c38:L, reg balanceMethodsList:cls, reg mlist9:*, reg mlist10:V, reg p9:p(V +), reg args11:*, reg args12:V, reg p10:p(V +), reg r67:V, reg signature21:*, reg signature22:V, reg c39:L, reg signature24:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __5:cls, reg r69:V, reg cacheOnly3:*, reg cacheOnly4:V, reg c40:L, reg __6:cls, reg r70:V, reg r71:V, reg __7:cls, reg r72:V, reg methods:*, reg methods1:V, reg c41:L, reg methods3:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg Class:*, reg Class1:V, reg __8:cls, reg r73:V, reg is1:cls, reg current:*, reg current1:V, reg p11:p(V +), reg r75:V, reg c42:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r76:V, reg r77:V, reg __9:cls, reg r78:V, reg as_character:cls, reg r79:V, reg args13:*, reg args14:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r80:V, reg r81:V, reg signature25:*, reg signature26:V, reg length3:cls, reg r82:V, reg n:*, reg n1:V, reg l:*, reg length__:cls, reg r83:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r84:V, reg r85:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r86:V, reg r87:V, reg nextArg:*, reg nextArg1:V, reg sigArgs:*, reg sigArgs1:V, reg match:cls, reg r88:V, reg is_na:cls, reg r89:V, reg c43:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r90:V, reg r91:V, reg nextArg2:*, reg nextArg3:V, reg args15:*, reg args16:V, reg match1:cls, reg r92:V, reg n2:*, reg n3:V, reg r93:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r94:V, reg r95:V, reg n4:*, reg n5:V, reg is_na1:cls, reg r96:V, reg c44:L, reg sym14:cls, reg base14:cls, reg guard14:L, reg r97:V, reg r98:V, reg args17:*, reg args18:V, reg nextArg4:*, reg nextArg5:V, reg c45:cls, reg r99:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r101:V, reg r102:V, reg signature27:*, reg signature28:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r103:V, reg r104:V, reg rep:cls, reg r105:V, reg c46:cls, reg r106:V, reg r107:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r109:V, reg r110:V, reg signature29:*, reg signature30:V, reg length4:cls, reg r111:V, reg r112:V, reg c47:L, reg sym18:cls, reg base18:cls, reg guard18:L, reg r113:V, reg r114:V, reg current2:*, reg current3:V, reg c48:V, reg c49:L, reg sym19:cls, reg base19:cls, reg guard19:L, reg r115:V, reg r116:V, reg def1:*, reg def2:V, reg c50:V, reg r117:V, reg c51:L, reg def3:*, reg def4:V, reg l1:*, reg c52:L, reg def6:V, reg l3:*, reg dr14:V, reg dc7:L, reg dx14:V, reg def8:V, reg dx15:V, reg Class2:*, reg Class3:V, reg ____:cls, reg r118:V, reg def9:V, reg def10:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r119:V, reg r120:V, reg Class4:*, reg Class5:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r121:V, reg r122:V, reg methods4:*, reg methods5:V, reg names1:cls, reg r123:V, reg match2:cls, reg r124:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r125:V, reg r126:V, reg def11:*, reg def12:V, reg c53:V, reg c54:L, reg methods6:*, reg methods7:V, reg c55:L, reg methods9:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg which:*, reg which1:V, reg r127:V, reg __10:cls, reg r128:V, reg def13:*, reg def14:V, reg l4:*, reg c56:L, reg def16:V, reg l6:*, reg dr18:V, reg dc9:L, reg dx18:V, reg def18:V, reg dx19:V, reg which2:*, reg which3:V, reg ____1:cls, reg r129:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r130:V, reg r131:V, reg current4:*, reg current5:V, reg c57:V, reg c58:L, reg new:cls, reg as_name:cls, reg args19:*, reg args20:V, reg c59:L, reg args22:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg __11:cls, reg r132:V, reg p12:p(V +), reg r134:V, reg p13:p(V +), reg r136:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r138:V, reg r139:V, reg current6:*, reg current7:V, reg is_function:cls, reg r140:V, reg c60:L, reg new1:cls, reg as_name1:cls, reg args23:*, reg args24:V, reg c61:L, reg args26:V, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg __12:cls, reg r141:V, reg p14:p(V +), reg r143:V, reg p15:p(V +), reg sym25:cls, reg base25:cls, reg guard25:L, reg r145:V, reg r146:V, reg current8:*, reg current9:V, reg list:cls, reg r147:V, reg p16:p(V +), reg r149:V, reg Recall:cls, reg current10:*, reg current11:V, reg p17:p(V +), reg signature31:*, reg signature32:V, reg c62:L, reg signature34:V, reg dr24:V, reg dc12:L, reg dx24:V, reg dx25:V, reg __13:cls, reg r151:V, reg p18:p(V +), reg args27:*, reg args28:V, reg c63:L, reg args30:V, reg dr26:V, reg dc13:L, reg dx26:V, reg dx27:V, reg __14:cls, reg r153:V, reg p19:p(V +), reg def20:*, reg def21:V, reg p20:p(V +), reg cacheOnly5:*, reg cacheOnly6:V, reg p21:p(V +), reg r157:V, reg l7:*, reg c64:L, reg r159:V, reg l9:*, reg dr28:V, reg dc14:L, reg dx28:V, reg r161:V, reg dx29:V, reg Class6:*, reg Class7:V, reg ____2:cls, reg r162:V, reg methods10:*, reg methods11:V, reg l10:*, reg ___:cls, reg r163:V, reg cacheOnly7:*, reg cacheOnly8:V, reg r164:V, reg c65:L, reg methods12:*, reg methods13:V, reg l11:*, reg ___1:cls, reg r165:V, reg mlist11:*, reg mlist12:V |
    mkenv;
    st mlist = mlist;
    st signature = signature;
    st args = args;
    st def = def;
    cacheOnly_isMissing = missing.0(cacheOnly);
    if cacheOnly_isMissing then L0(FALSE) else L0(cacheOnly);
  L0(cacheOnly_orDefault):
    st cacheOnly = cacheOnly_orDefault;
    _MlistDefunct = ldf `.MlistDefunct`;
    check L73() else D0();
  D0():
    deopt 1 [];
  L73():
    r = dyn _MlistDefunct("insertMethod()");
    check L74() else D1();
  D1():
    deopt 3 [r];
  L74():
    _noMlists = ldf `.noMlists`;
    check L75() else D2();
  D2():
    deopt 5 [];
  L75():
    r1 = dyn _noMlists();
    check L76() else D3();
  D3():
    deopt 6 [r1];
  L76():
    c = `as.logical`(r1);
    if c then L77() else L1(c);
  L1(c2):
    c9 = `as.logical`(c2);
    if c9 then L84() else L3();
  L77():
    sym = ldf identical;
    base = ldf identical in base;
    guard = `==`.4(sym, base);
    if guard then L78() else L79();
  L2(c5, r3):
    r7 = `!`(r3);
    c6 = `as.logical`(r7);
    c7 = `&&`(c5, c6);
    goto L1(c7);
  L3():
    sym1 = ldf identical;
    base1 = ldf identical in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L88() else L89();
  L78():
    unique = ldf unique;
    check L80() else D4();
  L79():
    r2 = dyn base(<lang unique(signature)>, "ANY");
    goto L2(c, r2);
  L84():
    mlist1 = ld mlist;
    check L85() else D7();
  D4():
    deopt 10 [c];
  D7():
    deopt 25 [mlist1];
  L5(r11):
    c11 = `as.logical`(r11);
    if c11 then L95() else L7(c11);
  L80():
    p = prom<V +>{
      signature1 = ld signature;
      signature2 = force? signature1;
      checkMissing(signature2);
      return signature2;
    };
    r5 = dyn unique(p);
    check L81() else D5();
  L85():
    mlist2 = force? mlist1;
    checkMissing(mlist2);
    popenv;
    return mlist2;
  L88():
    args1 = ld args;
    check L90() else D8();
  L89():
    r10 = dyn base1(<lang `[`(args, 1)>, "...");
    goto L5(r10);
  D5():
    deopt 12 [c, r5];
  D8():
    deopt 32 [args1];
  L7(c13):
    c23 = `as.logical`(c13);
    if c23 then L104() else L10();
  L81():
    identical = ldf identical in base;
    r6 = dyn identical(r5, "ANY", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L82() else D6();
  L90():
    args2 = force? args1;
    checkMissing(args2);
    c10 = `is.object`(args2);
    if c10 then L91() else L92(args2);
  L95():
    sym2 = ldf identical;
    base2 = ldf identical in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L96() else L97();
  D6():
    deopt 22 [c, r6];
  L6(dx1):
    identical1 = ldf identical in base;
    r13 = dyn identical1(dx1, "...", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L94() else D9();
  L8(c16, r15):
    r20 = `!`(r15);
    c20 = `as.logical`(r20);
    c21 = `&&`(c16, c20);
    goto L7(c21);
  L10():
    goto L20();
  L20():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L133() else L134();
  L82():
    goto L2(c, r6);
  L91():
    dr = tryDispatchBuiltin.1("[", args2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L93() else L92(dr);
  L92(args4):
    __ = ldf `[` in base;
    r12 = dyn __(args4, 1);
    goto L6(r12);
  L96():
    sym3 = ldf names;
    base3 = ldf names in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L98() else L99();
  L97():
    r14 = dyn base2(<lang names(signature)>, "...");
    goto L8(c11, r14);
  L104():
    sym4 = ldf identical;
    base4 = ldf identical in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L105() else L106();
  D9():
    deopt 46 [r13];
  L9(c19, r17):
    identical2 = ldf identical in base;
    r19 = dyn identical2(r17, "...", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L102() else D12();
  L11(r22):
    c25 = `as.logical`(r22);
    if c25 then L112() else L13();
  L21(r43):
    r45 = `==`(r43, 0);
    c30 = `as.logical`(r45);
    if c30 then L137() else L22();
  L93():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L94():
    goto L5(r13);
  L98():
    signature3 = ld signature;
    check L100() else D10();
  L99():
    r16 = dyn base3(<sym signature>);
    goto L9(c11, r16);
  L105():
    signature5 = ld signature;
    check L107() else D13();
  L106():
    r21 = dyn base4(<lang `[[`(signature, 1)>, "ANY");
    goto L11(r21);
  L133():
    signature19 = ld signature;
    check L135() else D22();
  L134():
    r42 = dyn base6(<sym signature>);
    goto L21(r42);
  D10():
    deopt 51 [c11, signature3];
  D12():
    deopt 64 [c19, r19];
  D13():
    deopt 69 [signature5];
  D22():
    deopt 121 [signature19];
  L13():
    goto L14();
  L14():
    args5 = ld args;
    check L116() else D17();
  L22():
    goto L23();
  L23():
    is = ldf is;
    check L141() else D26();
  L100():
    signature4 = force? signature3;
    checkMissing(signature4);
    names = ldf names in base;
    r18 = dyn names(signature4);
    check L101() else D11();
  L102():
    goto L8(c19, r19);
  L107():
    signature6 = force? signature5;
    checkMissing(signature6);
    c24 = `is.object`(signature6);
    if c24 then L108() else L109(signature6);
  L112():
    stop = ldf stop;
    check L113() else D15();
  L135():
    signature20 = force? signature19;
    checkMissing(signature20);
    length1 = ldf length in base;
    r44 = dyn length1(signature20);
    check L136() else D23();
  L137():
    stop1 = ldf stop;
    check L138() else D24();
  D11():
    deopt 54 [c11, r18];
  D15():
    deopt 85 [];
  D17():
    deopt 92 [args5];
  D23():
    deopt 124 [r44];
  D24():
    deopt 128 [];
  D26():
    deopt 134 [];
  L12(dx3):
    identical3 = ldf identical in base;
    r24 = dyn identical3(dx3, "ANY", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L111() else D14();
  L101():
    goto L9(c11, r18);
  L108():
    dr2 = tryDispatchBuiltin.1("[[", signature6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L110() else L109(dr2);
  L109(signature8):
    __1 = ldf `[[` in base;
    r23 = dyn __1(signature8, 1);
    goto L12(r23);
  L113():
    p3 = prom<V +>{
      gettextf = ldf gettextf;
      p2 = prom<V +>{
        dQuote = ldf dQuote;
        p1 = prom<V +>{
          signature9 = ld signature;
          signature10 = force? signature9;
          checkMissing(signature10);
          c26 = `is.object`(signature10);
          if c26 then L1() else L2(signature10);
        L0(dx5):
          return dx5;
        L1():
          dr4 = tryDispatchBuiltin.1("[[", signature10);
          dc2 = getTryDispatchBuiltinDispatched(dr4);
          if dc2 then L3() else L2(dr4);
        L2(signature12):
          __2 = ldf `[[` in base;
          r25 = dyn __2(signature12, 1);
          goto L0(r25);
        L3():
          dx4 = getTryDispatchBuiltinValue(dr4);
          goto L0(dx4);
        };
        r27 = dyn dQuote(p1);
        return r27;
      };
      r29 = dyn gettextf("inserting method with invalid signature matching argument '...' to class %s", p2);
      return r29;
    };
    r31 = dyn stop[, domain](p3, NA_LGL);
    check L114() else D16();
  L116():
    args6 = force? args5;
    checkMissing(args6);
    c27 = `is.object`(args6);
    if c27 then L117() else L118(args6);
  L136():
    goto L21(r44);
  L138():
    r46 = dyn stop1("inserting method corresponding to empty signature");
    check L139() else D25();
  L141():
    p4 = prom<V +>{
      mlist5 = ld mlist;
      mlist6 = force? mlist5;
      checkMissing(mlist6);
      return mlist6;
    };
    r49 = dyn is(p4, "MethodsList");
    check L142() else D27();
  D14():
    deopt 83 [r24];
  D16():
    deopt 89 [r31];
  D25():
    deopt 130 [r46];
  D27():
    deopt 137 [r49];
  L15(dx7):
    st args = dx7;
    signature13 = ld signature;
    check L120() else D18();
  L110():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L12(dx2);
  L111():
    goto L11(r24);
  L114():
    goto L14();
  L117():
    dr6 = tryDispatchBuiltin.1("[", args6);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L119() else L118(dr6);
  L118(args8):
    __3 = ldf `[` in base;
    r33 = dyn __3(args8, -1);
    goto L15(r33);
  L139():
    goto L23();
  L142():
    r50 = `!`(r49);
    c31 = `as.logical`(r50);
    if c31 then L143() else L24();
  D18():
    deopt 98 [signature13];
  L24():
    goto L25();
  L25():
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L147() else L148();
  L119():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L15(dx6);
  L120():
    signature14 = force? signature13;
    checkMissing(signature14);
    c28 = `is.object`(signature14);
    if c28 then L121() else L122(signature14);
  L143():
    stop2 = ldf stop;
    check L144() else D28();
  D28():
    deopt 140 [];
  L16(dx9):
    st signature = dx9;
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L124() else L125();
  L26(r61):
    r63 = `>`(r61, 1.0);
    c32 = `as.logical`(r63);
    if c32 then L151() else L27(c32);
  L121():
    dr8 = tryDispatchBuiltin.1("[", signature14);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L123() else L122(dr8);
  L122(signature16):
    __4 = ldf `[` in base;
    r34 = dyn __4(signature16, -1);
    goto L16(r34);
  L144():
    p8 = prom<V +>{
      gettextf1 = ldf gettextf;
      p7 = prom<V +>{
        dQuote1 = ldf dQuote;
        p6 = prom<V +>{
          _class1 = ldf `.class1`;
          p5 = prom<V +>{
            mlist7 = ld mlist;
            mlist8 = force? mlist7;
            checkMissing(mlist8);
            return mlist8;
          };
          r52 = dyn _class1(p5);
          return r52;
        };
        r54 = dyn dQuote1(p6);
        return r54;
      };
      r56 = dyn gettextf1("inserting method into non-methods-list object (class %s)", p7);
      return r56;
    };
    r58 = dyn stop2[, domain](p8, NA_LGL);
    check L145() else D29();
  L147():
    args9 = ld args;
    check L149() else D30();
  L148():
    r60 = dyn base7(<sym args>);
    goto L26(r60);
  D29():
    deopt 144 [r58];
  D30():
    deopt 149 [args9];
  L17(r36):
    r38 = `==`(r36, 0);
    c29 = `as.logical`(r38);
    if c29 then L128() else L18();
  L27(c34):
    c38 = `as.logical`(c34);
    if c38 then L154() else L28();
  L123():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L16(dx8);
  L124():
    signature17 = ld signature;
    check L126() else D19();
  L125():
    r35 = dyn base5(<sym signature>);
    goto L17(r35);
  L145():
    goto L25();
  L149():
    args10 = force? args9;
    checkMissing(args10);
    length2 = ldf length in base;
    r62 = dyn length2(args10);
    check L150() else D31();
  L151():
    cacheOnly1 = ld cacheOnly;
    check L152() else D32();
  D19():
    deopt 106 [signature17];
  D31():
    deopt 152 [r62];
  D32():
    deopt 155 [c32, cacheOnly1];
  L18():
    goto L20();
  L28():
    goto L29();
  L29():
    signature21 = ld signature;
    check L158() else D35();
  L126():
    signature18 = force? signature17;
    checkMissing(signature18);
    length = ldf length in base;
    r37 = dyn length(signature18);
    check L127() else D20();
  L128():
    mlist3 = ld mlist;
    check L129() else D21();
  L150():
    goto L26(r62);
  L152():
    cacheOnly2 = force? cacheOnly1;
    checkMissing(cacheOnly2);
    r64 = `!`(cacheOnly2);
    c35 = `as.logical`(r64);
    c36 = `&&`(c32, c35);
    goto L27(c36);
  L154():
    balanceMethodsList = ldf balanceMethodsList;
    check L155() else D33();
  D20():
    deopt 109 [r37];
  D21():
    deopt 112 [mlist3];
  D33():
    deopt 160 [];
  D35():
    deopt 167 [signature21];
  L127():
    goto L17(r37);
  L129():
    mlist4 = force? mlist3;
    checkMissing(mlist4);
    popenv;
    return mlist4;
  L155():
    p9 = prom<V +>{
      mlist9 = ld mlist;
      mlist10 = force? mlist9;
      checkMissing(mlist10);
      return mlist10;
    };
    p10 = prom<V +>{
      args11 = ld args;
      args12 = force? args11;
      checkMissing(args12);
      return args12;
    };
    r67 = dyn balanceMethodsList(p9, p10);
    check L156() else D34();
  L158():
    signature22 = force? signature21;
    checkMissing(signature22);
    c39 = `is.object`(signature22);
    if c39 then L159() else L160(signature22);
  D34():
    deopt 163 [r67];
  L30(dx11):
    st Class = dx11;
    cacheOnly3 = ld cacheOnly;
    check L162() else D36();
  L156():
    st mlist = r67;
    goto L29();
  L159():
    dr10 = tryDispatchBuiltin.1("[[", signature22);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L161() else L160(dr10);
  L160(signature24):
    __5 = ldf `[[` in base;
    r69 = dyn __5(signature24, 1.0);
    goto L30(r69);
  D36():
    deopt 173 [cacheOnly3];
  L161():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L30(dx10);
  L162():
    cacheOnly4 = force? cacheOnly3;
    checkMissing(cacheOnly4);
    c40 = `as.logical`(cacheOnly4);
    if c40 then L163() else L31();
  L31():
    __7 = ldf `@` in base;
    r72 = dyn __7(<sym mlist>, <sym methods>);
    goto L32(r72);
  L32(r71):
    st methods = r71;
    methods = ld methods;
    check L165() else D37();
  L163():
    __6 = ldf `@` in base;
    r70 = dyn __6(<sym mlist>, <sym allMethods>);
    goto L32(r70);
  D37():
    deopt 180 [methods];
  L165():
    methods1 = force? methods;
    checkMissing(methods1);
    c41 = `is.object`(methods1);
    if c41 then L166() else L167(methods1);
  L33(dx13):
    st current = dx13;
    is1 = ldf is;
    check L170() else D39();
  L166():
    dr12 = tryDispatchBuiltin.1("[[", methods1);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L168() else L167(dr12);
  L167(methods3):
    Class = ld Class;
    check L169() else D38();
  D38():
    deopt 182 [methods3, Class];
  D39():
    deopt 187 [];
  L168():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L33(dx12);
  L169():
    Class1 = force? Class;
    __8 = ldf `[[` in base;
    r73 = dyn __8(methods3, Class1);
    goto L33(r73);
  L170():
    p11 = prom<V +>{
      current = ld current;
      current1 = force? current;
      checkMissing(current1);
      return current1;
    };
    r75 = dyn is1(p11, "MethodsList");
    check L171() else D40();
  D40():
    deopt 190 [r75];
  L171():
    c42 = `as.logical`(r75);
    if c42 then L172() else L34();
  L34():
    goto L48();
  L48():
    sym17 = ldf length;
    base17 = ldf length in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L218() else L219();
  L172():
    sym8 = ldf `as.character`;
    base8 = ldf `as.character` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L173() else L174();
  L35(r77):
    st nextArg = r77;
    args13 = ld args;
    check L176() else D42();
  L49(r110):
    r112 = `==`(r110, 1.0);
    c47 = `as.logical`(r112);
    if c47 then L222() else L50();
  L173():
    __9 = ldf `@` in base;
    r78 = dyn __9(<sym current>, <sym argument>);
    as_character = ldf `as.character` in base;
    r79 = dyn as_character(r78);
    check L175() else D41();
  L174():
    r76 = dyn base8(<lang `@`(current, argument)>);
    goto L35(r76);
  L218():
    signature29 = ld signature;
    check L220() else D63();
  L219():
    r109 = dyn base17(<sym signature>);
    goto L49(r109);
  D41():
    deopt 196 [r79];
  D42():
    deopt 198 [args13];
  D63():
    deopt 278 [signature29];
  L50():
    sym23 = ldf `is.null`;
    base23 = ldf `is.null` in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L262() else L263();
  L64():
    methods10 = ld methods;
    check L283() else D88();
  L175():
    goto L35(r79);
  L176():
    args14 = force? args13;
    checkMissing(args14);
    st sigArgs = args14;
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L177() else L178();
  L220():
    signature30 = force? signature29;
    checkMissing(signature30);
    length4 = ldf length in base;
    r111 = dyn length4(signature30);
    check L221() else D64();
  L222():
    sym18 = ldf `is.null`;
    base18 = ldf `is.null` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L223() else L224();
  D64():
    deopt 281 [r111];
  D88():
    deopt 376 [methods10];
  L36(r81):
    st n = r81;
    n = ld n;
    check L181() else D45();
  L51(r114):
    c49 = `as.logical`(r114);
    if c49 then L226() else L52();
  L65(r131):
    c58 = `as.logical`(r131);
    if c58 then L265() else L66();
  L177():
    signature25 = ld signature;
    check L179() else D43();
  L178():
    r80 = dyn base9(<sym signature>);
    goto L36(r80);
  L221():
    goto L49(r111);
  L223():
    current2 = ld current;
    check L225() else D65();
  L224():
    r113 = dyn base18(<sym current>);
    goto L51(r113);
  L262():
    current4 = ld current;
    check L264() else D78();
  L263():
    r130 = dyn base23(<sym current>);
    goto L65(r130);
  L283():
    methods11 = force? methods10;
    checkMissing(methods11);
    l10 = ld mlist;
    ___ = ldf `@<-`;
    check L284() else D89();
  D43():
    deopt 203 [signature25];
  D45():
    deopt 208 [n];
  D65():
    deopt 285 [current2];
  D78():
    deopt 336 [current4];
  D89():
    deopt 379 [methods11, l10, methods11];
  L52():
    sym20 = ldf match;
    base20 = ldf match in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L238() else L239();
  L57(def10):
    goto L64();
  L66():
    sym24 = ldf `is.function`;
    base24 = ldf `is.function` in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L269() else L270();
  L67():
    Recall = ldf Recall;
    check L277() else D85();
  L179():
    signature26 = force? signature25;
    checkMissing(signature26);
    length3 = ldf length in base;
    r82 = dyn length3(signature26);
    check L180() else D44();
  L181():
    n1 = force? n;
    checkMissing(n1);
    l = ld sigArgs;
    length__ = ldf `length<-`;
    check L182() else D46();
  L225():
    current3 = force? current2;
    checkMissing(current3);
    c48 = `==`(current3, NULL);
    goto L51(c48);
  L226():
    sym19 = ldf `is.null`;
    base19 = ldf `is.null` in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L227() else L228();
  L264():
    current5 = force? current4;
    checkMissing(current5);
    c57 = `==`(current5, NULL);
    goto L65(c57);
  L265():
    new = ldf new;
    check L266() else D79();
  L284():
    r163 = dyn ___(l10, NULL, "allMethods", methods11);
    check L285() else D90();
  D44():
    deopt 206 [r82];
  D46():
    deopt 211 [n1, l, n1];
  D79():
    deopt 340 [];
  D85():
    deopt 364 [];
  D90():
    deopt 382 [methods11, r163];
  L53(r116):
    r117 = `!`(r116);
    c51 = `as.logical`(r117);
    if c51 then L230() else L54();
  L58(r120):
    st which = r120;
    sym22 = ldf `is.null`;
    base22 = ldf `is.null` in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L246() else L247();
  L68(r139):
    c60 = `as.logical`(r139);
    if c60 then L273() else L69();
  L180():
    goto L36(r82);
  L182():
    r83 = dyn length__(l, NULL, n1);
    check L183() else D47();
  L227():
    def1 = ld def;
    check L229() else D66();
  L228():
    r115 = dyn base19(<sym def>);
    goto L53(r115);
  L238():
    Class4 = ld Class;
    check L240() else D69();
  L239():
    r119 = dyn base20(<sym Class>, <lang names(methods)>);
    goto L58(r119);
  L266():
    p13 = prom<V +>{
      as_name = ldf `as.name`;
      p12 = prom<V +>{
        args19 = ld args;
        args20 = force? args19;
        checkMissing(args20);
        c59 = `is.object`(args20);
        if c59 then L1() else L2(args20);
      L0(dx21):
        return dx21;
      L1():
        dr20 = tryDispatchBuiltin.1("[", args20);
        dc10 = getTryDispatchBuiltinDispatched(dr20);
        if dc10 then L3() else L2(dr20);
      L2(args22):
        __11 = ldf `[` in base;
        r132 = dyn __11(args22, 2);
        goto L0(r132);
      L3():
        dx20 = getTryDispatchBuiltinValue(dr20);
        goto L0(dx20);
      };
      r134 = dyn as_name(p12);
      return r134;
    };
    r136 = dyn new[, argument]("MethodsList", p13);
    check L267() else D80();
  L269():
    current6 = ld current;
    check L271() else D81();
  L270():
    r138 = dyn base24(<sym current>);
    goto L68(r138);
  L277():
    p17 = prom<V +>{
      current10 = ld current;
      current11 = force? current10;
      checkMissing(current11);
      return current11;
    };
    p18 = prom<V +>{
      signature31 = ld signature;
      signature32 = force? signature31;
      checkMissing(signature32);
      c62 = `is.object`(signature32);
      if c62 then L1() else L2(signature32);
    L0(dx25):
      return dx25;
    L1():
      dr24 = tryDispatchBuiltin.1("[", signature32);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L3() else L2(dr24);
    L2(signature34):
      __13 = ldf `[` in base;
      r151 = dyn __13(signature34, -1);
      goto L0(r151);
    L3():
      dx24 = getTryDispatchBuiltinValue(dr24);
      goto L0(dx24);
    };
    p19 = prom<V +>{
      args27 = ld args;
      args28 = force? args27;
      checkMissing(args28);
      c63 = `is.object`(args28);
      if c63 then L1() else L2(args28);
    L0(dx27):
      return dx27;
    L1():
      dr26 = tryDispatchBuiltin.1("[", args28);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L3() else L2(dr26);
    L2(args30):
      __14 = ldf `[` in base;
      r153 = dyn __14(args30, -1);
      goto L0(r153);
    L3():
      dx26 = getTryDispatchBuiltinValue(dr26);
      goto L0(dx26);
    };
    p20 = prom<V +>{
      def20 = ld def;
      def21 = force? def20;
      checkMissing(def21);
      return def21;
    };
    p21 = prom<V +>{
      cacheOnly5 = ld cacheOnly;
      cacheOnly6 = force? cacheOnly5;
      checkMissing(cacheOnly6);
      return cacheOnly6;
    };
    r157 = dyn Recall(p17, p18, p19, p20, p21);
    check L278() else D86();
  L285():
    st mlist = r163;
    cacheOnly7 = ld cacheOnly;
    check L286() else D91();
  D47():
    deopt 213 [n1, r83];
  D66():
    deopt 289 [def1];
  D69():
    deopt 304 [Class4];
  D80():
    deopt 344 [r136];
  D81():
    deopt 348 [current6];
  D86():
    deopt 370 [r157];
  D91():
    deopt 384 [cacheOnly7];
  L54():
    goto L56(NULL);
  L56(def9):
    goto L57(def9);
  L60(r126):
    c54 = `as.logical`(r126);
    if c54 then L249() else L61();
  L69():
    goto L67();
  L183():
    st sigArgs = r83;
    sym10 = ldf `is.na`;
    base10 = ldf `is.na` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L184() else L185();
  L229():
    def2 = force? def1;
    checkMissing(def2);
    c50 = `==`(def2, NULL);
    goto L53(c50);
  L230():
    def3 = ld def;
    check L231() else D67();
  L240():
    Class5 = force? Class4;
    checkMissing(Class5);
    sym21 = ldf names;
    base21 = ldf names in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L241() else L242();
  L246():
    def11 = ld def;
    check L248() else D73();
  L247():
    r125 = dyn base22(<sym def>);
    goto L60(r125);
  L267():
    st current = r136;
    goto L67();
  L271():
    current7 = force? current6;
    checkMissing(current7);
    is_function = ldf `is.function` in base;
    r140 = dyn is_function(current7);
    check L272() else D82();
  L273():
    new1 = ldf new;
    check L274() else D83();
  L278():
    l7 = ld methods;
    c64 = `is.object`(l7);
    if c64 then L279() else L280(r157, l7);
  L286():
    cacheOnly8 = force? cacheOnly7;
    checkMissing(cacheOnly8);
    r164 = `!`(cacheOnly8);
    c65 = `as.logical`(r164);
    if c65 then L287() else L71();
  D67():
    deopt 293 [def3];
  D73():
    deopt 318 [def11];
  D82():
    deopt 351 [r140];
  D83():
    deopt 353 [];
  L37(r85):
    c43 = `as.logical`(r85);
    if c43 then L192() else L39();
  L59(r122):
    match2 = ldf match in base;
    r124 = dyn match2(Class5, r122, NA_INT, NULL);
    check L245() else D72();
  L61():
    def13 = ld def;
    check L256() else D76();
  L70(r161, dx29):
    st methods = dx29;
    goto L64();
  L71():
    goto L72();
  L72():
    mlist11 = ld mlist;
    check L292() else D95();
  L184():
    sym11 = ldf match;
    base11 = ldf match in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L186() else L187();
  L185():
    r84 = dyn base10(<lang match(nextArg, sigArgs)>);
    goto L37(r84);
  L231():
    def4 = force? def3;
    checkMissing(def4);
    l1 = ld methods;
    c52 = `is.object`(l1);
    if c52 then L232() else L233(def4, l1);
  L241():
    methods4 = ld methods;
    check L243() else D70();
  L242():
    r121 = dyn base21(<sym methods>);
    goto L59(r121);
  L248():
    def12 = force? def11;
    checkMissing(def12);
    c53 = `==`(def12, NULL);
    goto L60(c53);
  L249():
    methods6 = ld methods;
    check L250() else D74();
  L272():
    goto L68(r140);
  L274():
    p15 = prom<V +>{
      as_name1 = ldf `as.name`;
      p14 = prom<V +>{
        args23 = ld args;
        args24 = force? args23;
        checkMissing(args24);
        c61 = `is.object`(args24);
        if c61 then L1() else L2(args24);
      L0(dx23):
        return dx23;
      L1():
        dr22 = tryDispatchBuiltin.1("[", args24);
        dc11 = getTryDispatchBuiltinDispatched(dr22);
        if dc11 then L3() else L2(dr22);
      L2(args26):
        __12 = ldf `[` in base;
        r141 = dyn __12(args26, 2);
        goto L0(r141);
      L3():
        dx22 = getTryDispatchBuiltinValue(dr22);
        goto L0(dx22);
      };
      r143 = dyn as_name1(p14);
      return r143;
    };
    p16 = prom<V +>{
      sym25 = ldf list;
      base25 = ldf list in base;
      guard25 = `==`.4(sym25, base25);
      if guard25 then L1() else L2();
    L0(r146):
      return r146;
    L1():
      current8 = ld current;
      current9 = force? current8;
      checkMissing(current9);
      list = ldf list in base;
      r147 = dyn list(current9);
      goto L0(r147);
    L2():
      r145 = dyn base25[ANY](<sym current>);
      goto L0(r145);
    };
    r149 = dyn new1[, argument, methods]("MethodsList", p15, p16);
    check L275() else D84();
  L279():
    dr28 = tryDispatchBuiltin.0("[[<-", l7, r157);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L281() else L280(r157, dr28);
  L280(r159, l9):
    Class6 = ld Class;
    check L282() else D87();
  L287():
    methods12 = ld methods;
    check L288() else D92();
  D70():
    deopt 308 [methods4];
  D72():
    deopt 315 [r124];
  D74():
    deopt 321 [methods6];
  D76():
    deopt 328 [def13];
  D84():
    deopt 359 [r149];
  D87():
    deopt 372 [r159, l9, r157, Class6];
  D92():
    deopt 387 [methods12];
  D95():
    deopt 397 [mlist11];
  L38(r87):
    is_na = ldf `is.na` in base;
    r89 = dyn is_na(r87);
    check L191() else D51();
  L39():
    goto L47(NULL);
  L47(r107):
    goto L48();
  L55(def8, dx15):
    st methods = dx15;
    goto L56(def8);
  L186():
    nextArg = ld nextArg;
    check L188() else D48();
  L187():
    r86 = dyn base11(<sym nextArg>, <sym sigArgs>);
    goto L38(r86);
  L192():
    sym12 = ldf match;
    base12 = ldf match in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L193() else L194();
  L232():
    dr14 = tryDispatchBuiltin.0("[[<-", l1, def4);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L234() else L233(def4, dr14);
  L233(def6, l3):
    Class2 = ld Class;
    check L235() else D68();
  L243():
    methods5 = force? methods4;
    checkMissing(methods5);
    names1 = ldf names in base;
    r123 = dyn names1(methods5);
    check L244() else D71();
  L245():
    goto L58(r124);
  L250():
    methods7 = force? methods6;
    checkMissing(methods7);
    c55 = `is.object`(methods7);
    if c55 then L251() else L252(methods7);
  L256():
    def14 = force? def13;
    checkMissing(def14);
    l4 = ld methods;
    c56 = `is.object`(l4);
    if c56 then L257() else L258(def14, l4);
  L275():
    st current = r149;
    goto L67();
  L281():
    dx28 = getTryDispatchBuiltinValue(dr28);
    goto L70(r157, dx28);
  L282():
    Class7 = force? Class6;
    ____2 = ldf `[[<-` in base;
    r162 = dyn ____2(l9, r157, Class7);
    goto L70(r159, r162);
  L288():
    methods13 = force? methods12;
    checkMissing(methods13);
    l11 = ld mlist;
    ___1 = ldf `@<-`;
    check L289() else D93();
  L292():
    mlist12 = force? mlist11;
    checkMissing(mlist12);
    popenv;
    return mlist12;
  D48():
    deopt 219 [nextArg];
  D51():
    deopt 228 [r89];
  D68():
    deopt 296 [def6, l3, def4, Class2];
  D71():
    deopt 311 [r123];
  D93():
    deopt 390 [methods13, l11, methods13];
  L40(r91):
    n2 = ld n;
    check L198() else D55();
  L62(dx17):
    st methods = dx17;
    goto L57(dx17);
  L63(def18, dx19):
    st methods = dx19;
    goto L57(def18);
  L188():
    nextArg1 = force? nextArg;
    checkMissing(nextArg1);
    sigArgs = ld sigArgs;
    check L189() else D49();
  L191():
    goto L37(r89);
  L193():
    nextArg2 = ld nextArg;
    check L195() else D52();
  L194():
    r90 = dyn base12(<sym nextArg>, <sym args>);
    goto L40(r90);
  L234():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L55(def4, dx14);
  L235():
    Class3 = force? Class2;
    ____ = ldf `[[<-` in base;
    r118 = dyn ____(l3, def4, Class3);
    goto L55(def6, r118);
  L244():
    goto L59(r123);
  L251():
    dr16 = tryDispatchBuiltin.1("[", methods7);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L253() else L252(dr16);
  L252(methods9):
    which = ld which;
    check L254() else D75();
  L257():
    dr18 = tryDispatchBuiltin.0("[[<-", l4, def14);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L259() else L258(def14, dr18);
  L258(def16, l6):
    which2 = ld which;
    check L260() else D77();
  L289():
    r165 = dyn ___1(l11, NULL, "methods", methods13);
    check L290() else D94();
  D49():
    deopt 221 [sigArgs];
  D52():
    deopt 231 [nextArg2];
  D55():
    deopt 238 [r91, n2];
  D75():
    deopt 323 [methods9, which];
  D77():
    deopt 331 [def16, l6, def14, which2];
  D94():
    deopt 393 [methods13, r165];
  L189():
    sigArgs1 = force? sigArgs;
    checkMissing(sigArgs1);
    match = ldf match in base;
    r88 = dyn match(nextArg1, sigArgs1, NA_INT, NULL);
    check L190() else D50();
  L195():
    nextArg3 = force? nextArg2;
    checkMissing(nextArg3);
    args15 = ld args;
    check L196() else D53();
  L198():
    n3 = force? n2;
    checkMissing(n3);
    r93 = `-`(r91, n3);
    st n = r93;
    sym13 = ldf `is.na`;
    base13 = ldf `is.na` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L199() else L200();
  L253():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L62(dx16);
  L254():
    which1 = force? which;
    checkMissing(which1);
    r127 = `-`(<missing>, which1);
    __10 = ldf `[` in base;
    r128 = dyn __10(methods9, r127);
    goto L62(r128);
  L259():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L63(def14, dx18);
  L260():
    which3 = force? which2;
    ____1 = ldf `[[<-` in base;
    r129 = dyn ____1(l6, def14, which3);
    goto L63(def16, r129);
  L290():
    st mlist = r165;
    goto L72();
  D50():
    deopt 226 [r88];
  D53():
    deopt 233 [args15];
  L41(r95):
    c44 = `as.logical`(r95);
    if c44 then L203() else L42();
  L190():
    goto L38(r88);
  L196():
    args16 = force? args15;
    checkMissing(args16);
    match1 = ldf match in base;
    r92 = dyn match1(nextArg3, args16, NA_INT, NULL);
    check L197() else D54();
  L199():
    n4 = ld n;
    check L201() else D56();
  L200():
    r94 = dyn base13(<sym n>);
    goto L41(r94);
  D54():
    deopt 238 [r92];
  D56():
    deopt 244 [n4];
  L42():
    goto L44();
  L44():
    sym15 = ldf c;
    base15 = ldf c in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L210() else L211();
  L197():
    goto L40(r92);
  L201():
    n5 = force? n4;
    checkMissing(n5);
    is_na1 = ldf `is.na` in base;
    r96 = dyn is_na1(n5);
    check L202() else D57();
  L203():
    st n = 1.0;
    sym14 = ldf c;
    base14 = ldf c in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L204() else L205();
  D57():
    deopt 247 [r96];
  L43(r98):
    st args = r98;
    goto L44();
  L45(r102):
    st signature = r102;
    goto L47(r102);
  L202():
    goto L41(r96);
  L204():
    args17 = ld args;
    check L206() else D58();
  L205():
    r97 = dyn base14(<sym args>, <sym nextArg>);
    goto L43(r97);
  L210():
    signature27 = ld signature;
    check L212() else D61();
  L211():
    r101 = dyn base15(<sym signature>, <lang rep("ANY", n)>);
    goto L45(r101);
  D58():
    deopt 253 [args17];
  D61():
    deopt 264 [signature27];
  L206():
    args18 = force? args17;
    checkMissing(args18);
    nextArg4 = ld nextArg;
    check L207() else D59();
  L212():
    signature28 = force? signature27;
    checkMissing(signature28);
    sym16 = ldf rep;
    base16 = ldf rep in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L213() else L214();
  D59():
    deopt 255 [nextArg4];
  L46(r104):
    c46 = ldf c in base;
    r106 = dyn c46(signature28, r104);
    check L215() else D62();
  L207():
    nextArg5 = force? nextArg4;
    checkMissing(nextArg5);
    c45 = ldf c in base;
    r99 = dyn c45(args18, nextArg5);
    check L208() else D60();
  L213():
    rep = ldf rep in base;
    r105 = dyn rep("ANY", <sym n>);
    goto L46(r105);
  L214():
    r103 = dyn base16("ANY", <sym n>);
    goto L46(r103);
  D60():
    deopt 258 [r99];
  D62():
    deopt 270 [r106];
  L208():
    goto L43(r99);
  L215():
    goto L45(r106);
  }
}