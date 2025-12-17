fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner279063041;
    st conformMethod = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner279063041(signature, mnames, fnames, f, fdef, method) {
  (reg signature:*, reg mnames:*, reg fnames:*, reg f:*, reg fdef:*, reg method:*) -+> V { var signature:*, var mnames:*, var fnames:*, var f:*, reg f_isMissing:L, reg f_orDefault:*, var fdef:*, var method:*, reg signature1:*, reg signature2:V, reg __:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg mnames1:*, reg mnames2:V, reg match:cls, reg r5:V, reg is_na:cls, reg r6:V, reg c:L, reg c2:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg c5:L, reg r8:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg c8:L, reg r10:V, reg fnames1:*, reg fnames2:V, reg match1:cls, reg r11:V, reg is_na1:cls, reg r12:V, reg r13:V, reg c9:L, reg c10:V, reg c12:L, reg fnames3:*, reg fnames4:V, reg c13:L, reg fnames6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r14:V, reg fnames9:V, reg r15:V, reg fnames10:*, reg fnames11:V, reg match2:cls, reg r16:V, reg r17:V, reg __1:cls, reg r18:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r19:V, reg r20:V, reg fnames12:*, reg fnames13:V, reg mnames3:*, reg mnames4:V, reg match3:cls, reg r21:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r22:V, reg r23:V, reg imf:*, reg imf1:V, reg is_na2:cls, reg r24:V, reg is_unsorted:cls, reg imf2:*, reg imf3:V, reg c14:L, reg imf5:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg omitted:*, reg omitted1:V, reg r25:V, reg __2:cls, reg r26:V, reg p:p(V +), reg r28:V, reg c15:L, reg stop:cls, reg _renderSignature:cls, reg f1:*, reg f2:V, reg p1:p(V +), reg signature3:*, reg signature4:V, reg p2:p(V +), reg r31:V, reg p3:p(V +), reg r33:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r35:V, reg r36:V, reg omitted2:*, reg omitted3:V, reg any:cls, reg r37:V, reg r38:V, reg c16:L, reg signature5:*, reg signature6:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r41:V, reg r42:V, reg signature7:*, reg signature8:V, reg names:cls, reg r43:V, reg _in_:cls, reg sigNames:*, reg sigNames1:V, reg p4:p(V +), reg fnames14:*, reg fnames15:V, reg c17:L, reg fnames17:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg omitted4:*, reg omitted5:V, reg __3:cls, reg r45:V, reg p5:p(V +), reg r47:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r48:V, reg r49:V, reg omittedSig:*, reg omittedSig1:V, reg any1:cls, reg r50:V, reg r51:V, reg c18:L, reg signature9:*, reg signature10:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r54:V, reg r55:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r56:V, reg r57:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r58:V, reg r59:V, reg signature11:*, reg signature12:V, reg c19:L, reg signature14:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg omittedSig2:*, reg omittedSig3:V, reg __4:cls, reg r60:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r61:V, reg r62:V, reg c20:cls, reg r63:V, reg match4:cls, reg r64:V, reg is_na3:cls, reg r65:V, reg any2:cls, reg r66:V, reg c21:L, reg omittedSig4:*, reg omittedSig5:V, reg iiN:*, reg iiN1:V, reg r67:V, reg paste0:cls, reg fnames18:*, reg fnames19:V, reg c22:L, reg fnames21:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg bad:*, reg bad1:V, reg __5:cls, reg r68:V, reg p6:p(V +), reg signature15:*, reg signature16:V, reg c23:L, reg signature18:V, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg bad2:*, reg bad3:V, reg __6:cls, reg r70:V, reg p7:p(V +), reg r72:V, reg stop1:cls, reg _renderSignature1:cls, reg f3:*, reg f4:V, reg p8:p(V +), reg sig0:*, reg sig1:V, reg p9:p(V +), reg r75:V, reg p10:p(V +), reg gettextf:cls, reg bad4:*, reg bad5:V, reg p11:p(V +), reg r78:V, reg p12:p(V +), reg r80:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r82:V, reg r83:V, reg omittedSig6:*, reg omittedSig7:V, reg signature19:*, reg signature20:V, reg r84:V, reg r85:V, reg any3:cls, reg r86:V, reg c24:L, reg _message:cls, reg _renderSignature2:cls, reg f5:*, reg f6:V, reg p13:p(V +), reg sig2:*, reg sig3:V, reg p14:p(V +), reg r89:V, reg p15:p(V +), reg gettextf1:cls, reg paste1:cls, reg sigNames2:*, reg sigNames3:V, reg c25:L, reg sigNames5:V, reg dr12:V, reg dc6:L, reg dx13:V, reg dx14:V, reg omittedSig8:*, reg omittedSig9:V, reg __7:cls, reg r91:V, reg p16:p(V +), reg r93:V, reg p17:p(V +), reg r95:V, reg p18:p(V +), reg r97:V, reg l:*, reg c26:L, reg r99:S, reg l2:*, reg dr14:V, reg dc7:L, reg dx15:V, reg r101:S, reg dx16:V, reg omittedSig10:*, reg omittedSig11:V, reg ___:cls, reg r102:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r103:V, reg r104:V, reg signature21:*, reg signature22:V, reg length:cls, reg r105:V, reg _identC:cls, reg signature23:*, reg signature24:V, reg c27:L, reg signature26:V, reg dr16:V, reg dc8:L, reg dx17:V, reg dx18:V, reg n:*, reg n1:V, reg __8:cls, reg r106:V, reg p19:p(V +), reg r108:V, reg c28:L, reg n2:*, reg n3:V, reg r109:V, reg n4:*, reg n5:V, reg l3:*, reg length__:cls, reg r110:V, reg n6:*, reg n7:V, reg l4:*, reg length__1:cls, reg r111:V, reg setNames:cls, reg signature27:*, reg signature28:V, reg p20:p(V +), reg fsig:*, reg fsig1:V, reg p21:p(V +), reg r114:V |
    mkenv;
    st signature = signature;
    st mnames = mnames;
    st fnames = fnames;
    f_isMissing = missing.0(f);
    if f_isMissing then L0("<unspecified>") else L0(f);
  L0(f_orDefault):
    st f = f_orDefault;
    st fdef = fdef;
    st method = method;
    signature1 = ld signature;
    check L34() else D0();
  D0():
    deopt 0 [signature1];
  L34():
    signature2 = force? signature1;
    checkMissing(signature2);
    st sig0 = signature2;
    __ = ldf `@` in base;
    r = dyn __(<sym fdef>, <sym signature>);
    st fsig = r;
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L35() else L36();
  L1(r2):
    c = `as.logical`(r2);
    if c then L42() else L3(c);
  L35():
    sym1 = ldf match;
    base1 = ldf match in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L37() else L38();
  L36():
    r1 = dyn base(<lang match("...", mnames)>);
    goto L1(r1);
  L2(r4):
    is_na = ldf `is.na` in base;
    r6 = dyn is_na(r4);
    check L41() else D3();
  L3(c2):
    c12 = `as.logical`(c2);
    if c12 then L51() else L6();
  L37():
    mnames1 = ld mnames;
    check L39() else D1();
  L38():
    r3 = dyn base1("...", <sym mnames>);
    goto L2(r3);
  L42():
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L43() else L44();
  D1():
    deopt 11 [mnames1];
  D3():
    deopt 18 [r6];
  L4(c5, r8):
    r13 = `!`(r8);
    c9 = `as.logical`(r13);
    c10 = `&&`(c5, c9);
    goto L3(c10);
  L6():
    goto L9();
  L9():
    sym5 = ldf match;
    base5 = ldf match in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L61() else L62();
  L39():
    mnames2 = force? mnames1;
    checkMissing(mnames2);
    match = ldf match in base;
    r5 = dyn match("...", mnames2, NA_INT, NULL);
    check L40() else D2();
  L41():
    goto L1(r6);
  L43():
    sym3 = ldf match;
    base3 = ldf match in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L45() else L46();
  L44():
    r7 = dyn base2(<lang match("...", fnames)>);
    goto L4(c, r7);
  L51():
    fnames3 = ld fnames;
    check L52() else D7();
  D2():
    deopt 16 [r5];
  D7():
    deopt 34 [fnames3];
  L5(c8, r10):
    is_na1 = ldf `is.na` in base;
    r12 = dyn is_na1(r10);
    check L49() else D6();
  L10(r20):
    st imf = r20;
    sym6 = ldf `is.na`;
    base6 = ldf `is.na` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L66() else L67();
  L40():
    goto L2(r5);
  L45():
    fnames1 = ld fnames;
    check L47() else D4();
  L46():
    r9 = dyn base3("...", <sym fnames>);
    goto L5(c, r9);
  L52():
    fnames4 = force? fnames3;
    checkMissing(fnames4);
    c13 = `is.object`(fnames4);
    if c13 then L53() else L54(fnames4);
  L61():
    fnames12 = ld fnames;
    check L63() else D10();
  L62():
    r19 = dyn base5(<sym fnames>, <sym mnames>);
    goto L10(r19);
  D4():
    deopt 24 [c, fnames1];
  D6():
    deopt 31 [c8, r12];
  D10():
    deopt 52 [fnames12];
  L7(dx1):
    st fnames = dx1;
    goto L9();
  L11(r23):
    st omitted = r23;
    is_unsorted = ldf `is.unsorted`;
    check L70() else D15();
  L47():
    fnames2 = force? fnames1;
    checkMissing(fnames2);
    match1 = ldf match in base;
    r11 = dyn match1("...", fnames2, NA_INT, NULL);
    check L48() else D5();
  L49():
    goto L4(c8, r12);
  L53():
    dr = tryDispatchBuiltin.1("[", fnames4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L55() else L54(dr);
  L54(fnames6):
    sym4 = ldf match;
    base4 = ldf match in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L56() else L57();
  L63():
    fnames13 = force? fnames12;
    checkMissing(fnames13);
    mnames3 = ld mnames;
    check L64() else D11();
  L66():
    imf = ld imf;
    check L68() else D13();
  L67():
    r22 = dyn base6(<sym imf>);
    goto L11(r22);
  D5():
    deopt 29 [c, r11];
  D11():
    deopt 54 [mnames3];
  D13():
    deopt 63 [imf];
  D15():
    deopt 69 [];
  L8(fnames9, r15):
    r17 = `-`(<missing>, r15);
    __1 = ldf `[` in base;
    r18 = dyn __1(fnames9, r17);
    goto L7(r18);
  L48():
    goto L5(c, r11);
  L55():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  L56():
    fnames10 = ld fnames;
    check L58() else D8();
  L57():
    r14 = dyn base4("...", <sym fnames>);
    goto L8(fnames6, r14);
  L64():
    mnames4 = force? mnames3;
    checkMissing(mnames4);
    match3 = ldf match in base;
    r21 = dyn match3(fnames13, mnames4, NA_INT, NULL);
    check L65() else D12();
  L68():
    imf1 = force? imf;
    checkMissing(imf1);
    is_na2 = ldf `is.na` in base;
    r24 = dyn is_na2(imf1);
    check L69() else D14();
  L70():
    p = prom<V +>{
      imf2 = ld imf;
      imf3 = force? imf2;
      checkMissing(imf3);
      c14 = `is.object`(imf3);
      if c14 then L1() else L2(imf3);
    L0(dx4):
      return dx4;
    L1():
      dr2 = tryDispatchBuiltin.1("[", imf3);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(imf5):
      omitted = ld omitted;
      omitted1 = force? omitted;
      checkMissing(omitted1);
      r25 = `!`(omitted1);
      __2 = ldf `[` in base;
      r26 = dyn __2(imf5, r25);
      goto L0(r26);
    L3():
      dx3 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx3);
    };
    r28 = dyn is_unsorted(p);
    check L71() else D16();
  D8():
    deopt 39 [fnames6, fnames10];
  D12():
    deopt 59 [r21];
  D14():
    deopt 66 [r24];
  D16():
    deopt 71 [r28];
  L58():
    fnames11 = force? fnames10;
    checkMissing(fnames11);
    match2 = ldf match in base;
    r16 = dyn match2("...", fnames11, NA_INT, NULL);
    check L59() else D9();
  L65():
    goto L10(r21);
  L69():
    goto L11(r24);
  L71():
    c15 = `as.logical`(r28);
    if c15 then L72() else L12();
  D9():
    deopt 44 [fnames6, r16];
  L12():
    goto L13();
  L13():
    sym7 = ldf any;
    base7 = ldf any in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L76() else L77();
  L59():
    goto L8(fnames6, r16);
  L72():
    stop = ldf stop;
    check L73() else D17();
  D17():
    deopt 73 [];
  L14(r36):
    r38 = `!`(r36);
    c16 = `as.logical`(r38);
    if c16 then L80() else L15();
  L73():
    p3 = prom<V +>{
      _renderSignature = ldf `.renderSignature`;
      p1 = prom<V +>{
        f1 = ld f;
        f2 = force? f1;
        checkMissing(f2);
        return f2;
      };
      p2 = prom<V +>{
        signature3 = ld signature;
        signature4 = force? signature3;
        checkMissing(signature4);
        return signature4;
      };
      r31 = dyn _renderSignature(p1, p2);
      return r31;
    };
    r33 = dyn stop[, , `call.`](p3, "formal arguments in method and generic do not appear in the same order", FALSE);
    check L74() else D18();
  L76():
    omitted2 = ld omitted;
    check L78() else D19();
  L77():
    r35 = dyn base7(<sym omitted>);
    goto L14(r35);
  D18():
    deopt 78 [r33];
  D19():
    deopt 83 [omitted2];
  L15():
    sym8 = ldf names;
    base8 = ldf names in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L84() else L85();
  L74():
    goto L13();
  L78():
    omitted3 = force? omitted2;
    checkMissing(omitted3);
    any = ldf any in base;
    r37 = dyn any(omitted3);
    check L79() else D20();
  L80():
    signature5 = ld signature;
    check L81() else D21();
  D20():
    deopt 86 [r37];
  D21():
    deopt 88 [signature5];
  L17(r42):
    st sigNames = r42;
    _in_ = ldf `%in%`;
    check L88() else D24();
  L79():
    goto L14(r37);
  L81():
    signature6 = force? signature5;
    checkMissing(signature6);
    popenv;
    return signature6;
  L84():
    signature7 = ld signature;
    check L86() else D22();
  L85():
    r41 = dyn base8(<sym signature>);
    goto L17(r41);
  D22():
    deopt 95 [signature7];
  D24():
    deopt 101 [];
  L86():
    signature8 = force? signature7;
    checkMissing(signature8);
    names = ldf names in base;
    r43 = dyn names(signature8);
    check L87() else D23();
  L88():
    p4 = prom<V +>{
      sigNames = ld sigNames;
      sigNames1 = force? sigNames;
      checkMissing(sigNames1);
      return sigNames1;
    };
    p5 = prom<V +>{
      fnames14 = ld fnames;
      fnames15 = force? fnames14;
      checkMissing(fnames15);
      c17 = `is.object`(fnames15);
      if c17 then L1() else L2(fnames15);
    L0(dx6):
      return dx6;
    L1():
      dr4 = tryDispatchBuiltin.1("[", fnames15);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(fnames17):
      omitted4 = ld omitted;
      omitted5 = force? omitted4;
      __3 = ldf `[` in base;
      r45 = dyn __3(fnames17, omitted5);
      goto L0(r45);
    L3():
      dx5 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx5);
    };
    r47 = dyn _in_(p4, p5);
    check L89() else D25();
  D23():
    deopt 98 [r43];
  D25():
    deopt 104 [r47];
  L87():
    goto L17(r43);
  L89():
    st omittedSig = r47;
    sym9 = ldf any;
    base9 = ldf any in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L90() else L91();
  L18(r49):
    r51 = `!`(r49);
    c18 = `as.logical`(r51);
    if c18 then L94() else L19();
  L90():
    omittedSig = ld omittedSig;
    check L92() else D26();
  L91():
    r48 = dyn base9(<sym omittedSig>);
    goto L18(r48);
  D26():
    deopt 108 [omittedSig];
  L19():
    sym10 = ldf any;
    base10 = ldf any in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L98() else L99();
  L92():
    omittedSig1 = force? omittedSig;
    checkMissing(omittedSig1);
    any1 = ldf any in base;
    r50 = dyn any1(omittedSig1);
    check L93() else D27();
  L94():
    signature9 = ld signature;
    check L95() else D28();
  D27():
    deopt 111 [r50];
  D28():
    deopt 113 [signature9];
  L21(r55):
    c21 = `as.logical`(r55);
    if c21 then L115() else L26();
  L93():
    goto L18(r50);
  L95():
    signature10 = force? signature9;
    checkMissing(signature10);
    popenv;
    return signature10;
  L98():
    sym11 = ldf `is.na`;
    base11 = ldf `is.na` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L100() else L101();
  L99():
    r54 = dyn base10(<lang `<-`(iiN, is.na(match(`[`(signature, omittedSig), c("ANY", "missing"))))>);
    goto L21(r54);
  L22(r57):
    st iiN = r57;
    any2 = ldf any in base;
    r66 = dyn any2(r57);
    check L114() else D34();
  L26():
    sym14 = ldf any;
    base14 = ldf any in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L123() else L124();
  L27():
    sym15 = ldf length;
    base15 = ldf length in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L136() else L137();
  L100():
    sym12 = ldf match;
    base12 = ldf match in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L102() else L103();
  L101():
    r56 = dyn base11(<lang match(`[`(signature, omittedSig), c("ANY", "missing"))>);
    goto L22(r56);
  L115():
    omittedSig4 = ld omittedSig;
    check L116() else D35();
  D34():
    deopt 143 [r66];
  D35():
    deopt 144 [omittedSig4];
  L23(r59):
    is_na3 = ldf `is.na` in base;
    r65 = dyn is_na3(r59);
    check L113() else D33();
  L28(r83):
    c24 = `as.logical`(r83);
    if c24 then L128() else L29();
  L31(r104):
    st n = r104;
    goto L33();
  L102():
    signature11 = ld signature;
    check L104() else D29();
  L103():
    r58 = dyn base12(<lang `[`(signature, omittedSig)>, <lang c("ANY", "missing")>);
    goto L23(r58);
  L114():
    goto L21(r66);
  L116():
    omittedSig5 = force? omittedSig4;
    checkMissing(omittedSig5);
    iiN = ld iiN;
    check L117() else D36();
  L123():
    omittedSig6 = ld omittedSig;
    check L125() else D41();
  L124():
    r82 = dyn base14(<lang `<-`(omittedSig, `&`(omittedSig, `!=`(signature, "missing")))>);
    goto L28(r82);
  L136():
    signature21 = ld signature;
    check L138() else D47();
  L137():
    r103 = dyn base15(<sym signature>);
    goto L31(r103);
  D29():
    deopt 124 [signature11];
  D33():
    deopt 140 [r65];
  D36():
    deopt 145 [omittedSig5, iiN];
  D41():
    deopt 170 [omittedSig6];
  D47():
    deopt 196 [signature21];
  L29():
    goto L27();
  L33():
    _identC = ldf `.identC`;
    check L140() else D49();
  L104():
    signature12 = force? signature11;
    checkMissing(signature12);
    c19 = `is.object`(signature12);
    if c19 then L105() else L106(signature12);
  L113():
    goto L22(r65);
  L117():
    iiN1 = force? iiN;
    checkMissing(iiN1);
    r67 = `&&`(omittedSig5, iiN1);
    st bad = r67;
    paste0 = ldf paste0;
    check L118() else D37();
  L125():
    omittedSig7 = force? omittedSig6;
    checkMissing(omittedSig7);
    signature19 = ld signature;
    check L126() else D42();
  L128():
    _message = ldf `.message`;
    check L129() else D44();
  L138():
    signature22 = force? signature21;
    checkMissing(signature22);
    length = ldf length in base;
    r105 = dyn length(signature22);
    check L139() else D48();
  D37():
    deopt 150 [];
  D42():
    deopt 171 [omittedSig7, signature19];
  D44():
    deopt 180 [];
  D48():
    deopt 199 [r105];
  D49():
    deopt 202 [];
  L24(dx8):
    sym13 = ldf c;
    base13 = ldf c in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L109() else L110();
  L105():
    dr6 = tryDispatchBuiltin.1("[", signature12);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L107() else L106(dr6);
  L106(signature14):
    omittedSig2 = ld omittedSig;
    check L108() else D30();
  L118():
    p6 = prom<V +>{
      fnames18 = ld fnames;
      fnames19 = force? fnames18;
      checkMissing(fnames19);
      c22 = `is.object`(fnames19);
      if c22 then L1() else L2(fnames19);
    L0(dx10):
      return dx10;
    L1():
      dr8 = tryDispatchBuiltin.1("[", fnames19);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(fnames21):
      bad = ld bad;
      bad1 = force? bad;
      __5 = ldf `[` in base;
      r68 = dyn __5(fnames21, bad1);
      goto L0(r68);
    L3():
      dx9 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx9);
    };
    p7 = prom<V +>{
      signature15 = ld signature;
      signature16 = force? signature15;
      checkMissing(signature16);
      c23 = `is.object`(signature16);
      if c23 then L1() else L2(signature16);
    L0(dx12):
      return dx12;
    L1():
      dr10 = tryDispatchBuiltin.1("[", signature16);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(signature18):
      bad2 = ld bad;
      bad3 = force? bad2;
      __6 = ldf `[` in base;
      r70 = dyn __6(signature18, bad3);
      goto L0(r70);
    L3():
      dx11 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx11);
    };
    r72 = dyn paste0[, , , , collapse](p6, " = \"", p7, "\"", ", ");
    check L119() else D38();
  L126():
    signature20 = force? signature19;
    checkMissing(signature20);
    r84 = `!=`(signature20, "missing");
    r85 = `&&`(omittedSig7, r84);
    st omittedSig = r85;
    any3 = ldf any in base;
    r86 = dyn any3(r85);
    check L127() else D43();
  L129():
    p15 = prom<V +>{
      _renderSignature2 = ldf `.renderSignature`;
      p13 = prom<V +>{
        f5 = ld f;
        f6 = force? f5;
        checkMissing(f6);
        return f6;
      };
      p14 = prom<V +>{
        sig2 = ld sig0;
        sig3 = force? sig2;
        checkMissing(sig3);
        return sig3;
      };
      r89 = dyn _renderSignature2(p13, p14);
      return r89;
    };
    p18 = prom<V +>{
      gettextf1 = ldf gettextf;
      p17 = prom<V +>{
        paste1 = ldf paste;
        p16 = prom<V +>{
          sigNames2 = ld sigNames;
          sigNames3 = force? sigNames2;
          checkMissing(sigNames3);
          c25 = `is.object`(sigNames3);
          if c25 then L1() else L2(sigNames3);
        L0(dx14):
          return dx14;
        L1():
          dr12 = tryDispatchBuiltin.1("[", sigNames3);
          dc6 = getTryDispatchBuiltinDispatched(dr12);
          if dc6 then L3() else L2(dr12);
        L2(sigNames5):
          omittedSig8 = ld omittedSig;
          omittedSig9 = force? omittedSig8;
          __7 = ldf `[` in base;
          r91 = dyn __7(sigNames5, omittedSig9);
          goto L0(r91);
        L3():
          dx13 = getTryDispatchBuiltinValue(dr12);
          goto L0(dx13);
        };
        r93 = dyn paste1[, , collapse](p16, "= \"missing\"", ", ");
        return r93;
      };
      r95 = dyn gettextf1("expanding the signature to include omitted arguments in definition: %s", p17);
      return r95;
    };
    r97 = dyn _message("Note: ", p15, p18);
    check L130() else D45();
  L139():
    goto L31(r105);
  L140():
    p19 = prom<V +>{
      signature23 = ld signature;
      signature24 = force? signature23;
      checkMissing(signature24);
      c27 = `is.object`(signature24);
      if c27 then L1() else L2(signature24);
    L0(dx18):
      return dx18;
    L1():
      dr16 = tryDispatchBuiltin.1("[[", signature24);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(signature26):
      n = ld n;
      n1 = force? n;
      __8 = ldf `[[` in base;
      r106 = dyn __8(signature26, n1);
      goto L0(r106);
    L3():
      dx17 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx17);
    };
    r108 = dyn _identC(p19, "ANY");
    check L141() else D50();
  D30():
    deopt 126 [signature14, omittedSig2];
  D38():
    deopt 157 [r72];
  D43():
    deopt 178 [r86];
  D45():
    deopt 184 [r97];
  D50():
    deopt 205 [r108];
  L25(r62):
    match4 = ldf match in base;
    r64 = dyn match4(dx8, r62, NA_INT, NULL);
    check L112() else D32();
  L107():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L24(dx7);
  L108():
    omittedSig3 = force? omittedSig2;
    __4 = ldf `[` in base;
    r60 = dyn __4(signature14, omittedSig3);
    goto L24(r60);
  L109():
    c20 = ldf c in base;
    r63 = dyn c20("ANY", "missing");
    check L111() else D31();
  L110():
    r61 = dyn base13("ANY", "missing");
    goto L25(r61);
  L119():
    st bad2 = r72;
    stop1 = ldf stop;
    check L120() else D39();
  L127():
    goto L28(r86);
  L130():
    l = ld signature;
    c26 = `is.object`(l);
    if c26 then L131() else L132("missing", l);
  L141():
    c28 = `as.logical`(r108);
    if c28 then L142() else L32();
  D31():
    deopt 134 [r63];
  D32():
    deopt 138 [r64];
  D39():
    deopt 160 [];
  L30(r101, dx16):
    st signature = dx16;
    goto L27();
  L32():
    n4 = ld n;
    check L145() else D52();
  L111():
    goto L25(r63);
  L112():
    goto L23(r64);
  L120():
    p10 = prom<V +>{
      _renderSignature1 = ldf `.renderSignature`;
      p8 = prom<V +>{
        f3 = ld f;
        f4 = force? f3;
        checkMissing(f4);
        return f4;
      };
      p9 = prom<V +>{
        sig0 = ld sig0;
        sig1 = force? sig0;
        checkMissing(sig1);
        return sig1;
      };
      r75 = dyn _renderSignature1(p8, p9);
      return r75;
    };
    p12 = prom<V +>{
      gettextf = ldf gettextf;
      p11 = prom<V +>{
        bad4 = ld bad2;
        bad5 = force? bad4;
        checkMissing(bad5);
        return bad5;
      };
      r78 = dyn gettextf("formal arguments (%s) omitted in the method definition cannot be in the signature", p11);
      return r78;
    };
    r80 = dyn stop1[, , `call.`, domain](p10, p12, TRUE, NA_LGL);
    check L121() else D40();
  L131():
    dr14 = tryDispatchBuiltin.0("[<-", l, "missing");
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L133() else L132("missing", dr14);
  L132(r99, l2):
    omittedSig10 = ld omittedSig;
    check L134() else D46();
  L142():
    n2 = ld n;
    check L143() else D51();
  D40():
    deopt 167 [r80];
  D46():
    deopt 188 [r99, l2, "missing", omittedSig10];
  D51():
    deopt 206 [n2];
  D52():
    deopt 214 [n4];
  L121():
    goto L27();
  L133():
    dx15 = getTryDispatchBuiltinValue(dr14);
    goto L30("missing", dx15);
  L134():
    omittedSig11 = force? omittedSig10;
    ___ = ldf `[<-` in base;
    r102 = dyn ___(l2, "missing", omittedSig11);
    goto L30(r99, r102);
  L143():
    n3 = force? n2;
    checkMissing(n3);
    r109 = `-`(n3, 1);
    st n = r109;
    goto L33();
  L145():
    n5 = force? n4;
    checkMissing(n5);
    l3 = ld signature;
    length__ = ldf `length<-`;
    check L146() else D53();
  D53():
    deopt 217 [n5, l3, n5];
  L146():
    r110 = dyn length__(l3, NULL, n5);
    check L147() else D54();
  D54():
    deopt 219 [n5, r110];
  L147():
    st signature = r110;
    n6 = ld n;
    check L148() else D55();
  D55():
    deopt 221 [n6];
  L148():
    n7 = force? n6;
    checkMissing(n7);
    l4 = ld fsig;
    length__1 = ldf `length<-`;
    check L149() else D56();
  D56():
    deopt 224 [n7, l4, n7];
  L149():
    r111 = dyn length__1(l4, NULL, n7);
    check L150() else D57();
  D57():
    deopt 226 [n7, r111];
  L150():
    st fsig = r111;
    setNames = ldf setNames;
    check L151() else D58();
  D58():
    deopt 229 [];
  L151():
    p20 = prom<V +>{
      signature27 = ld signature;
      signature28 = force? signature27;
      checkMissing(signature28);
      return signature28;
    };
    p21 = prom<V +>{
      fsig = ld fsig;
      fsig1 = force? fsig;
      checkMissing(fsig1);
      return fsig1;
    };
    r114 = dyn setNames(p20, p21);
    check L152() else D59();
  D59():
    deopt 232 [r114];
  L152():
    popenv;
    return r114;
  }
}