fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3501740346;
    st analyze_licenses = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3501740346(x, db) {
  (reg x:*, reg db:*) -+> V { var x:*, var db:*, reg db_isMissing:L, reg db_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg as_character:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg x3:*, reg x4:V, reg length:cls, reg r5:V, reg r6:V, reg c:L, reg unique:cls, reg x5:*, reg x6:V, reg p:p(V +), reg r10:V, reg as_data_frame:cls, reg do_call:cls, reg rbind:*, reg rbind1:V, reg p1:p(V +), reg lapply:cls, reg v:*, reg v1:V, reg p2:p(V +), reg analyze_license:*, reg analyze_license1:V, reg p3:p(V +), reg r14:V, reg p4:p(V +), reg r16:V, reg p5:p(V +), reg r18:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg r20:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg c1:cls, reg r23:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg r25:V, reg out:*, reg out1:V, reg names:cls, reg r26:V, reg match:cls, reg r27:V, reg lapply1:cls, reg out2:*, reg out3:V, reg c2:L, reg out5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg pos:*, reg pos1:V, reg __:cls, reg r28:V, reg p6:p(V +), reg unlist:*, reg unlist1:V, reg p7:p(V +), reg r31:V, reg l:*, reg c3:L, reg r33:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg pos2:*, reg pos3:V, reg ___:cls, reg r36:V, reg out6:*, reg out7:V, reg c4:L, reg out9:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r37:V, reg r38:V, reg x7:*, reg x8:V, reg v2:*, reg v3:V, reg match1:cls, reg r39:V, reg __1:cls, reg r40:V, reg l3:*, reg rownames__:cls, reg r41:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r42:V, reg r43:V, reg db1:*, reg db2:V, reg c5:V, reg r44:V, reg c6:L, reg colnames:cls, reg db3:*, reg db4:V, reg p8:p(V +), reg r46:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r47:V, reg r48:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r49:V, reg r50:V, reg cnms:*, reg cnms1:V, reg match2:cls, reg r51:V, reg is_na:cls, reg r52:V, reg r53:V, reg c7:L, reg db5:*, reg db6:V, reg c8:L, reg db8:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg pos4:*, reg pos5:V, reg __2:cls, reg r54:V, reg which:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r55:V, reg r56:V, reg lif:*, reg lif1:V, reg is_na1:cls, reg r57:V, reg r58:V, reg p9:p(V +), reg r60:V, reg lif2:*, reg lif3:V, reg c9:L, reg lif5:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg pos6:*, reg pos7:V, reg __3:cls, reg r61:V, reg r62:V, reg l4:*, reg c10:L, reg r65:V, reg l7:*, reg r66:V, reg l8:*, reg dr10:V, reg dc5:L, reg dx10:V, reg r69:V, reg l10:*, reg r70:V, reg dx11:V, reg r71:V, reg c11:L, reg r73:V, reg l12:*, reg dx13:V, reg dr12:V, reg dc6:L, reg dx14:V, reg r75:V, reg l14:*, reg dx15:V, reg pos8:*, reg pos9:V, reg ___1:cls, reg r76:V, reg c12:L, reg r78:V, reg l16:*, reg dr14:V, reg dc7:L, reg dx16:V, reg r80:V, reg dx17:V, reg r81:V, reg l17:*, reg c13:L, reg r84:V, reg l20:*, reg r85:V, reg l21:*, reg dr16:V, reg dc8:L, reg dx18:V, reg r88:V, reg l23:*, reg r89:V, reg dx19:V, reg r90:V, reg c14:L, reg r92:V, reg l25:*, reg dx21:V, reg dr18:V, reg dc9:L, reg dx22:V, reg r94:V, reg l27:*, reg dx23:V, reg pos10:*, reg pos11:V, reg ___2:cls, reg r95:V, reg c15:L, reg r97:V, reg l29:*, reg dr20:V, reg dc10:L, reg dx24:V, reg dx25:V, reg r100:V, reg pos12:*, reg pos13:V, reg c16:L, reg pos15:V, reg dr22:V, reg dc11:L, reg dx26:V, reg dx27:V, reg lif6:*, reg lif7:V, reg c17:L, reg pos17:V, reg lif9:V, reg dr24:V, reg dc12:L, reg dx28:V, reg pos19:V, reg dx29:V, reg pos20:*, reg pos21:V, reg __4:cls, reg r101:V, reg r102:V, reg __5:cls, reg r103:V, reg l30:*, reg c18:L, reg r106:L, reg l33:*, reg r107:L, reg l34:*, reg dr26:V, reg dc13:L, reg dx30:V, reg r110:L, reg l36:*, reg r111:L, reg dx31:V, reg r112:V, reg c19:L, reg r114:L, reg l38:*, reg dx33:V, reg dr28:V, reg dc14:L, reg dx34:V, reg r116:L, reg l40:*, reg dx35:V, reg pos22:*, reg pos23:V, reg ___3:cls, reg r117:V, reg c20:L, reg r119:L, reg l42:*, reg dr30:V, reg dc15:L, reg dx36:V, reg r121:L, reg dx37:V, reg r122:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r124:V, reg r125:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r126:V, reg r127:V, reg cnms2:*, reg cnms3:V, reg match3:cls, reg r128:V, reg is_na2:cls, reg r129:V, reg r130:V, reg c21:L, reg db9:*, reg db10:V, reg c22:L, reg db12:V, reg dr32:V, reg dc16:L, reg dx38:V, reg dx39:V, reg pos24:*, reg pos25:V, reg __6:cls, reg r131:V, reg which1:cls, reg sym12:cls, reg base12:cls, reg guard12:L, reg r132:V, reg r133:V, reg lru:*, reg lru1:V, reg is_na3:cls, reg r134:V, reg r135:V, reg p10:p(V +), reg r137:V, reg lru2:*, reg lru3:V, reg c23:L, reg lru5:V, reg dr34:V, reg dc17:L, reg dx40:V, reg dx41:V, reg pos26:*, reg pos27:V, reg __7:cls, reg r138:V, reg r139:V, reg l43:*, reg c24:L, reg r142:V, reg l46:*, reg r143:V, reg l47:*, reg dr36:V, reg dc18:L, reg dx42:V, reg r146:V, reg l49:*, reg r147:V, reg dx43:V, reg r148:V, reg c25:L, reg r150:V, reg l51:*, reg dx45:V, reg dr38:V, reg dc19:L, reg dx46:V, reg r152:V, reg l53:*, reg dx47:V, reg pos28:*, reg pos29:V, reg ___4:cls, reg r153:V, reg c26:L, reg r155:V, reg l55:*, reg dr40:V, reg dc20:L, reg dx48:V, reg dx49:V, reg r158:V, reg pos30:*, reg pos31:V, reg c27:L, reg pos33:V, reg dr42:V, reg dc21:L, reg dx50:V, reg dx51:V, reg lru6:*, reg lru7:V, reg c28:L, reg pos35:V, reg lru9:V, reg dr44:V, reg dc22:L, reg dx52:V, reg pos37:V, reg dx53:V, reg pos38:*, reg pos39:V, reg __8:cls, reg r159:V, reg r160:V, reg __9:cls, reg r161:V, reg l56:*, reg c29:L, reg r164:L, reg l59:*, reg r165:L, reg l60:*, reg dr46:V, reg dc23:L, reg dx54:V, reg r168:L, reg l62:*, reg r169:L, reg dx55:V, reg r170:V, reg c30:L, reg r172:L, reg l64:*, reg dx57:V, reg dr48:V, reg dc24:L, reg dx58:V, reg r174:L, reg l66:*, reg dx59:V, reg pos40:*, reg pos41:V, reg ___5:cls, reg r175:V, reg c31:L, reg r177:L, reg l68:*, reg dr50:V, reg dc25:L, reg dx60:V, reg r179:L, reg dx61:V, reg r180:V, reg l69:*, reg c32:L, reg r183:L, reg l72:*, reg r184:L, reg l73:*, reg dr52:V, reg dc26:L, reg dx62:V, reg r187:L, reg l75:*, reg r188:L, reg dx63:V, reg r189:V, reg c33:L, reg r191:L, reg l77:*, reg dx65:V, reg dr54:V, reg dc27:L, reg dx66:V, reg r193:L, reg l79:*, reg dx67:V, reg pos42:*, reg pos43:V, reg ___6:cls, reg r194:V, reg c34:L, reg r196:L, reg l81:*, reg dr56:V, reg dc28:L, reg dx68:V, reg r198:L, reg dx69:V, reg r199:V, reg r200:V, reg out13:*, reg out14:V |
    mkenv;
    st x = x;
    db_isMissing = missing.0(db);
    if db_isMissing then L0(NULL) else L0(db);
  L0(db_orDefault):
    st db = db_orDefault;
    sym = ldf `as.character`;
    base = ldf `as.character` in base;
    guard = `==`.4(sym, base);
    if guard then L36() else L37();
  L1(r1):
    st x = r1;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L40() else L41();
  L36():
    x1 = ld x;
    check L38() else D0();
  L37():
    r = dyn base(<sym x>);
    goto L1(r);
  D0():
    deopt 2 [x1];
  L2(r4):
    r6 = `!`(r4);
    c = `as.logical`(r6);
    if c then L44() else L3();
  L38():
    x2 = force? x1;
    checkMissing(x2);
    as_character = ldf `as.character` in base;
    r2 = dyn as_character(x2);
    check L39() else D1();
  L40():
    x3 = ld x;
    check L42() else D2();
  L41():
    r3 = dyn base1(<sym x>);
    goto L2(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [x3];
  L3():
    unique = ldf unique;
    check L47() else D4();
  L39():
    goto L1(r2);
  L42():
    x4 = force? x3;
    checkMissing(x4);
    length = ldf length in base;
    r5 = dyn length(x4);
    check L43() else D3();
  L44():
    popenv;
    return NULL;
  D3():
    deopt 12 [r5];
  D4():
    deopt 20 [];
  L43():
    goto L2(r5);
  L47():
    p = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r10 = dyn unique(p);
    check L48() else D5();
  D5():
    deopt 22 [r10];
  L48():
    st v = r10;
    as_data_frame = ldf `as.data.frame`;
    check L49() else D6();
  D6():
    deopt 25 [];
  L49():
    p5 = prom<V +>{
      do_call = ldf `do.call`;
      p1 = prom<V +>{
        rbind = ld rbind;
        rbind1 = force? rbind;
        checkMissing(rbind1);
        return rbind1;
      };
      p4 = prom<V +>{
        lapply = ldf lapply;
        p2 = prom<V +>{
          v = ld v;
          v1 = force? v;
          checkMissing(v1);
          return v1;
        };
        p3 = prom<V +>{
          analyze_license = ld analyze_license;
          analyze_license1 = force? analyze_license;
          checkMissing(analyze_license1);
          return analyze_license1;
        };
        r14 = dyn lapply(p2, p3);
        return r14;
      };
      r16 = dyn do_call(p1, p4);
      return r16;
    };
    r18 = dyn as_data_frame[, stringsAsFactors](p5, FALSE);
    check L50() else D7();
  D7():
    deopt 29 [r18];
  L50():
    st out = r18;
    sym2 = ldf match;
    base2 = ldf match in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L51() else L52();
  L5(r20):
    st pos = r20;
    lapply1 = ldf lapply;
    check L61() else D12();
  L51():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L53() else L54();
  L52():
    r19 = dyn base2(<lang c("is_empty", "is_canonical", "is_standardizable", "is_verified", "standardization", "is_FOSS", "restricts_use")>, <lang names(out)>);
    goto L5(r19);
  D12():
    deopt 56 [];
  L6(r22):
    sym4 = ldf names;
    base4 = ldf names in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L56() else L57();
  L53():
    c1 = ldf c in base;
    r23 = dyn c1("is_empty", "is_canonical", "is_standardizable", "is_verified", "standardization", "is_FOSS", "restricts_use");
    check L55() else D8();
  L54():
    r21 = dyn base3("is_empty", "is_canonical", "is_standardizable", "is_verified", "standardization", "is_FOSS", "restricts_use");
    goto L6(r21);
  L61():
    p6 = prom<V +>{
      out2 = ld out;
      out3 = force? out2;
      checkMissing(out3);
      c2 = `is.object`(out3);
      if c2 then L1() else L2(out3);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", out3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(out5):
      pos = ld pos;
      pos1 = force? pos;
      __ = ldf `[` in base;
      r28 = dyn __(out5, pos1);
      goto L0(r28);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p7 = prom<V +>{
      unlist = ld unlist;
      unlist1 = force? unlist;
      checkMissing(unlist1);
      return unlist1;
    };
    r31 = dyn lapply1(p6, p7);
    check L62() else D13();
  D8():
    deopt 43 [r23];
  D13():
    deopt 59 [r31];
  L7(r25):
    match = ldf match in base;
    r27 = dyn match(r22, r25, NA_INT, NULL);
    check L60() else D11();
  L55():
    goto L6(r23);
  L56():
    out = ld out;
    check L58() else D9();
  L57():
    r24 = dyn base4(<sym out>);
    goto L7(r24);
  L62():
    l = ld out;
    c3 = `is.object`(l);
    if c3 then L63() else L64(r31, l);
  D9():
    deopt 46 [out];
  D11():
    deopt 53 [r27];
  L8(dx3):
    st out = dx3;
    out6 = ld out;
    check L67() else D15();
  L58():
    out1 = force? out;
    checkMissing(out1);
    names = ldf names in base;
    r26 = dyn names(out1);
    check L59() else D10();
  L60():
    goto L5(r27);
  L63():
    dr2 = tryDispatchBuiltin.0("[<-", l, r31);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L65() else L64(r31, dr2);
  L64(r33, l2):
    pos2 = ld pos;
    check L66() else D14();
  D10():
    deopt 49 [r26];
  D14():
    deopt 61 [r33, l2, r31, pos2];
  D15():
    deopt 65 [out6];
  L59():
    goto L7(r26);
  L65():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L8(dx2);
  L66():
    pos3 = force? pos2;
    ___ = ldf `[<-` in base;
    r36 = dyn ___(l2, r31, pos3);
    goto L8(r36);
  L67():
    out7 = force? out6;
    checkMissing(out7);
    c4 = `is.object`(out7);
    if c4 then L68() else L69(out7);
  L9(dx5):
    st out = dx5;
    l3 = ld out;
    rownames__ = ldf `rownames<-`;
    check L76() else D19();
  L68():
    dr4 = tryDispatchBuiltin.1("[", out7);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L70() else L69(dr4);
  L69(out9):
    sym5 = ldf match;
    base5 = ldf match in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L71() else L72();
  D19():
    deopt 84 [NULL, l3, NULL];
  L10(r38):
    __1 = ldf `[` in base;
    r40 = dyn __1(out7, r38, <missing>);
    goto L9(r40);
  L70():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L9(dx4);
  L71():
    x7 = ld x;
    check L73() else D16();
  L72():
    r37 = dyn base5(<sym x>, <sym v>);
    goto L10(r37);
  L76():
    r41 = dyn rownames__(l3, NULL, NULL);
    check L77() else D20();
  D16():
    deopt 69 [out9, x7];
  D20():
    deopt 86 [NULL, r41];
  L73():
    x8 = force? x7;
    checkMissing(x8);
    v2 = ld v;
    check L74() else D17();
  L77():
    st out = r41;
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L78() else L79();
  D17():
    deopt 71 [out9, v2];
  L11(r43):
    r44 = `!`(r43);
    c6 = `as.logical`(r44);
    if c6 then L81() else L12();
  L74():
    v3 = force? v2;
    checkMissing(v3);
    match1 = ldf match in base;
    r39 = dyn match1(x8, v3, NA_INT, NULL);
    check L75() else D18();
  L78():
    db1 = ld db;
    check L80() else D21();
  L79():
    r42 = dyn base6(<sym db>);
    goto L11(r42);
  D18():
    deopt 76 [out9, r39];
  D21():
    deopt 89 [db1];
  L12():
    goto L35();
  L35():
    out13 = ld out;
    check L217() else D54();
  L75():
    goto L10(r39);
  L80():
    db2 = force? db1;
    checkMissing(db2);
    c5 = `==`(db2, NULL);
    goto L11(c5);
  L81():
    colnames = ldf colnames;
    check L82() else D22();
  D22():
    deopt 94 [];
  D54():
    deopt 254 [out13];
  L82():
    p8 = prom<V +>{
      db3 = ld db;
      db4 = force? db3;
      checkMissing(db4);
      return db4;
    };
    r46 = dyn colnames(p8);
    check L83() else D23();
  L217():
    out14 = force? out13;
    checkMissing(out14);
    popenv;
    return out14;
  D23():
    deopt 96 [r46];
  L83():
    st cnms = r46;
    sym7 = ldf `is.na`;
    base7 = ldf `is.na` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L84() else L85();
  L13(r48):
    r53 = `!`(r48);
    c7 = `as.logical`(r53);
    if c7 then L91() else L15();
  L84():
    sym8 = ldf match;
    base8 = ldf match in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L86() else L87();
  L85():
    r47 = dyn base7(<lang `<-`(pos, match("License_is_FOSS", cnms))>);
    goto L13(r47);
  L14(r50):
    st pos = r50;
    is_na = ldf `is.na` in base;
    r52 = dyn is_na(r50);
    check L90() else D26();
  L15():
    goto L23();
  L23():
    sym10 = ldf `is.na`;
    base10 = ldf `is.na` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L150() else L151();
  L86():
    cnms = ld cnms;
    check L88() else D24();
  L87():
    r49 = dyn base8("License_is_FOSS", <sym cnms>);
    goto L14(r49);
  L91():
    db5 = ld db;
    check L92() else D27();
  D24():
    deopt 103 [cnms];
  D26():
    deopt 111 [r52];
  D27():
    deopt 113 [db5];
  L24(r125):
    r130 = `!`(r125);
    c21 = `as.logical`(r130);
    if c21 then L157() else L26();
  L88():
    cnms1 = force? cnms;
    checkMissing(cnms1);
    match2 = ldf match in base;
    r51 = dyn match2("License_is_FOSS", cnms1, NA_INT, NULL);
    check L89() else D25();
  L90():
    goto L13(r52);
  L92():
    db6 = force? db5;
    checkMissing(db6);
    c8 = `is.object`(db6);
    if c8 then L93() else L94(db6);
  L150():
    sym11 = ldf match;
    base11 = ldf match in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L152() else L153();
  L151():
    r124 = dyn base10(<lang `<-`(pos, match("License_restricts_use", cnms))>);
    goto L24(r124);
  D25():
    deopt 108 [r51];
  L16(dx7):
    st lif = dx7;
    which = ldf which;
    check L97() else D29();
  L25(r127):
    st pos = r127;
    is_na2 = ldf `is.na` in base;
    r129 = dyn is_na2(r127);
    check L156() else D41();
  L26():
    goto L34(NULL);
  L34(r200):
    goto L35();
  L89():
    goto L14(r51);
  L93():
    dr6 = tryDispatchBuiltin.1("[", db6);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L95() else L94(dr6);
  L94(db8):
    pos4 = ld pos;
    check L96() else D28();
  L152():
    cnms2 = ld cnms;
    check L154() else D39();
  L153():
    r126 = dyn base11("License_restricts_use", <sym cnms>);
    goto L25(r126);
  L157():
    db9 = ld db;
    check L158() else D42();
  D28():
    deopt 116 [db8, pos4];
  D29():
    deopt 122 [];
  D39():
    deopt 180 [cnms2];
  D41():
    deopt 188 [r129];
  D42():
    deopt 190 [db9];
  L95():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L16(dx6);
  L96():
    pos5 = force? pos4;
    __2 = ldf `[` in base;
    r54 = dyn __2(db6, <missing>, pos5);
    goto L16(r54);
  L97():
    p9 = prom<V +>{
      sym9 = ldf `is.na`;
      base9 = ldf `is.na` in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r56):
      r58 = `!`(r56);
      return r58;
    L1():
      lif = ld lif;
      lif1 = force? lif;
      checkMissing(lif1);
      is_na1 = ldf `is.na` in base;
      r57 = dyn is_na1(lif1);
      goto L0(r57);
    L2():
      r55 = dyn base9(<sym lif>);
      goto L0(r55);
    };
    r60 = dyn which(p9);
    check L98() else D30();
  L154():
    cnms3 = force? cnms2;
    checkMissing(cnms3);
    match3 = ldf match in base;
    r128 = dyn match3("License_restricts_use", cnms3, NA_INT, NULL);
    check L155() else D40();
  L156():
    goto L24(r129);
  L158():
    db10 = force? db9;
    checkMissing(db10);
    c22 = `is.object`(db10);
    if c22 then L159() else L160(db10);
  D30():
    deopt 124 [r60];
  D40():
    deopt 185 [r128];
  L27(dx39):
    st lru = dx39;
    which1 = ldf which;
    check L163() else D44();
  L98():
    st pos = r60;
    lif2 = ld lif;
    check L99() else D31();
  L155():
    goto L25(r128);
  L159():
    dr32 = tryDispatchBuiltin.1("[", db10);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L161() else L160(dr32);
  L160(db12):
    pos24 = ld pos;
    check L162() else D43();
  D31():
    deopt 126 [lif2];
  D43():
    deopt 193 [db12, pos24];
  D44():
    deopt 199 [];
  L99():
    lif3 = force? lif2;
    checkMissing(lif3);
    c9 = `is.object`(lif3);
    if c9 then L100() else L101(lif3);
  L161():
    dx38 = getTryDispatchBuiltinValue(dr32);
    goto L27(dx38);
  L162():
    pos25 = force? pos24;
    __6 = ldf `[` in base;
    r131 = dyn __6(db10, <missing>, pos25);
    goto L27(r131);
  L163():
    p10 = prom<V +>{
      sym12 = ldf `is.na`;
      base12 = ldf `is.na` in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L1() else L2();
    L0(r133):
      r135 = `!`(r133);
      return r135;
    L1():
      lru = ld lru;
      lru1 = force? lru;
      checkMissing(lru1);
      is_na3 = ldf `is.na` in base;
      r134 = dyn is_na3(lru1);
      goto L0(r134);
    L2():
      r132 = dyn base12(<sym lru>);
      goto L0(r132);
    };
    r137 = dyn which1(p10);
    check L164() else D45();
  D45():
    deopt 201 [r137];
  L17(dx9):
    r62 = `==`(dx9, "yes");
    l4 = ld out;
    c10 = `is.object`(l4);
    if c10 then L105() else L106(r62, l4, r62, l4);
  L100():
    dr8 = tryDispatchBuiltin.1("[", lif3);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L102() else L101(dr8);
  L101(lif5):
    pos6 = ld pos;
    check L103() else D32();
  L164():
    st pos = r137;
    lru2 = ld lru;
    check L165() else D46();
  D32():
    deopt 128 [lif5, pos6];
  D46():
    deopt 203 [lru2];
  L102():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L17(dx8);
  L103():
    pos7 = force? pos6;
    __3 = ldf `[` in base;
    r61 = dyn __3(lif5, pos7);
    goto L17(r61);
  L104(r69, l10, r70, dx11):
    c11 = `is.object`(dx11);
    if c11 then L108() else L109(r69, l10, dx11);
  L105():
    dr10 = tryDispatchBuiltin.1("$", l4);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L107() else L106(r62, l4, r62, dr10);
  L106(r65, l7, r66, l8):
    r71 = `$`(l8, <sym is_verified>);
    goto L104(r65, l7, r66, r71);
  L165():
    lru3 = force? lru2;
    checkMissing(lru3);
    c23 = `is.object`(lru3);
    if c23 then L166() else L167(lru3);
  L18(r75, l14, dx15):
    c12 = `is.object`(l14);
    if c12 then L113() else L114(r75, l14);
  L28(dx41):
    r139 = `==`(dx41, "yes");
    l43 = ld out;
    c24 = `is.object`(l43);
    if c24 then L171() else L172(r139, l43, r139, l43);
  L107():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L104(r62, l4, r62, dx10);
  L108():
    dr12 = tryDispatchBuiltin.0("[<-", dx11, r70);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L110() else L109(r69, l10, dr12);
  L109(r73, l12, dx13):
    pos8 = ld pos;
    check L111() else D33();
  L166():
    dr34 = tryDispatchBuiltin.1("[", lru3);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L168() else L167(dr34);
  L167(lru5):
    pos26 = ld pos;
    check L169() else D47();
  D33():
    deopt 137 [r73, l12, dx13, r70, pos8];
  D47():
    deopt 205 [lru5, pos26];
  L110():
    dx14 = getTryDispatchBuiltinValue(dr12);
    goto L18(r69, l10, dx14);
  L111():
    pos9 = force? pos8;
    ___1 = ldf `[<-` in base;
    r76 = dyn ___1(dx13, r70, pos9);
    goto L18(r73, l12, r76);
  L112(r80, dx17):
    st out = dx17;
    l17 = ld out;
    c13 = `is.object`(l17);
    if c13 then L117() else L118(r80, l17, r80, l17);
  L113():
    dr14 = tryDispatchBuiltin.0("$<-", l14, dx15);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L115() else L114(r75, dr14);
  L114(r78, l16):
    r81 = `$<-`(l16, <sym is_verified>, dx15);
    goto L112(r78, r81);
  L168():
    dx40 = getTryDispatchBuiltinValue(dr34);
    goto L28(dx40);
  L169():
    pos27 = force? pos26;
    __7 = ldf `[` in base;
    r138 = dyn __7(lru5, pos27);
    goto L28(r138);
  L170(r146, l49, r147, dx43):
    c25 = `is.object`(dx43);
    if c25 then L174() else L175(r146, l49, dx43);
  L171():
    dr36 = tryDispatchBuiltin.1("$", l43);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L173() else L172(r139, l43, r139, dr36);
  L172(r142, l46, r143, l47):
    r148 = `$`(l47, <sym restricts_use>);
    goto L170(r142, l46, r143, r148);
  L29(r152, l53, dx47):
    c26 = `is.object`(l53);
    if c26 then L179() else L180(r152, l53);
  L115():
    dx16 = getTryDispatchBuiltinValue(dr14);
    goto L112(r75, dx16);
  L116(r88, l23, r89, dx19):
    c14 = `is.object`(dx19);
    if c14 then L120() else L121(r88, l23, dx19);
  L117():
    dr16 = tryDispatchBuiltin.1("$", l17);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L119() else L118(r80, l17, r80, dr16);
  L118(r84, l20, r85, l21):
    r90 = `$`(l21, <sym is_FOSS>);
    goto L116(r84, l20, r85, r90);
  L173():
    dx42 = getTryDispatchBuiltinValue(dr36);
    goto L170(r139, l43, r139, dx42);
  L174():
    dr38 = tryDispatchBuiltin.0("[<-", dx43, r147);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L176() else L175(r146, l49, dr38);
  L175(r150, l51, dx45):
    pos28 = ld pos;
    check L177() else D48();
  D48():
    deopt 214 [r150, l51, dx45, r147, pos28];
  L19(r94, l27, dx23):
    c15 = `is.object`(l27);
    if c15 then L125() else L126(r94, l27);
  L119():
    dx18 = getTryDispatchBuiltinValue(dr16);
    goto L116(r80, l17, r80, dx18);
  L120():
    dr18 = tryDispatchBuiltin.0("[<-", dx19, r89);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L122() else L121(r88, l23, dr18);
  L121(r92, l25, dx21):
    pos10 = ld pos;
    check L123() else D34();
  L176():
    dx46 = getTryDispatchBuiltinValue(dr38);
    goto L29(r146, l49, dx46);
  L177():
    pos29 = force? pos28;
    ___4 = ldf `[<-` in base;
    r153 = dyn ___4(dx45, r147, pos29);
    goto L29(r150, l51, r153);
  L178(dx49):
    st out = dx49;
    pos30 = ld pos;
    check L182() else D49();
  L179():
    dr40 = tryDispatchBuiltin.0("$<-", l53, dx47);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L181() else L180(r152, dr40);
  L180(r155, l55):
    r158 = `$<-`(l55, <sym restricts_use>, dx47);
    goto L178(r158);
  D34():
    deopt 146 [r92, l25, dx21, r89, pos10];
  D49():
    deopt 219 [pos30];
  L122():
    dx22 = getTryDispatchBuiltinValue(dr18);
    goto L19(r88, l23, dx22);
  L123():
    pos11 = force? pos10;
    ___2 = ldf `[<-` in base;
    r95 = dyn ___2(dx21, r89, pos11);
    goto L19(r92, l25, r95);
  L124(dx25):
    st out = dx25;
    pos12 = ld pos;
    check L128() else D35();
  L125():
    dr20 = tryDispatchBuiltin.0("$<-", l27, dx23);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L127() else L126(r94, dr20);
  L126(r97, l29):
    r100 = `$<-`(l29, <sym is_FOSS>, dx23);
    goto L124(r100);
  L181():
    dx48 = getTryDispatchBuiltinValue(dr40);
    goto L178(dx48);
  L182():
    pos31 = force? pos30;
    checkMissing(pos31);
    c27 = `is.object`(pos31);
    if c27 then L183() else L184(pos31);
  D35():
    deopt 151 [pos12];
  L30(dx51):
    st pos = dx51;
    l56 = ld out;
    c29 = `is.object`(l56);
    if c29 then L192() else L193(FALSE, l56, FALSE, l56);
  L127():
    dx24 = getTryDispatchBuiltinValue(dr20);
    goto L124(dx24);
  L128():
    pos13 = force? pos12;
    checkMissing(pos13);
    c16 = `is.object`(pos13);
    if c16 then L129() else L130(pos13);
  L183():
    dr42 = tryDispatchBuiltin.1("[", pos31);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L185() else L184(dr42);
  L184(pos33):
    lru6 = ld lru;
    check L186() else D50();
  D50():
    deopt 221 [pos33, lru6];
  L20(dx27):
    st pos = dx27;
    l30 = ld out;
    c18 = `is.object`(l30);
    if c18 then L138() else L139(FALSE, l30, FALSE, l30);
  L129():
    dr22 = tryDispatchBuiltin.1("[", pos13);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L131() else L130(dr22);
  L130(pos15):
    lif6 = ld lif;
    check L132() else D36();
  L185():
    dx50 = getTryDispatchBuiltinValue(dr42);
    goto L30(dx50);
  L186():
    lru7 = force? lru6;
    checkMissing(lru7);
    c28 = `is.object`(lru7);
    if c28 then L187() else L188(pos33, lru7);
  L191(r168, l62, r169, dx55):
    c30 = `is.object`(dx55);
    if c30 then L195() else L196(r168, l62, dx55);
  L192():
    dr46 = tryDispatchBuiltin.1("$", l56);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L194() else L193(FALSE, l56, FALSE, dr46);
  L193(r164, l59, r165, l60):
    r170 = `$`(l60, <sym is_verified>);
    goto L191(r164, l59, r165, r170);
  D36():
    deopt 153 [pos15, lif6];
  L31(pos37, dx53):
    r160 = `==`(dx53, "yes");
    __9 = ldf `[` in base;
    r161 = dyn __9(pos37, r160);
    goto L30(r161);
  L32(r174, l66, dx59):
    c31 = `is.object`(l66);
    if c31 then L200() else L201(r174, l66);
  L131():
    dx26 = getTryDispatchBuiltinValue(dr22);
    goto L20(dx26);
  L132():
    lif7 = force? lif6;
    checkMissing(lif7);
    c17 = `is.object`(lif7);
    if c17 then L133() else L134(pos15, lif7);
  L137(r110, l36, r111, dx31):
    c19 = `is.object`(dx31);
    if c19 then L141() else L142(r110, l36, dx31);
  L138():
    dr26 = tryDispatchBuiltin.1("$", l30);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L140() else L139(FALSE, l30, FALSE, dr26);
  L139(r106, l33, r107, l34):
    r112 = `$`(l34, <sym restricts_use>);
    goto L137(r106, l33, r107, r112);
  L187():
    dr44 = tryDispatchBuiltin.1("[", lru7);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L189() else L188(pos33, dr44);
  L188(pos35, lru9):
    pos38 = ld pos;
    check L190() else D51();
  L194():
    dx54 = getTryDispatchBuiltinValue(dr46);
    goto L191(FALSE, l56, FALSE, dx54);
  L195():
    dr48 = tryDispatchBuiltin.0("[<-", dx55, r169);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L197() else L196(r168, l62, dr48);
  L196(r172, l64, dx57):
    pos40 = ld pos;
    check L198() else D52();
  D51():
    deopt 223 [pos35, lru9, pos38];
  D52():
    deopt 236 [r172, l64, dx57, r169, pos40];
  L21(pos19, dx29):
    r102 = `==`(dx29, "yes");
    __5 = ldf `[` in base;
    r103 = dyn __5(pos19, r102);
    goto L20(r103);
  L22(r116, l40, dx35):
    c20 = `is.object`(l40);
    if c20 then L146() else L147(r116, l40);
  L133():
    dr24 = tryDispatchBuiltin.1("[", lif7);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L135() else L134(pos15, dr24);
  L134(pos17, lif9):
    pos20 = ld pos;
    check L136() else D37();
  L140():
    dx30 = getTryDispatchBuiltinValue(dr26);
    goto L137(FALSE, l30, FALSE, dx30);
  L141():
    dr28 = tryDispatchBuiltin.0("[<-", dx31, r111);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L143() else L142(r110, l36, dr28);
  L142(r114, l38, dx33):
    pos22 = ld pos;
    check L144() else D38();
  L189():
    dx52 = getTryDispatchBuiltinValue(dr44);
    goto L31(pos33, dx52);
  L190():
    pos39 = force? pos38;
    __8 = ldf `[` in base;
    r159 = dyn __8(lru9, pos39);
    goto L31(pos35, r159);
  L197():
    dx58 = getTryDispatchBuiltinValue(dr48);
    goto L32(r168, l62, dx58);
  L198():
    pos41 = force? pos40;
    ___5 = ldf `[<-` in base;
    r175 = dyn ___5(dx57, r169, pos41);
    goto L32(r172, l64, r175);
  L199(r179, dx61):
    st out = dx61;
    l69 = ld out;
    c32 = `is.object`(l69);
    if c32 then L204() else L205(r179, l69, r179, l69);
  L200():
    dr50 = tryDispatchBuiltin.0("$<-", l66, dx59);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L202() else L201(r174, dr50);
  L201(r177, l68):
    r180 = `$<-`(l68, <sym is_verified>, dx59);
    goto L199(r177, r180);
  D37():
    deopt 155 [pos17, lif9, pos20];
  D38():
    deopt 168 [r114, l38, dx33, r111, pos22];
  L135():
    dx28 = getTryDispatchBuiltinValue(dr24);
    goto L21(pos15, dx28);
  L136():
    pos21 = force? pos20;
    __4 = ldf `[` in base;
    r101 = dyn __4(lif9, pos21);
    goto L21(pos17, r101);
  L143():
    dx34 = getTryDispatchBuiltinValue(dr28);
    goto L22(r110, l36, dx34);
  L144():
    pos23 = force? pos22;
    ___3 = ldf `[<-` in base;
    r117 = dyn ___3(dx33, r111, pos23);
    goto L22(r114, l38, r117);
  L145(r121, dx37):
    st out = dx37;
    goto L23();
  L146():
    dr30 = tryDispatchBuiltin.0("$<-", l40, dx35);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L148() else L147(r116, dr30);
  L147(r119, l42):
    r122 = `$<-`(l42, <sym restricts_use>, dx35);
    goto L145(r119, r122);
  L202():
    dx60 = getTryDispatchBuiltinValue(dr50);
    goto L199(r174, dx60);
  L203(r187, l75, r188, dx63):
    c33 = `is.object`(dx63);
    if c33 then L207() else L208(r187, l75, dx63);
  L204():
    dr52 = tryDispatchBuiltin.1("$", l69);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L206() else L205(r179, l69, r179, dr52);
  L205(r183, l72, r184, l73):
    r189 = `$`(l73, <sym is_FOSS>);
    goto L203(r183, l72, r184, r189);
  L33(r193, l79, dx67):
    c34 = `is.object`(l79);
    if c34 then L212() else L213(r193, l79);
  L148():
    dx36 = getTryDispatchBuiltinValue(dr30);
    goto L145(r116, dx36);
  L206():
    dx62 = getTryDispatchBuiltinValue(dr52);
    goto L203(r179, l69, r179, dx62);
  L207():
    dr54 = tryDispatchBuiltin.0("[<-", dx63, r188);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L209() else L208(r187, l75, dr54);
  L208(r191, l77, dx65):
    pos42 = ld pos;
    check L210() else D53();
  D53():
    deopt 245 [r191, l77, dx65, r188, pos42];
  L209():
    dx66 = getTryDispatchBuiltinValue(dr54);
    goto L33(r187, l75, dx66);
  L210():
    pos43 = force? pos42;
    ___6 = ldf `[<-` in base;
    r194 = dyn ___6(dx65, r188, pos43);
    goto L33(r191, l77, r194);
  L211(r198, dx69):
    st out = dx69;
    goto L34(r198);
  L212():
    dr56 = tryDispatchBuiltin.0("$<-", l79, dx67);
    dc28 = getTryDispatchBuiltinDispatched(dr56);
    if dc28 then L214() else L213(r193, dr56);
  L213(r196, l81):
    r199 = `$<-`(l81, <sym is_FOSS>, dx67);
    goto L211(r196, r199);
  L214():
    dx68 = getTryDispatchBuiltinValue(dr56);
    goto L211(r193, dx68);
  }
}