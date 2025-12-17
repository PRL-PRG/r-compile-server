fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1673544469;
    st native_routine_registration_db_from_ff_call_db = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1673544469(calls, dir, character_only) {
  (reg calls:*, reg dir:*, reg character_only:*) -+> V { var calls:*, var dir:*, reg dir_isMissing:L, reg dir_orDefault:*, var character_only:*, reg character_only_isMissing:L, reg character_only_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg calls1:*, reg calls2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg c1:cls, reg r8:V, reg lapply:cls, reg ff_call_names:*, reg ff_call_names1:V, reg p:p(V +), reg r10:cls, reg p1:p(V +), reg r12:V, reg ff_call_names2:*, reg ff_call_names3:V, reg l:*, reg names__:cls, reg r13:V, reg lapply1:cls, reg lapply2:cls, reg ff_call_args:*, reg ff_call_args1:V, reg p2:p(V +), reg r15:cls, reg p3:p(V +), reg r17:V, reg p4:p(V +), reg setdiff:*, reg setdiff1:V, reg p5:p(V +), reg r20:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r21:V, reg r22:V, reg dir1:*, reg dir2:V, reg c2:V, reg c3:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg r24:V, reg calls3:*, reg calls4:V, reg attr:cls, reg r25:V, reg as_vector:cls, reg _get_package_metadata:cls, reg dir3:*, reg dir4:V, reg p6:p(V +), reg r28:V, reg c4:L, reg r30:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r31:V, reg p7:p(V +), reg r33:V, reg character:cls, reg r34:V, reg lapply3:cls, reg calls5:*, reg calls6:V, reg p8:p(V +), reg r36:cls, reg p9:p(V +), reg r38:V, reg do_call:cls, reg rbind:*, reg rbind1:V, reg p10:p(V +), reg nrdb:*, reg nrdb1:V, reg p11:p(V +), reg r41:V, reg as_data_frame:cls, reg unique:cls, reg nrdb2:*, reg nrdb3:V, reg p12:p(V +), reg r43:V, reg p13:p(V +), reg r45:V, reg NROW:cls, reg nrdb4:*, reg nrdb5:V, reg p14:p(V +), reg r47:V, reg r48:V, reg c5:L, reg c6:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r49:V, reg c10:L, reg r50:V, reg nrdb6:*, reg nrdb7:V, reg length1:cls, reg r51:V, reg r52:V, reg c11:L, reg c12:V, reg c14:L, reg message:cls, reg r53:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r56:V, reg r57:V, reg nrdb8:*, reg nrdb9:V, reg c15:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r58:V, reg as_numeric:cls, reg r59:V, reg l1:*, reg c16:L, reg r61:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg ___:cls, reg r64:V, reg nrdb12:*, reg nrdb13:V, reg c17:L, reg nrdb15:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg order:cls, reg nrdb16:*, reg nrdb17:V, reg c18:L, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __2:cls, reg r65:V, reg p15:p(V +), reg nrdb20:*, reg nrdb21:V, reg c19:L, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __3:cls, reg r67:V, reg p16:p(V +), reg nrdb24:*, reg nrdb25:V, reg c20:L, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg __4:cls, reg r69:V, reg p17:p(V +), reg r71:V, reg __5:cls, reg r72:V, reg nrdb28:*, reg nrdb29:V, reg c21:L, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg __6:cls, reg r73:V, reg unique1:cls, reg nms:*, reg nms1:V, reg c22:L, reg nms3:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg duplicated:cls, reg nms4:*, reg nms5:V, reg p18:p(V +), reg r75:V, reg __7:cls, reg r76:V, reg p19:p(V +), reg r78:V, reg parseNamespaceFile:cls, reg basename:cls, reg dir5:*, reg dir6:V, reg p20:p(V +), reg r80:V, reg p21:p(V +), reg dirname:cls, reg dir7:*, reg dir8:V, reg p22:p(V +), reg r83:V, reg p23:p(V +), reg r85:V, reg info:*, reg info1:V, reg c23:L, reg info3:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg r86:V, reg imports:*, reg imports1:V, reg c24:L, reg imports3:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg lengths:cls, reg imports4:*, reg imports5:V, reg p24:p(V +), reg r88:V, reg r89:V, reg __8:cls, reg r90:V, reg unlist:cls, reg lapply4:cls, reg imports6:*, reg imports7:V, reg p25:p(V +), reg __9:*, reg __10:V, reg p26:p(V +), reg r93:V, reg p27:p(V +), reg r95:V, reg info4:*, reg info5:V, reg c25:L, reg info7:V, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg r96:V, reg c26:L, reg dx25:V, reg dr24:V, reg dc12:L, reg dx26:V, reg dx27:V, reg package:*, reg package1:V, reg __11:cls, reg r97:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r98:V, reg r99:V, reg info8:*, reg info9:V, reg c27:L, reg info11:V, reg dr26:V, reg dc13:L, reg dx28:V, reg dx29:V, reg r100:V, reg length2:cls, reg r101:V, reg c28:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r102:V, reg r103:V, reg nrdb32:*, reg nrdb33:V, reg c29:L, reg dr28:V, reg dc14:L, reg dx30:V, reg dx31:V, reg __12:cls, reg r104:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r105:V, reg r106:V, reg symnames:*, reg symnames1:V, reg names:cls, reg r107:V, reg match:cls, reg r108:V, reg symnames2:*, reg symnames3:V, reg c30:L, reg symnames5:V, reg dr30:V, reg dc15:L, reg dx32:V, reg dx33:V, reg ind:*, reg ind1:V, reg __13:cls, reg r109:V, reg l4:*, reg c31:L, reg dx35:V, reg l6:*, reg dr32:V, reg dc16:L, reg dx37:V, reg dx38:V, reg dx39:V, reg ind2:*, reg ind3:V, reg r110:V, reg ___1:cls, reg r111:V, reg character_only1:*, reg character_only2:V, reg r112:V, reg c32:L, reg c34:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r113:V, reg c37:L, reg r114:V, reg info12:*, reg info13:V, reg c38:L, reg c40:L, reg info15:V, reg dr34:V, reg dc17:L, reg dx41:V, reg c42:L, reg dx42:V, reg r115:V, reg r116:V, reg any:cls, reg r117:V, reg c43:L, reg c44:V, reg c46:L, reg sub:cls, reg paste0:cls, reg fixes:*, reg fixes1:V, reg c47:L, reg fixes3:V, reg dr36:V, reg dc18:L, reg dx43:V, reg dx44:V, reg __14:cls, reg r118:V, reg p28:p(V +), reg r120:V, reg p29:p(V +), reg nrdb36:*, reg nrdb37:V, reg c48:L, reg dr38:V, reg dc19:L, reg dx45:V, reg dx46:V, reg __15:cls, reg r122:V, reg p30:p(V +), reg r124:V, reg l7:*, reg c49:L, reg r126:V, reg dr40:V, reg dc20:L, reg dx47:V, reg dx48:V, reg ___2:cls, reg r129:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r130:V, reg r131:V, reg fixes4:*, reg fixes5:V, reg c50:L, reg fixes7:V, reg dr42:V, reg dc21:L, reg dx49:V, reg dx50:V, reg __16:cls, reg r132:V, reg nzchar:cls, reg r133:V, reg c51:L, reg sub1:cls, reg paste1:cls, reg fixes8:*, reg fixes9:V, reg c52:L, reg fixes11:V, reg dr44:V, reg dc22:L, reg dx51:V, reg dx52:V, reg __17:cls, reg r134:V, reg p31:p(V +), reg r136:V, reg p32:p(V +), reg nrdb40:*, reg nrdb41:V, reg c53:L, reg dr46:V, reg dc23:L, reg dx53:V, reg dx54:V, reg __18:cls, reg r138:V, reg p33:p(V +), reg r140:V, reg l10:*, reg c54:L, reg r142:V, reg dr48:V, reg dc24:L, reg dx55:V, reg r144:V, reg dx56:V, reg ___3:cls, reg r145:V, reg r146:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r147:V, reg r148:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r149:V, reg r150:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r151:V, reg r152:V, reg nrdb44:*, reg nrdb45:V, reg c55:L, reg dr50:V, reg dc25:L, reg dx57:V, reg dx58:V, reg __19:cls, reg r153:V, reg imports8:*, reg imports9:V, reg match1:cls, reg r154:V, reg is_na:cls, reg r155:V, reg r156:V, reg any1:cls, reg r157:V, reg c56:L, reg nrdb48:*, reg nrdb49:V, reg c57:L, reg nrdb51:V, reg dr52:V, reg dc26:L, reg dx59:V, reg dx60:V, reg ind4:*, reg ind5:V, reg r158:V, reg __20:cls, reg r159:V, reg nrdb52:*, reg nrdb53:V, reg c58:L, reg nrdb55:V, reg dr54:V, reg dc27:L, reg dx62:V, reg dx63:V, reg r160:V, reg r161:V, reg tolower:cls, reg nrdb56:*, reg nrdb57:V, reg c59:L, reg nrdb59:V, reg dr56:V, reg dc28:L, reg dx64:V, reg dx65:V, reg dotF:*, reg dotF1:V, reg __21:cls, reg r162:V, reg p34:p(V +), reg r164:V, reg l13:*, reg c60:L, reg r166:V, reg l15:*, reg dr58:V, reg dc29:L, reg dx66:V, reg dx67:V, reg dotF2:*, reg dotF3:V, reg ___4:cls, reg r169:V, reg package2:*, reg package3:V, reg l16:*, reg attr__:cls, reg r170:V, reg dups:*, reg dups1:V, reg l17:*, reg attr__1:cls, reg r171:V, reg unique2:cls, reg symbols:*, reg symbols1:V, reg p35:p(V +), reg r173:V, reg l18:*, reg attr__2:cls, reg r174:V, reg nrdb60:*, reg nrdb61:V |
    mkenv;
    st calls = calls;
    dir_isMissing = missing.0(dir);
    if dir_isMissing then L0(NULL) else L0(dir);
  L0(dir_orDefault):
    st dir = dir_orDefault;
    character_only_isMissing = missing.0(character_only);
    if character_only_isMissing then L1(TRUE) else L1(character_only);
  L1(character_only_orDefault):
    st character_only = character_only_orDefault;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L46() else L47();
  L2(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L50() else L3();
  L46():
    calls1 = ld calls;
    check L48() else D0();
  L47():
    r = dyn base(<sym calls>);
    goto L2(r);
  D0():
    deopt 2 [calls1];
  L3():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L53() else L54();
  L48():
    calls2 = force? calls1;
    checkMissing(calls2);
    length = ldf length in base;
    r2 = dyn length(calls2);
    check L49() else D1();
  L50():
    popenv;
    return NULL;
  D1():
    deopt 5 [r2];
  L5(r7):
    st ff_call_names = r7;
    lapply = ldf lapply;
    check L56() else D3();
  L49():
    goto L2(r2);
  L53():
    c1 = ldf c in base;
    r8 = dyn c1(".C", ".Call", ".Fortran", ".External", ".Call.graphics", ".External.graphics", ".External2");
    check L55() else D2();
  L54():
    r6 = dyn base1(".C", ".Call", ".Fortran", ".External", ".Call.graphics", ".External.graphics", ".External2");
    goto L5(r6);
  D2():
    deopt 22 [r8];
  D3():
    deopt 25 [];
  L55():
    goto L5(r8);
  L56():
    p = prom<V +>{
      ff_call_names = ld ff_call_names;
      ff_call_names1 = force? ff_call_names;
      checkMissing(ff_call_names1);
      return ff_call_names1;
    };
    p1 = prom<V +>{
      r10 = clos inner3708401697;
      return r10;
    };
    r12 = dyn lapply(p, p1);
    check L57() else D4();
  D4():
    deopt 28 [r12];
  L57():
    st ff_call_args = r12;
    ff_call_names2 = ld ff_call_names;
    check L58() else D5();
  D5():
    deopt 30 [ff_call_names2];
  L58():
    ff_call_names3 = force? ff_call_names2;
    checkMissing(ff_call_names3);
    l = ld ff_call_args;
    names__ = ldf `names<-`;
    check L59() else D6();
  D6():
    deopt 33 [ff_call_names3, l, ff_call_names3];
  L59():
    r13 = dyn names__(l, NULL, ff_call_names3);
    check L60() else D7();
  D7():
    deopt 35 [ff_call_names3, r13];
  L60():
    st ff_call_args = r13;
    lapply1 = ldf lapply;
    check L61() else D8();
  D8():
    deopt 38 [];
  L61():
    p4 = prom<V +>{
      lapply2 = ldf lapply;
      p2 = prom<V +>{
        ff_call_args = ld ff_call_args;
        ff_call_args1 = force? ff_call_args;
        checkMissing(ff_call_args1);
        return ff_call_args1;
      };
      p3 = prom<V +>{
        r15 = clos inner3708401697;
        return r15;
      };
      r17 = dyn lapply2(p2, p3);
      return r17;
    };
    p5 = prom<V +>{
      setdiff = ld setdiff;
      setdiff1 = force? setdiff;
      checkMissing(setdiff1);
      return setdiff1;
    };
    r20 = dyn lapply1(p4, p5, "...");
    check L62() else D9();
  D9():
    deopt 42 [r20];
  L62():
    st ff_call_args_names = r20;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L63() else L64();
  L6(r22):
    c3 = `as.logical`(r22);
    if c3 then L66() else L7();
  L63():
    dir1 = ld dir;
    check L65() else D10();
  L64():
    r21 = dyn base2(<sym dir>);
    goto L6(r21);
  D10():
    deopt 45 [dir1];
  L7():
    goto L9();
  L9():
    as_vector = ldf `as.vector`;
    check L72() else D13();
  L65():
    dir2 = force? dir1;
    checkMissing(dir2);
    c2 = `==`(dir2, NULL);
    goto L6(c2);
  L66():
    sym3 = ldf attr;
    base3 = ldf attr in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L67() else L68();
  D13():
    deopt 59 [];
  L8(r24):
    st dir = r24;
    goto L9();
  L67():
    calls3 = ld calls;
    check L69() else D11();
  L68():
    r23 = dyn base3(<sym calls>, "dir");
    goto L8(r23);
  L72():
    p7 = prom<V +>{
      _get_package_metadata = ldf `.get_package_metadata`;
      p6 = prom<V +>{
        dir3 = ld dir;
        dir4 = force? dir3;
        checkMissing(dir4);
        return dir4;
      };
      r28 = dyn _get_package_metadata(p6);
      c4 = `is.object`(r28);
      if c4 then L1() else L2(r28);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", r28);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(r30):
      __ = ldf `[` in base;
      r31 = dyn __(r30, "Package");
      goto L0(r31);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r33 = dyn as_vector(p7);
    check L73() else D14();
  D11():
    deopt 50 [calls3];
  D14():
    deopt 61 [r33];
  L69():
    calls4 = force? calls3;
    checkMissing(calls4);
    attr = ldf attr in base;
    r25 = dyn attr(calls4, "dir");
    check L70() else D12();
  L73():
    st package = r33;
    character = ldf character;
    check L74() else D15();
  D12():
    deopt 54 [r25];
  D15():
    deopt 64 [];
  L70():
    goto L8(r25);
  L74():
    r34 = dyn character();
    check L75() else D16();
  D16():
    deopt 65 [r34];
  L75():
    st symbols = r34;
    lapply3 = ldf lapply;
    check L76() else D17();
  D17():
    deopt 68 [];
  L76():
    p8 = prom<V +>{
      calls5 = ld calls;
      calls6 = force? calls5;
      checkMissing(calls6);
      return calls6;
    };
    p9 = prom<V +>{
      r36 = clos inner3708401697;
      return r36;
    };
    r38 = dyn lapply3(p8, p9);
    check L77() else D18();
  D18():
    deopt 71 [r38];
  L77():
    st nrdb = r38;
    do_call = ldf `do.call`;
    check L78() else D19();
  D19():
    deopt 74 [];
  L78():
    p10 = prom<V +>{
      rbind = ld rbind;
      rbind1 = force? rbind;
      checkMissing(rbind1);
      return rbind1;
    };
    p11 = prom<V +>{
      nrdb = ld nrdb;
      nrdb1 = force? nrdb;
      checkMissing(nrdb1);
      return nrdb1;
    };
    r41 = dyn do_call(p10, p11);
    check L79() else D20();
  D20():
    deopt 77 [r41];
  L79():
    st nrdb = r41;
    as_data_frame = ldf `as.data.frame`;
    check L80() else D21();
  D21():
    deopt 80 [];
  L80():
    p13 = prom<V +>{
      unique = ldf unique;
      p12 = prom<V +>{
        nrdb2 = ld nrdb;
        nrdb3 = force? nrdb2;
        checkMissing(nrdb3);
        return nrdb3;
      };
      r43 = dyn unique(p12);
      return r43;
    };
    r45 = dyn as_data_frame[, stringsAsFactors](p13, FALSE);
    check L81() else D22();
  D22():
    deopt 84 [r45];
  L81():
    st nrdb = r45;
    NROW = ldf NROW;
    check L82() else D23();
  D23():
    deopt 87 [];
  L82():
    p14 = prom<V +>{
      nrdb4 = ld nrdb;
      nrdb5 = force? nrdb4;
      checkMissing(nrdb5);
      return nrdb5;
    };
    r47 = dyn NROW(p14);
    check L83() else D24();
  D24():
    deopt 89 [r47];
  L83():
    r48 = `==`(r47, 0);
    c5 = `as.logical`(r48);
    if c5 then L10(c5) else L84();
  L10(c6):
    c14 = `as.logical`(c6);
    if c14 then L90() else L12();
  L84():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L85() else L86();
  L11(c10, r50):
    r52 = `!=`(r50, 4);
    c11 = `as.logical`(r52);
    c12 = `||`(c10, c11);
    goto L10(c12);
  L12():
    sym5 = ldf `as.numeric`;
    base5 = ldf `as.numeric` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L95() else L96();
  L85():
    nrdb6 = ld nrdb;
    check L87() else D25();
  L86():
    r49 = dyn base4(<sym nrdb>);
    goto L11(c5, r49);
  L90():
    message = ldf message;
    check L91() else D27();
  D25():
    deopt 94 [c5, nrdb6];
  D27():
    deopt 102 [];
  L14(r57):
    l1 = ld nrdb;
    c16 = `is.object`(l1);
    if c16 then L102() else L103(r57);
  L87():
    nrdb7 = force? nrdb6;
    checkMissing(nrdb7);
    length1 = ldf length in base;
    r51 = dyn length1(nrdb7);
    check L88() else D26();
  L91():
    r53 = dyn message("no native symbols were extracted");
    check L92() else D28();
  L95():
    nrdb8 = ld nrdb;
    check L97() else D29();
  L96():
    r56 = dyn base5(<lang `[`(nrdb, , 3)>);
    goto L14(r56);
  D26():
    deopt 97 [c5, r51];
  D28():
    deopt 104 [r53];
  D29():
    deopt 112 [nrdb8];
  L16(dx5):
    st nrdb = dx5;
    nrdb12 = ld nrdb;
    check L105() else D31();
  L88():
    goto L11(c5, r51);
  L92():
    popenv;
    return NULL;
  L97():
    nrdb9 = force? nrdb8;
    checkMissing(nrdb9);
    c15 = `is.object`(nrdb9);
    if c15 then L98() else L99();
  L102():
    dr4 = tryDispatchBuiltin.0("[<-", l1, r57);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L104() else L103(r57);
  L103(r61):
    ___ = ldf `[<-` in base;
    r64 = dyn ___(l1, <missing>, 3, r57);
    goto L16(r64);
  D31():
    deopt 126 [nrdb12];
  L15(dx3):
    as_numeric = ldf `as.numeric` in base;
    r59 = dyn as_numeric(dx3);
    check L101() else D30();
  L98():
    dr2 = tryDispatchBuiltin.1("[", nrdb9);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L100() else L99();
  L99():
    __1 = ldf `[` in base;
    r58 = dyn __1(nrdb9, <missing>, 3);
    goto L15(r58);
  L104():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L16(dx4);
  L105():
    nrdb13 = force? nrdb12;
    checkMissing(nrdb13);
    c17 = `is.object`(nrdb13);
    if c17 then L106() else L107(nrdb13);
  D30():
    deopt 119 [r59];
  L17(dx7):
    st nrdb = dx7;
    nrdb28 = ld nrdb;
    check L111() else D34();
  L100():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L15(dx2);
  L101():
    goto L14(r59);
  L106():
    dr6 = tryDispatchBuiltin.1("[", nrdb13);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L108() else L107(dr6);
  L107(nrdb15):
    order = ldf order;
    check L109() else D32();
  D32():
    deopt 129 [nrdb15];
  D34():
    deopt 138 [nrdb28];
  L108():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L17(dx6);
  L109():
    p15 = prom<V +>{
      nrdb16 = ld nrdb;
      nrdb17 = force? nrdb16;
      checkMissing(nrdb17);
      c18 = `is.object`(nrdb17);
      if c18 then L1() else L2();
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[", nrdb17);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2();
    L2():
      __2 = ldf `[` in base;
      r65 = dyn __2(nrdb17, <missing>, 1);
      goto L0(r65);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    p16 = prom<V +>{
      nrdb20 = ld nrdb;
      nrdb21 = force? nrdb20;
      checkMissing(nrdb21);
      c19 = `is.object`(nrdb21);
      if c19 then L1() else L2();
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("[", nrdb21);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2();
    L2():
      __3 = ldf `[` in base;
      r67 = dyn __3(nrdb21, <missing>, 2);
      goto L0(r67);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    p17 = prom<V +>{
      nrdb24 = ld nrdb;
      nrdb25 = force? nrdb24;
      checkMissing(nrdb25);
      c20 = `is.object`(nrdb25);
      if c20 then L1() else L2();
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("[", nrdb25);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2();
    L2():
      __4 = ldf `[` in base;
      r69 = dyn __4(nrdb25, <missing>, 3);
      goto L0(r69);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    r71 = dyn order(p15, p16, p17);
    check L110() else D33();
  L111():
    nrdb29 = force? nrdb28;
    checkMissing(nrdb29);
    c21 = `is.object`(nrdb29);
    if c21 then L112() else L113();
  D33():
    deopt 133 [nrdb15, r71];
  L18(dx15):
    st nms = dx15;
    unique1 = ldf unique;
    check L115() else D35();
  L110():
    __5 = ldf `[` in base;
    r72 = dyn __5(nrdb13, r71, <missing>);
    goto L17(r72);
  L112():
    dr14 = tryDispatchBuiltin.1("[", nrdb29);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L114() else L113();
  L113():
    __6 = ldf `[` in base;
    r73 = dyn __6(nrdb29, <missing>, "s");
    goto L18(r73);
  D35():
    deopt 146 [];
  L114():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L18(dx14);
  L115():
    p19 = prom<V +>{
      nms = ld nms;
      nms1 = force? nms;
      checkMissing(nms1);
      c22 = `is.object`(nms1);
      if c22 then L1() else L2(nms1);
    L0(dx17):
      return dx17;
    L1():
      dr16 = tryDispatchBuiltin.1("[", nms1);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(nms3):
      duplicated = ldf duplicated;
      p18 = prom<V +>{
        nms4 = ld nms;
        nms5 = force? nms4;
        checkMissing(nms5);
        return nms5;
      };
      r75 = dyn duplicated(p18);
      __7 = ldf `[` in base;
      r76 = dyn __7(nms3, r75);
      goto L0(r76);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    };
    r78 = dyn unique1(p19);
    check L116() else D36();
  D36():
    deopt 148 [r78];
  L116():
    st dups = r78;
    parseNamespaceFile = ldf parseNamespaceFile;
    check L117() else D37();
  D37():
    deopt 151 [];
  L117():
    p21 = prom<V +>{
      basename = ldf basename;
      p20 = prom<V +>{
        dir5 = ld dir;
        dir6 = force? dir5;
        checkMissing(dir6);
        return dir6;
      };
      r80 = dyn basename(p20);
      return r80;
    };
    p23 = prom<V +>{
      dirname = ldf dirname;
      p22 = prom<V +>{
        dir7 = ld dir;
        dir8 = force? dir7;
        checkMissing(dir8);
        return dir8;
      };
      r83 = dyn dirname(p22);
      return r83;
    };
    r85 = dyn parseNamespaceFile(p21, p23);
    check L118() else D38();
  D38():
    deopt 154 [r85];
  L118():
    st info = r85;
    info = ld info;
    check L119() else D39();
  D39():
    deopt 156 [info];
  L119():
    info1 = force? info;
    checkMissing(info1);
    c23 = `is.object`(info1);
    if c23 then L121() else L122(info1);
  L120(dx19):
    st imports = dx19;
    imports = ld imports;
    check L124() else D40();
  L121():
    dr18 = tryDispatchBuiltin.1("$", info1);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L123() else L122(dr18);
  L122(info3):
    r86 = `$`(info3, <sym imports>);
    goto L120(r86);
  D40():
    deopt 160 [imports];
  L123():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L120(dx18);
  L124():
    imports1 = force? imports;
    checkMissing(imports1);
    c24 = `is.object`(imports1);
    if c24 then L125() else L126(imports1);
  L19(dx21):
    st imports = dx21;
    unlist = ldf unlist;
    check L130() else D43();
  L125():
    dr20 = tryDispatchBuiltin.1("[", imports1);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L127() else L126(dr20);
  L126(imports3):
    lengths = ldf lengths;
    check L128() else D41();
  D41():
    deopt 163 [imports3];
  D43():
    deopt 171 [];
  L127():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L19(dx20);
  L128():
    p24 = prom<V +>{
      imports4 = ld imports;
      imports5 = force? imports4;
      checkMissing(imports5);
      return imports5;
    };
    r88 = dyn lengths(p24);
    check L129() else D42();
  L130():
    p27 = prom<V +>{
      lapply4 = ldf lapply;
      p25 = prom<V +>{
        imports6 = ld imports;
        imports7 = force? imports6;
        checkMissing(imports7);
        return imports7;
      };
      p26 = prom<V +>{
        __9 = ld `[[`;
        __10 = force? __9;
        checkMissing(__10);
        return __10;
      };
      r93 = dyn lapply4(p25, p26, 2);
      return r93;
    };
    r95 = dyn unlist(p27);
    check L131() else D44();
  D42():
    deopt 165 [imports3, r88];
  D44():
    deopt 173 [r95];
  L129():
    r89 = `==`(r88, 2);
    __8 = ldf `[` in base;
    r90 = dyn __8(imports3, r89);
    goto L19(r90);
  L131():
    st imports = r95;
    info4 = ld info;
    check L132() else D45();
  D45():
    deopt 175 [info4];
  L132():
    info5 = force? info4;
    checkMissing(info5);
    c25 = `is.object`(info5);
    if c25 then L134() else L135(info5);
  L133(dx23):
    c26 = `is.object`(dx23);
    if c26 then L137() else L138(dx23);
  L134():
    dr22 = tryDispatchBuiltin.1("$", info5);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L136() else L135(dr22);
  L135(info7):
    r96 = `$`(info7, <sym nativeRoutines>);
    goto L133(r96);
  L20(dx27):
    st info = dx27;
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L141() else L142();
  L136():
    dx22 = getTryDispatchBuiltinValue(dr22);
    goto L133(dx22);
  L137():
    dr24 = tryDispatchBuiltin.1("[[", dx23);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L139() else L138(dr24);
  L138(dx25):
    package = ld package;
    check L140() else D46();
  D46():
    deopt 178 [dx25, package];
  L21(r99):
    c28 = `as.logical`(r99);
    if c28 then L149() else L22();
  L139():
    dx26 = getTryDispatchBuiltinValue(dr24);
    goto L20(dx26);
  L140():
    package1 = force? package;
    __11 = ldf `[[` in base;
    r97 = dyn __11(dx25, package1);
    goto L20(r97);
  L141():
    info8 = ld info;
    check L143() else D47();
  L142():
    r98 = dyn base6(<lang `<-`(symnames, `$`(info, symbolNames))>);
    goto L21(r98);
  D47():
    deopt 184 [info8];
  L22():
    character_only1 = ld character_only;
    check L171() else D56();
  L28():
    sym11 = ldf any;
    base11 = ldf any in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L203() else L204();
  L143():
    info9 = force? info8;
    checkMissing(info9);
    c27 = `is.object`(info9);
    if c27 then L145() else L146(info9);
  L149():
    sym7 = ldf match;
    base7 = ldf match in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L150() else L151();
  D56():
    deopt 222 [character_only1];
  L23(r103):
    st ind = r103;
    symnames2 = ld symnames;
    check L161() else D53();
  L38(r148):
    c56 = `as.logical`(r148);
    if c56 then L217() else L42();
  L144(dx29):
    st symnames = dx29;
    length2 = ldf length in base;
    r101 = dyn length2(dx29);
    check L148() else D48();
  L145():
    dr26 = tryDispatchBuiltin.1("$", info9);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L147() else L146(dr26);
  L146(info11):
    r100 = `$`(info11, <sym symbolNames>);
    goto L144(r100);
  L150():
    nrdb32 = ld nrdb;
    check L152() else D49();
  L151():
    r102 = dyn base7[, , nomatch](<lang `[`(nrdb, , 2)>, <lang names(symnames)>, 0);
    goto L23(r102);
  L171():
    character_only2 = force? character_only1;
    checkMissing(character_only2);
    r112 = `!`(character_only2);
    c32 = `as.logical`(r112);
    if c32 then L172() else L29(c32);
  L203():
    sym12 = ldf `is.na`;
    base12 = ldf `is.na` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L205() else L206();
  L204():
    r147 = dyn base11(<lang `<-`(ind, `!`(is.na(match(`[`(nrdb, , 2), imports))))>);
    goto L38(r147);
  D48():
    deopt 189 [r101];
  D49():
    deopt 192 [nrdb32];
  D53():
    deopt 209 [symnames2];
  L29(c34):
    c46 = `as.logical`(c34);
    if c46 then L182() else L31();
  L39(r150):
    r156 = `!`(r150);
    st ind = r156;
    any1 = ldf any in base;
    r157 = dyn any1(r156);
    check L216() else D69();
  L42():
    goto L44();
  L44():
    nrdb52 = ld nrdb;
    check L224() else D72();
  L147():
    dx28 = getTryDispatchBuiltinValue(dr26);
    goto L144(dx28);
  L148():
    goto L21(r101);
  L152():
    nrdb33 = force? nrdb32;
    checkMissing(nrdb33);
    c29 = `is.object`(nrdb33);
    if c29 then L153() else L154();
  L161():
    symnames3 = force? symnames2;
    checkMissing(symnames3);
    c30 = `is.object`(symnames3);
    if c30 then L162() else L163(symnames3);
  L172():
    sym9 = ldf any;
    base9 = ldf any in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L173() else L174();
  L205():
    sym13 = ldf match;
    base13 = ldf match in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L207() else L208();
  L206():
    r149 = dyn base12(<lang match(`[`(nrdb, , 2), imports)>);
    goto L39(r149);
  L217():
    nrdb48 = ld nrdb;
    check L218() else D70();
  D69():
    deopt 297 [r157];
  D70():
    deopt 298 [nrdb48];
  D72():
    deopt 311 [nrdb52];
  L24(dx31):
    sym8 = ldf names;
    base8 = ldf names in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L156() else L157();
  L26(dx33):
    l4 = ld nrdb;
    c31 = `is.object`(l4);
    if c31 then L166() else L167(dx33, l4);
  L30(c37, r114):
    c43 = `as.logical`(r114);
    c44 = `&&`(c37, c43);
    goto L29(c44);
  L31():
    goto L28();
  L40(r152):
    is_na = ldf `is.na` in base;
    r155 = dyn is_na(r152);
    check L215() else D68();
  L153():
    dr28 = tryDispatchBuiltin.1("[", nrdb33);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L155() else L154();
  L154():
    __12 = ldf `[` in base;
    r104 = dyn __12(nrdb33, <missing>, 2);
    goto L24(r104);
  L162():
    dr30 = tryDispatchBuiltin.1("[", symnames3);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L164() else L163(dr30);
  L163(symnames5):
    ind = ld ind;
    check L165() else D54();
  L173():
    info12 = ld info;
    check L175() else D57();
  L174():
    r113 = dyn base9(<lang `!=`(`(`(`<-`(fixes, `$`(info, registrationFixes))), "")>);
    goto L30(c32, r113);
  L182():
    sub = ldf sub;
    check L183() else D59();
  L207():
    nrdb44 = ld nrdb;
    check L209() else D65();
  L208():
    r151 = dyn base13(<lang `[`(nrdb, , 2)>, <sym imports>);
    goto L40(r151);
  L216():
    goto L38(r157);
  L218():
    nrdb49 = force? nrdb48;
    checkMissing(nrdb49);
    c57 = `is.object`(nrdb49);
    if c57 then L219() else L220(nrdb49);
  L224():
    nrdb53 = force? nrdb52;
    checkMissing(nrdb53);
    c58 = `is.object`(nrdb53);
    if c58 then L226() else L227(nrdb53);
  D54():
    deopt 211 [symnames5, ind];
  D57():
    deopt 227 [c32, info12];
  D59():
    deopt 237 [];
  D65():
    deopt 280 [nrdb44];
  D68():
    deopt 293 [r155];
  L25(r106):
    match = ldf match in base;
    r108 = dyn match(dx31, r106, 0, NULL);
    check L160() else D52();
  L27(dx38, dx39):
    st nrdb = dx39;
    goto L28();
  L43(dx60):
    st nrdb = dx60;
    goto L44();
  L155():
    dx30 = getTryDispatchBuiltinValue(dr28);
    goto L24(dx30);
  L156():
    symnames = ld symnames;
    check L158() else D50();
  L157():
    r105 = dyn base8(<sym symnames>);
    goto L25(r105);
  L164():
    dx32 = getTryDispatchBuiltinValue(dr30);
    goto L26(dx32);
  L165():
    ind1 = force? ind;
    __13 = ldf `[` in base;
    r109 = dyn __13(symnames5, ind1);
    goto L26(r109);
  L166():
    dr32 = tryDispatchBuiltin.0("[<-", l4, dx33);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L168() else L167(dx33, dr32);
  L167(dx35, l6):
    ind2 = ld ind;
    check L169() else D55();
  L175():
    info13 = force? info12;
    checkMissing(info13);
    c38 = `is.object`(info13);
    if c38 then L177() else L178(c32, info13);
  L183():
    p29 = prom<V +>{
      paste0 = ldf paste0;
      p28 = prom<V +>{
        fixes = ld fixes;
        fixes1 = force? fixes;
        checkMissing(fixes1);
        c47 = `is.object`(fixes1);
        if c47 then L1() else L2(fixes1);
      L0(dx44):
        return dx44;
      L1():
        dr36 = tryDispatchBuiltin.1("[", fixes1);
        dc18 = getTryDispatchBuiltinDispatched(dr36);
        if dc18 then L3() else L2(dr36);
      L2(fixes3):
        __14 = ldf `[` in base;
        r118 = dyn __14(fixes3, 1);
        goto L0(r118);
      L3():
        dx43 = getTryDispatchBuiltinValue(dr36);
        goto L0(dx43);
      };
      r120 = dyn paste0("^", p28);
      return r120;
    };
    p30 = prom<V +>{
      nrdb36 = ld nrdb;
      nrdb37 = force? nrdb36;
      checkMissing(nrdb37);
      c48 = `is.object`(nrdb37);
      if c48 then L1() else L2();
    L0(dx46):
      return dx46;
    L1():
      dr38 = tryDispatchBuiltin.1("[", nrdb37);
      dc19 = getTryDispatchBuiltinDispatched(dr38);
      if dc19 then L3() else L2();
    L2():
      __15 = ldf `[` in base;
      r122 = dyn __15(nrdb37, <missing>, 2);
      goto L0(r122);
    L3():
      dx45 = getTryDispatchBuiltinValue(dr38);
      goto L0(dx45);
    };
    r124 = dyn sub(p29, "", p30);
    check L184() else D60();
  L209():
    nrdb45 = force? nrdb44;
    checkMissing(nrdb45);
    c55 = `is.object`(nrdb45);
    if c55 then L210() else L211();
  L215():
    goto L39(r155);
  L219():
    dr52 = tryDispatchBuiltin.1("[", nrdb49);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L221() else L220(dr52);
  L220(nrdb51):
    ind4 = ld ind;
    check L222() else D71();
  L225(dx63):
    r161 = `==`(dx63, ".Fortran");
    st dotF = r161;
    tolower = ldf tolower;
    check L229() else D73();
  L226():
    dr54 = tryDispatchBuiltin.1("$", nrdb53);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L228() else L227(dr54);
  L227(nrdb55):
    r160 = `$`(nrdb55, <sym cname>);
    goto L225(r160);
  D50():
    deopt 200 [symnames];
  D52():
    deopt 207 [r108];
  D55():
    deopt 215 [dx35, l6, dx33, ind2];
  D60():
    deopt 241 [r124];
  D71():
    deopt 300 [nrdb51, ind4];
  D73():
    deopt 318 [];
  L41(dx58):
    imports8 = ld imports;
    check L213() else D66();
  L158():
    symnames1 = force? symnames;
    checkMissing(symnames1);
    names = ldf names in base;
    r107 = dyn names(symnames1);
    check L159() else D51();
  L160():
    goto L23(r108);
  L168():
    dx37 = getTryDispatchBuiltinValue(dr32);
    goto L27(dx33, dx37);
  L169():
    ind3 = force? ind2;
    checkMissing(ind3);
    r110 = `>`(ind3, 0);
    ___1 = ldf `[<-` in base;
    r111 = dyn ___1(l6, dx33, r110, 2);
    goto L27(dx35, r111);
  L176(c42, dx42):
    st fixes = dx42;
    r116 = `!=`(dx42, "");
    any = ldf any in base;
    r117 = dyn any(r116);
    check L180() else D58();
  L177():
    dr34 = tryDispatchBuiltin.1("$", info13);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L179() else L178(c32, dr34);
  L178(c40, info15):
    r115 = `$`(info15, <sym registrationFixes>);
    goto L176(c40, r115);
  L184():
    l7 = ld nrdb;
    c49 = `is.object`(l7);
    if c49 then L185() else L186(r124);
  L210():
    dr50 = tryDispatchBuiltin.1("[", nrdb45);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L212() else L211();
  L211():
    __19 = ldf `[` in base;
    r153 = dyn __19(nrdb45, <missing>, 2);
    goto L41(r153);
  L221():
    dx59 = getTryDispatchBuiltinValue(dr52);
    goto L43(dx59);
  L222():
    ind5 = force? ind4;
    checkMissing(ind5);
    r158 = `!`(ind5);
    __20 = ldf `[` in base;
    r159 = dyn __20(nrdb49, r158, <missing>, FALSE);
    goto L43(r159);
  L228():
    dx62 = getTryDispatchBuiltinValue(dr54);
    goto L225(dx62);
  L229():
    p34 = prom<V +>{
      nrdb56 = ld nrdb;
      nrdb57 = force? nrdb56;
      checkMissing(nrdb57);
      c59 = `is.object`(nrdb57);
      if c59 then L1() else L2(nrdb57);
    L0(dx65):
      return dx65;
    L1():
      dr56 = tryDispatchBuiltin.1("[", nrdb57);
      dc28 = getTryDispatchBuiltinDispatched(dr56);
      if dc28 then L3() else L2(dr56);
    L2(nrdb59):
      dotF = ld dotF;
      dotF1 = force? dotF;
      __21 = ldf `[` in base;
      r162 = dyn __21(nrdb59, dotF1, "s");
      goto L0(r162);
    L3():
      dx64 = getTryDispatchBuiltinValue(dr56);
      goto L0(dx64);
    };
    r164 = dyn tolower(p34);
    check L230() else D74();
  D51():
    deopt 203 [r107];
  D58():
    deopt 234 [c42, r117];
  D66():
    deopt 286 [imports8];
  D74():
    deopt 320 [r164];
  L32(dx48):
    st nrdb = dx48;
    sym10 = ldf nzchar;
    base10 = ldf nzchar in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L188() else L189();
  L159():
    goto L25(r107);
  L179():
    dx41 = getTryDispatchBuiltinValue(dr34);
    goto L176(c32, dx41);
  L180():
    goto L30(c42, r117);
  L185():
    dr40 = tryDispatchBuiltin.0("[<-", l7, r124);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L187() else L186(r124);
  L186(r126):
    ___2 = ldf `[<-` in base;
    r129 = dyn ___2(l7, <missing>, 2, r124);
    goto L32(r129);
  L212():
    dx57 = getTryDispatchBuiltinValue(dr50);
    goto L41(dx57);
  L213():
    imports9 = force? imports8;
    checkMissing(imports9);
    match1 = ldf match in base;
    r154 = dyn match1(dx58, imports9, NA_INT, NULL);
    check L214() else D67();
  L230():
    l13 = ld nrdb;
    c60 = `is.object`(l13);
    if c60 then L231() else L232(r164, l13);
  D67():
    deopt 291 [r154];
  L33(r131):
    c51 = `as.logical`(r131);
    if c51 then L195() else L35();
  L45(dx67):
    st nrdb = dx67;
    package2 = ld package;
    check L235() else D76();
  L187():
    dx47 = getTryDispatchBuiltinValue(dr40);
    goto L32(dx47);
  L188():
    fixes4 = ld fixes;
    check L190() else D61();
  L189():
    r130 = dyn base10(<lang `[`(fixes, 2)>);
    goto L33(r130);
  L214():
    goto L40(r154);
  L231():
    dr58 = tryDispatchBuiltin.0("[<-", l13, r164);
    dc29 = getTryDispatchBuiltinDispatched(dr58);
    if dc29 then L233() else L232(r164, dr58);
  L232(r166, l15):
    dotF2 = ld dotF;
    check L234() else D75();
  D61():
    deopt 250 [fixes4];
  D75():
    deopt 322 [r166, l15, r164, dotF2];
  D76():
    deopt 327 [package2];
  L35():
    goto L37(NULL);
  L37(r146):
    goto L28();
  L190():
    fixes5 = force? fixes4;
    checkMissing(fixes5);
    c50 = `is.object`(fixes5);
    if c50 then L191() else L192(fixes5);
  L195():
    sub1 = ldf sub;
    check L196() else D63();
  L233():
    dx66 = getTryDispatchBuiltinValue(dr58);
    goto L45(dx66);
  L234():
    dotF3 = force? dotF2;
    ___4 = ldf `[<-` in base;
    r169 = dyn ___4(l15, r164, dotF3, "s");
    goto L45(r169);
  L235():
    package3 = force? package2;
    checkMissing(package3);
    l16 = ld nrdb;
    attr__ = ldf `attr<-`;
    check L236() else D77();
  D63():
    deopt 258 [];
  D77():
    deopt 330 [package3, l16, package3];
  L34(dx50):
    nzchar = ldf nzchar in base;
    r133 = dyn nzchar(dx50);
    check L194() else D62();
  L191():
    dr42 = tryDispatchBuiltin.1("[", fixes5);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L193() else L192(dr42);
  L192(fixes7):
    __16 = ldf `[` in base;
    r132 = dyn __16(fixes7, 2);
    goto L34(r132);
  L196():
    p32 = prom<V +>{
      paste1 = ldf paste0;
      p31 = prom<V +>{
        fixes8 = ld fixes;
        fixes9 = force? fixes8;
        checkMissing(fixes9);
        c52 = `is.object`(fixes9);
        if c52 then L1() else L2(fixes9);
      L0(dx52):
        return dx52;
      L1():
        dr44 = tryDispatchBuiltin.1("[", fixes9);
        dc22 = getTryDispatchBuiltinDispatched(dr44);
        if dc22 then L3() else L2(dr44);
      L2(fixes11):
        __17 = ldf `[` in base;
        r134 = dyn __17(fixes11, 2);
        goto L0(r134);
      L3():
        dx51 = getTryDispatchBuiltinValue(dr44);
        goto L0(dx51);
      };
      r136 = dyn paste1(p31);
      return r136;
    };
    p33 = prom<V +>{
      nrdb40 = ld nrdb;
      nrdb41 = force? nrdb40;
      checkMissing(nrdb41);
      c53 = `is.object`(nrdb41);
      if c53 then L1() else L2();
    L0(dx54):
      return dx54;
    L1():
      dr46 = tryDispatchBuiltin.1("[", nrdb41);
      dc23 = getTryDispatchBuiltinDispatched(dr46);
      if dc23 then L3() else L2();
    L2():
      __18 = ldf `[` in base;
      r138 = dyn __18(nrdb41, <missing>, 2);
      goto L0(r138);
    L3():
      dx53 = getTryDispatchBuiltinValue(dr46);
      goto L0(dx53);
    };
    r140 = dyn sub1(p32, "$", "", p33);
    check L197() else D64();
  L236():
    r170 = dyn attr__(l16, NULL, "package", package3);
    check L237() else D78();
  D62():
    deopt 256 [r133];
  D64():
    deopt 263 [r140];
  D78():
    deopt 333 [package3, r170];
  L193():
    dx49 = getTryDispatchBuiltinValue(dr42);
    goto L34(dx49);
  L194():
    goto L33(r133);
  L197():
    l10 = ld nrdb;
    c54 = `is.object`(l10);
    if c54 then L198() else L199(r140);
  L237():
    st nrdb = r170;
    dups = ld dups;
    check L238() else D79();
  D79():
    deopt 335 [dups];
  L36(r144, dx56):
    st nrdb = dx56;
    goto L37(r144);
  L198():
    dr48 = tryDispatchBuiltin.0("[<-", l10, r140);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L200() else L199(r140);
  L199(r142):
    ___3 = ldf `[<-` in base;
    r145 = dyn ___3(l10, <missing>, 2, r140);
    goto L36(r142, r145);
  L238():
    dups1 = force? dups;
    checkMissing(dups1);
    l17 = ld nrdb;
    attr__1 = ldf `attr<-`;
    check L239() else D80();
  D80():
    deopt 338 [dups1, l17, dups1];
  L200():
    dx55 = getTryDispatchBuiltinValue(dr48);
    goto L36(r140, dx55);
  L239():
    r171 = dyn attr__1(l17, NULL, "duplicates", dups1);
    check L240() else D81();
  D81():
    deopt 341 [dups1, r171];
  L240():
    st nrdb = r171;
    unique2 = ldf unique;
    check L241() else D82();
  D82():
    deopt 344 [];
  L241():
    p35 = prom<V +>{
      symbols = ld symbols;
      symbols1 = force? symbols;
      checkMissing(symbols1);
      return symbols1;
    };
    r173 = dyn unique2(p35);
    check L242() else D83();
  D83():
    deopt 346 [r173];
  L242():
    l18 = ld nrdb;
    attr__2 = ldf `attr<-`;
    check L243() else D84();
  D84():
    deopt 348 [r173, l18, r173];
  L243():
    r174 = dyn attr__2(l18, NULL, "symbols", r173);
    check L244() else D85();
  D85():
    deopt 351 [r173, r174];
  L244():
    st nrdb = r174;
    nrdb60 = ld nrdb;
    check L245() else D86();
  D86():
    deopt 353 [nrdb60];
  L245():
    nrdb61 = force? nrdb60;
    checkMissing(nrdb61);
    popenv;
    return nrdb61;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg args:cls, reg get:cls, reg e1:*, reg e2:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg baseenv:cls, reg r3:V, reg p1:p(V +), reg r5:V, reg p2:p(V +), reg r7:V |
    mkenv;
    st e = e;
    args = ldf args;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p2 = prom<V +>{
      get = ldf get;
      p = prom<V +>{
        e1 = ld e;
        e2 = force? e1;
        checkMissing(e2);
        return e2;
      };
      p1 = prom<V +>{
        sym = ldf baseenv;
        base = ldf baseenv in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r2):
        return r2;
      L1():
        baseenv = ldf baseenv in base;
        r3 = dyn baseenv();
        goto L0(r3);
      L2():
        r1 = dyn base();
        goto L0(r1);
      };
      r5 = dyn get(p, p1);
      return r5;
    };
    r7 = dyn args(p2);
    check L1() else D1();
  D1():
    deopt 3 [r7];
  L1():
    popenv;
    return r7;
  }
}