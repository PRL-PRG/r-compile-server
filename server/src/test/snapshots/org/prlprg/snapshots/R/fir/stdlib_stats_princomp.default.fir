fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2067590896;
    st `princomp.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2067590896(x, cor, scores, covmat, subset, fix_sign, `...`) {
  (reg x:*, reg cor:*, reg scores:*, reg covmat:*, reg subset:*, reg fix_sign:*, reg ddd:dots) -+> V { var x:*, var cor:*, reg cor_isMissing:L, reg cor_orDefault:*, var scores:*, reg scores_isMissing:L, reg scores_orDefault:*, var covmat:*, reg covmat_isMissing:L, reg covmat_orDefault:*, var subset:*, reg subset_isMissing:L, reg subset_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg nrow:cls, reg as_matrix:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r3:V, reg p1:p(V +), reg r5:V, reg rep_len:cls, reg r6:V, reg p2:p(V +), var fix_sign:*, reg fix_sign_isMissing:L, reg fix_sign_orDefault:*, var `...`:dots?, reg chkDots:cls, reg ddd1:dots?, reg r8:V, reg match_call:cls, reg r9:V, reg as_name:cls, reg r10:V, reg l:*, reg c:L, reg r12:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ____:cls, reg r15:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r16:V, reg r17:V, reg missing:cls, reg r18:V, reg r19:V, reg c1:L, reg as_matrix1:cls, reg x3:*, reg x4:V, reg p3:p(V +), reg r21:V, reg c2:L, reg r23:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg subset1:*, reg subset2:V, reg __:cls, reg r24:V, reg dx4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r25:V, reg r26:V, reg covmat1:*, reg covmat2:V, reg is_list:cls, reg r27:V, reg c3:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r28:V, reg r29:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r30:V, reg r31:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg r33:V, reg c4:cls, reg r34:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r35:V, reg r36:V, reg covmat3:*, reg covmat4:V, reg names:cls, reg r37:V, reg match:cls, reg r38:V, reg anyNA:cls, reg r39:V, reg c5:L, reg stop:cls, reg r40:V, reg covmat5:*, reg covmat6:V, reg c6:L, reg covmat8:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg r42:V, reg covmat9:*, reg covmat10:V, reg c7:L, reg covmat12:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg r43:V, reg covmat13:*, reg covmat14:V, reg c8:L, reg covmat16:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg r44:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r45:V, reg r46:V, reg covmat17:*, reg covmat18:V, reg is_matrix:cls, reg r47:V, reg c9:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r48:V, reg r49:V, reg missing1:cls, reg r50:V, reg r51:V, reg c10:L, reg warning:cls, reg r52:V, reg covmat19:*, reg covmat20:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r54:V, reg r55:V, reg covmat21:*, reg covmat22:V, reg c11:V, reg c12:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r56:V, reg r57:V, reg z:*, reg z1:V, reg dim:cls, reg r58:V, reg dn:*, reg dn1:V, reg c13:L, reg dn3:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg __1:cls, reg r59:V, reg dn4:*, reg dn5:V, reg c14:L, reg dx15:V, reg dn7:V, reg dr12:V, reg dc6:L, reg dx17:V, reg dx18:V, reg dx19:V, reg __2:cls, reg r60:V, reg r61:V, reg c15:L, reg stop1:cls, reg r62:V, reg cov_wt:cls, reg z2:*, reg z3:V, reg p4:p(V +), reg r65:V, reg covmat23:*, reg covmat24:V, reg c16:L, reg covmat26:V, reg dr14:V, reg dc7:L, reg dx20:V, reg dx21:V, reg r66:V, reg covmat27:*, reg covmat28:V, reg c17:L, reg covmat30:V, reg dr16:V, reg dc8:L, reg dx22:V, reg dx23:V, reg r67:V, reg n_obs:*, reg n_obs1:V, reg r68:V, reg r69:V, reg r70:V, reg covmat31:*, reg covmat32:V, reg c18:L, reg covmat34:V, reg dr18:V, reg dc9:L, reg dx24:V, reg dx25:V, reg r71:V, reg stop2:cls, reg r72:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r73:V, reg r74:V, reg cv:*, reg cv1:V, reg is_numeric:cls, reg r75:V, reg r76:V, reg c19:L, reg stop3:cls, reg r77:V, reg cor1:*, reg cor2:V, reg c20:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r79:V, reg r80:V, reg diag:cls, reg cv2:*, reg cv3:V, reg p5:p(V +), reg r82:V, reg r83:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r84:V, reg r85:V, reg sds:*, reg sds1:V, reg r86:V, reg any:cls, reg r87:V, reg c21:L, reg stop4:cls, reg r88:V, reg cv4:*, reg cv5:V, reg _o_:cls, reg sds2:*, reg sds3:V, reg p6:p(V +), reg sds4:*, reg sds5:V, reg p7:p(V +), reg r92:V, reg r93:V, reg eigen:cls, reg cv6:*, reg cv7:V, reg p8:p(V +), reg r96:V, reg edc:*, reg edc1:V, reg c22:L, reg edc3:V, reg dr20:V, reg dc10:L, reg dx26:V, reg dx27:V, reg r97:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r98:V, reg r99:V, reg ev:*, reg ev1:V, reg r100:V, reg any1:cls, reg r101:V, reg c23:L, reg sym15:cls, reg base15:cls, reg guard15:L, reg r102:V, reg r103:V, reg ev2:*, reg ev3:V, reg c24:L, reg ev5:V, reg dr22:V, reg dc11:L, reg dx28:V, reg dx29:V, reg neg:*, reg neg1:V, reg __3:cls, reg r104:V, reg _Machine:*, reg _Machine1:V, reg c25:L, reg dx31:V, reg r106:R, reg _Machine3:V, reg dr24:V, reg dc12:L, reg dx33:V, reg dx34:V, reg r108:R, reg dx35:V, reg r109:V, reg r110:V, reg ev6:*, reg ev7:V, reg c26:L, reg dx37:V, reg r112:V, reg ev9:V, reg dr26:V, reg dc13:L, reg dx39:V, reg dx40:V, reg r114:V, reg dx41:V, reg __4:cls, reg r115:V, reg r116:V, reg r117:V, reg any2:cls, reg r118:V, reg c27:L, reg stop5:cls, reg r119:V, reg r120:V, reg l3:*, reg c28:L, reg r122:R, reg l5:*, reg dr28:V, reg dc14:L, reg dx42:V, reg r124:R, reg dx43:V, reg neg2:*, reg neg3:V, reg ___:cls, reg r125:V, reg paste0:cls, reg ncol:cls, reg cv8:*, reg cv9:V, reg p9:p(V +), reg r128:V, reg r129:V, reg p10:p(V +), reg r131:V, reg cn:*, reg cn1:V, reg l6:*, reg names__:cls, reg r132:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r133:V, reg r134:V, reg missing2:cls, reg r135:V, reg c29:L, reg sym17:cls, reg base17:cls, reg guard17:L, reg r136:V, reg r137:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r138:V, reg r139:V, reg cv10:*, reg cv11:V, reg dimnames:cls, reg r140:V, reg c30:L, reg r142:V, reg dr30:V, reg dc15:L, reg dx44:V, reg dx45:V, reg __5:cls, reg r143:V, reg cn2:*, reg cn3:V, reg list:cls, reg r144:V, reg r145:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r146:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r147:V, reg r148:V, reg x5:*, reg x6:V, reg dimnames1:cls, reg r149:V, reg c31:L, reg r151:V, reg dr32:V, reg dc16:L, reg dx46:V, reg dx47:V, reg __6:cls, reg r152:V, reg cn4:*, reg cn5:V, reg list1:cls, reg r153:V, reg l7:*, reg c32:L, reg r156:V, reg l10:*, reg r157:V, reg l11:*, reg dr34:V, reg dc17:L, reg dx48:V, reg r160:V, reg l13:*, reg r161:V, reg dx49:V, reg r162:V, reg dimnames__:cls, reg r163:V, reg c33:L, reg r165:V, reg l15:*, reg dr36:V, reg dc18:L, reg dx50:V, reg dx51:V, reg r168:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r169:V, reg r170:V, reg ev10:*, reg ev11:V, reg r171:V, reg setNames:cls, reg cor3:*, reg cor4:V, reg c34:L, reg sds6:*, reg sds7:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r172:V, reg r173:V, reg ncol1:cls, reg cv12:*, reg cv13:V, reg p11:p(V +), reg r175:V, reg rep_int:cls, reg r176:V, reg p12:p(V +), reg colnames:cls, reg cv14:*, reg cv15:V, reg p13:p(V +), reg r179:V, reg p14:p(V +), reg r181:V, reg fix_sign1:*, reg fix_sign2:V, reg c35:L, reg r182:cls, reg r183:V, reg identity:*, reg identity1:V, reg fix:cls, reg edc4:*, reg edc5:V, reg c36:L, reg edc7:V, reg dr38:V, reg dc19:L, reg dx52:V, reg dx53:V, reg r184:V, reg p15:p(V +), reg r186:V, reg scores1:*, reg scores2:V, reg c37:L, reg c39:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r187:V, reg c42:L, reg r188:V, reg missing3:cls, reg r189:V, reg r190:V, reg c43:L, reg c44:V, reg c46:L, reg c48:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r191:V, reg c51:L, reg r192:V, reg cen:*, reg cen1:V, reg c52:V, reg r193:V, reg c53:L, reg c54:V, reg c56:L, reg scale:cls, reg z4:*, reg z5:V, reg p16:p(V +), reg cen2:*, reg cen3:V, reg p17:p(V +), reg sc:*, reg sc1:V, reg p18:p(V +), reg r197:V, reg ev12:*, reg ev13:V, reg ___1:cls, reg r198:V, reg r199:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r200:V, reg r201:V, reg cen4:*, reg cen5:V, reg c57:V, reg c58:L, reg sym26:cls, reg base26:cls, reg guard26:L, reg r202:V, reg r203:V, reg rep:cls, reg r204:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r206:V, reg r207:V, reg sdev:*, reg sdev1:V, reg structure:cls, reg ev14:*, reg ev15:V, reg p19:p(V +), reg r209:V, reg cen6:*, reg cen7:V, reg sc2:*, reg sc3:V, reg n_obs2:*, reg n_obs3:V, reg scr:*, reg scr1:V, reg cl:*, reg cl1:V, reg list2:cls, reg r210:V, reg l16:*, reg class__:cls, reg r211:V, reg edc8:*, reg edc9:V |
    mkenv;
    st x = x;
    cor_isMissing = missing.0(cor);
    if cor_isMissing then L0(FALSE) else L0(cor);
  L0(cor_orDefault):
    st cor = cor_orDefault;
    scores_isMissing = missing.0(scores);
    if scores_isMissing then L1(TRUE) else L1(scores);
  L1(scores_orDefault):
    st scores = scores_orDefault;
    covmat_isMissing = missing.0(covmat);
    if covmat_isMissing then L2(NULL) else L2(covmat);
  L2(covmat_orDefault):
    st covmat = covmat_orDefault;
    subset_isMissing = missing.0(subset);
    if subset_isMissing then L3() else L4(subset);
  L3():
    p2 = prom<V +>{
      sym = ldf rep_len;
      base = ldf rep_len in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      nrow = ldf nrow;
      p1 = prom<V +>{
        as_matrix = ldf `as.matrix`;
        p = prom<V +>{
          x1 = ld x;
          x2 = force? x1;
          checkMissing(x2);
          return x2;
        };
        r3 = dyn as_matrix(p);
        return r3;
      };
      r5 = dyn nrow(p1);
      rep_len = ldf rep_len in base;
      r6 = dyn rep_len(TRUE, r5);
      goto L0(r6);
    L2():
      r = dyn base(TRUE, <lang nrow(as.matrix(x))>);
      goto L0(r);
    };
    goto L4(p2);
  L4(subset_orDefault):
    st subset = subset_orDefault;
    fix_sign_isMissing = missing.0(fix_sign);
    if fix_sign_isMissing then L5(TRUE) else L5(fix_sign);
  L5(fix_sign_orDefault):
    st fix_sign = fix_sign_orDefault;
    st `...` = ddd;
    chkDots = ldf chkDots;
    check L72() else D0();
  D0():
    deopt 1 [];
  L72():
    ddd1 = ld `...`;
    r8 = dyn chkDots[`...`](ddd1);
    check L73() else D1();
  D1():
    deopt 3 [r8];
  L73():
    match_call = ldf `match.call`;
    check L74() else D2();
  D2():
    deopt 5 [];
  L74():
    r9 = dyn match_call();
    check L75() else D3();
  D3():
    deopt 6 [r9];
  L75():
    st cl = r9;
    as_name = ldf `as.name`;
    check L76() else D4();
  D4():
    deopt 9 [];
  L76():
    r10 = dyn as_name("princomp");
    check L77() else D5();
  D5():
    deopt 11 [r10];
  L77():
    l = ld cl;
    c = `is.object`(l);
    if c then L78() else L79(r10, l);
  L6(dx1):
    st cl = dx1;
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L81() else L82();
  L78():
    dr = tryDispatchBuiltin.0("[[<-", l, r10);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L80() else L79(r10, dr);
  L79(r12, l2):
    ____ = ldf `[[<-` in base;
    r15 = dyn ____(l2, r10, 1);
    goto L6(r15);
  L7(r17):
    r19 = `!`(r17);
    c1 = `as.logical`(r19);
    if c1 then L83() else L8();
  L80():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L81():
    missing = ldf missing in base;
    r18 = dyn missing(<sym x>);
    goto L7(r18);
  L82():
    r16 = dyn base1(<sym x>);
    goto L7(r16);
  L8():
    goto L10(NULL);
  L10(dx4):
    st z = dx4;
    sym2 = ldf `is.list`;
    base2 = ldf `is.list` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L91() else L92();
  L83():
    as_matrix1 = ldf `as.matrix`;
    check L84() else D6();
  D6():
    deopt 22 [];
  L11(r26):
    c3 = `as.logical`(r26);
    if c3 then L95() else L12();
  L84():
    p3 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r21 = dyn as_matrix1(p3);
    check L85() else D7();
  L91():
    covmat1 = ld covmat;
    check L93() else D9();
  L92():
    r25 = dyn base2(<sym covmat>);
    goto L11(r25);
  D7():
    deopt 24 [r21];
  D9():
    deopt 37 [covmat1];
  L12():
    sym7 = ldf `is.matrix`;
    base7 = ldf `is.matrix` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L129() else L130();
  L19():
    sym11 = ldf `is.numeric`;
    base11 = ldf `is.numeric` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L183() else L184();
  L85():
    c2 = `is.object`(r21);
    if c2 then L86() else L87(r21);
  L93():
    covmat2 = force? covmat1;
    checkMissing(covmat2);
    is_list = ldf `is.list` in base;
    r27 = dyn is_list(covmat2);
    check L94() else D10();
  L95():
    sym3 = ldf anyNA;
    base3 = ldf anyNA in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L96() else L97();
  D10():
    deopt 40 [r27];
  L9(dx3):
    goto L10(dx3);
  L13(r29):
    c5 = `as.logical`(r29);
    if c5 then L109() else L17();
  L20(r46):
    c9 = `as.logical`(r46);
    if c9 then L133() else L21();
  L32(r74):
    r76 = `!`(r74);
    c19 = `as.logical`(r76);
    if c19 then L187() else L33();
  L86():
    dr2 = tryDispatchBuiltin.1("[", r21);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L88() else L87(dr2);
  L87(r23):
    subset1 = ld subset;
    check L89() else D8();
  L94():
    goto L11(r27);
  L96():
    sym4 = ldf match;
    base4 = ldf match in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L98() else L99();
  L97():
    r28 = dyn base3(<lang match(c("cov", "n.obs"), names(covmat))>);
    goto L13(r28);
  L129():
    covmat17 = ld covmat;
    check L131() else D21();
  L130():
    r45 = dyn base7(<sym covmat>);
    goto L20(r45);
  L183():
    cv = ld cv;
    check L185() else D41();
  L184():
    r73 = dyn base11(<sym cv>);
    goto L32(r73);
  D8():
    deopt 25 [r23, subset1];
  D21():
    deopt 83 [covmat17];
  D41():
    deopt 162 [cv];
  L14(r31):
    anyNA = ldf anyNA in base;
    r39 = dyn anyNA(r31);
    check L108() else D15();
  L17():
    goto L18();
  L18():
    covmat5 = ld covmat;
    check L113() else D18();
  L21():
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L142() else L143();
  L33():
    goto L34();
  L34():
    cor1 = ld cor;
    check L191() else D45();
  L88():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L9(dx2);
  L89():
    subset2 = force? subset1;
    __ = ldf `[` in base;
    r24 = dyn __(r21, subset2, <missing>, FALSE);
    goto L9(r24);
  L98():
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L100() else L101();
  L99():
    r30 = dyn base4(<lang c("cov", "n.obs")>, <lang names(covmat)>);
    goto L14(r30);
  L109():
    stop = ldf stop;
    check L110() else D16();
  L131():
    covmat18 = force? covmat17;
    checkMissing(covmat18);
    is_matrix = ldf `is.matrix` in base;
    r47 = dyn is_matrix(covmat18);
    check L132() else D22();
  L133():
    sym8 = ldf missing;
    base8 = ldf missing in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L134() else L135();
  L185():
    cv1 = force? cv;
    checkMissing(cv1);
    is_numeric = ldf `is.numeric` in base;
    r75 = dyn is_numeric(cv1);
    check L186() else D42();
  L187():
    stop3 = ldf stop;
    check L188() else D43();
  D15():
    deopt 62 [r39];
  D16():
    deopt 64 [];
  D18():
    deopt 69 [covmat5];
  D22():
    deopt 86 [r47];
  D42():
    deopt 165 [r75];
  D43():
    deopt 168 [];
  D45():
    deopt 173 [cor1];
  L15(r33):
    sym6 = ldf names;
    base6 = ldf names in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L103() else L104();
  L22(r49):
    r51 = `!`(r49);
    c10 = `as.logical`(r51);
    if c10 then L136() else L23();
  L25(r55):
    c12 = `as.logical`(r55);
    if c12 then L145() else L26();
  L100():
    c4 = ldf c in base;
    r34 = dyn c4("cov", "n.obs");
    check L102() else D11();
  L101():
    r32 = dyn base5("cov", "n.obs");
    goto L15(r32);
  L108():
    goto L13(r39);
  L110():
    r40 = dyn stop("'covmat' is not a valid covariance list");
    check L111() else D17();
  L113():
    covmat6 = force? covmat5;
    checkMissing(covmat6);
    c6 = `is.object`(covmat6);
    if c6 then L115() else L116(covmat6);
  L132():
    goto L20(r47);
  L134():
    missing1 = ldf missing in base;
    r50 = dyn missing1(<sym x>);
    goto L22(r50);
  L135():
    r48 = dyn base8(<sym x>);
    goto L22(r48);
  L142():
    covmat21 = ld covmat;
    check L144() else D26();
  L143():
    r54 = dyn base9(<sym covmat>);
    goto L25(r54);
  L186():
    goto L32(r75);
  L188():
    r77 = dyn stop3("PCA applies only to numerical variables");
    check L189() else D44();
  L191():
    cor2 = force? cor1;
    checkMissing(cor2);
    c20 = `as.logical`(cor2);
    if c20 then L192() else L35();
  D11():
    deopt 50 [r34];
  D17():
    deopt 66 [r40];
  D26():
    deopt 107 [covmat21];
  D44():
    deopt 170 [r77];
  L16(r36):
    match = ldf match in base;
    r38 = dyn match(r33, r36, NA_INT, NULL);
    check L107() else D14();
  L23():
    goto L24();
  L24():
    covmat19 = ld covmat;
    check L140() else D25();
  L26():
    stop2 = ldf stop;
    check L181() else D39();
  L35():
    goto L40();
  L40():
    eigen = ldf eigen;
    check L209() else D55();
  L102():
    goto L15(r34);
  L103():
    covmat3 = ld covmat;
    check L105() else D12();
  L104():
    r35 = dyn base6(<sym covmat>);
    goto L16(r35);
  L111():
    goto L18();
  L114(dx6):
    st cv = dx6;
    covmat9 = ld covmat;
    check L118() else D19();
  L115():
    dr4 = tryDispatchBuiltin.1("$", covmat6);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L117() else L116(dr4);
  L116(covmat8):
    r42 = `$`(covmat8, <sym cov>);
    goto L114(r42);
  L136():
    warning = ldf warning;
    check L137() else D23();
  L144():
    covmat22 = force? covmat21;
    checkMissing(covmat22);
    c11 = `==`(covmat22, NULL);
    goto L25(c11);
  L145():
    sym10 = ldf dim;
    base10 = ldf dim in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L146() else L147();
  L189():
    goto L34();
  L192():
    sym12 = ldf sqrt;
    base12 = ldf sqrt in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L193() else L194();
  D12():
    deopt 53 [covmat3];
  D14():
    deopt 60 [r38];
  D19():
    deopt 73 [covmat9];
  D23():
    deopt 92 [];
  D25():
    deopt 97 [covmat19];
  D39():
    deopt 157 [];
  D55():
    deopt 207 [];
  L27(r57):
    st dn = r57;
    dn = ld dn;
    check L150() else D29();
  L36(r80):
    st sds = r80;
    sym13 = ldf any;
    base13 = ldf any in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L197() else L198();
  L105():
    covmat4 = force? covmat3;
    checkMissing(covmat4);
    names = ldf names in base;
    r37 = dyn names(covmat4);
    check L106() else D13();
  L107():
    goto L14(r38);
  L117():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L114(dx5);
  L118():
    covmat10 = force? covmat9;
    checkMissing(covmat10);
    c7 = `is.object`(covmat10);
    if c7 then L120() else L121(covmat10);
  L137():
    r52 = dyn warning("both 'x' and 'covmat' were supplied: 'x' will be ignored");
    check L138() else D24();
  L140():
    covmat20 = force? covmat19;
    checkMissing(covmat20);
    st cv = covmat20;
    st `n.obs` = NA_LGL;
    st cen = NULL;
    goto L19();
  L146():
    z = ld z;
    check L148() else D27();
  L147():
    r56 = dyn base10(<sym z>);
    goto L27(r56);
  L181():
    r72 = dyn stop2("'covmat' is of unknown type");
    check L182() else D40();
  L193():
    diag = ldf diag;
    check L195() else D46();
  L194():
    r79 = dyn base12(<lang diag(cv)>);
    goto L36(r79);
  L209():
    p8 = prom<V +>{
      cv6 = ld cv;
      cv7 = force? cv6;
      checkMissing(cv7);
      return cv7;
    };
    r96 = dyn eigen[, symmetric](p8, TRUE);
    check L210() else D56();
  D13():
    deopt 56 [r37];
  D24():
    deopt 94 [r52];
  D27():
    deopt 112 [z];
  D29():
    deopt 117 [dn];
  D40():
    deopt 159 [r72];
  D46():
    deopt 177 [];
  D56():
    deopt 211 [r96];
  L37(r85):
    c21 = `as.logical`(r85);
    if c21 then L201() else L38();
  L106():
    goto L16(r37);
  L119(dx8):
    st `n.obs` = dx8;
    covmat13 = ld covmat;
    check L123() else D20();
  L120():
    dr6 = tryDispatchBuiltin.1("$", covmat10);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L122() else L121(dr6);
  L121(covmat12):
    r43 = `$`(covmat12, <sym n.obs>);
    goto L119(r43);
  L138():
    goto L24();
  L148():
    z1 = force? z;
    checkMissing(z1);
    dim = ldf dim in base;
    r58 = dyn dim(z1);
    check L149() else D28();
  L150():
    dn1 = force? dn;
    checkMissing(dn1);
    c13 = `is.object`(dn1);
    if c13 then L151() else L152(dn1);
  L182():
    goto L19();
  L195():
    p5 = prom<V +>{
      cv2 = ld cv;
      cv3 = force? cv2;
      checkMissing(cv3);
      return cv3;
    };
    r82 = dyn diag(p5);
    check L196() else D47();
  L197():
    sds = ld sds;
    check L199() else D48();
  L198():
    r84 = dyn base13(<lang `==`(sds, 0.0)>);
    goto L37(r84);
  L210():
    st edc = r96;
    edc = ld edc;
    check L211() else D57();
  D20():
    deopt 77 [covmat13];
  D28():
    deopt 115 [r58];
  D47():
    deopt 179 [r82];
  D48():
    deopt 184 [sds];
  D57():
    deopt 213 [edc];
  L28(dx13):
    dn4 = ld dn;
    check L154() else D30();
  L38():
    goto L39();
  L39():
    cv4 = ld cv;
    check L205() else D52();
  L122():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L119(dx7);
  L123():
    covmat14 = force? covmat13;
    checkMissing(covmat14);
    c8 = `is.object`(covmat14);
    if c8 then L125() else L126(covmat14);
  L149():
    goto L27(r58);
  L151():
    dr10 = tryDispatchBuiltin.1("[", dn1);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L153() else L152(dr10);
  L152(dn3):
    __1 = ldf `[` in base;
    r59 = dyn __1(dn3, 1);
    goto L28(r59);
  L196():
    r83 = sqrt(r82);
    goto L36(r83);
  L199():
    sds1 = force? sds;
    checkMissing(sds1);
    r86 = `==`(sds1, 0.0);
    any = ldf any in base;
    r87 = dyn any(r86);
    check L200() else D49();
  L201():
    stop4 = ldf stop;
    check L202() else D50();
  L211():
    edc1 = force? edc;
    checkMissing(edc1);
    c22 = `is.object`(edc1);
    if c22 then L213() else L214(edc1);
  D30():
    deopt 121 [dx13, dn4];
  D49():
    deopt 189 [r87];
  D50():
    deopt 191 [];
  D52():
    deopt 196 [cv4];
  L124(dx10):
    st cen = dx10;
    goto L19();
  L125():
    dr8 = tryDispatchBuiltin.1("$", covmat14);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L127() else L126(dr8);
  L126(covmat16):
    r44 = `$`(covmat16, <sym center>);
    goto L124(r44);
  L153():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L28(dx12);
  L154():
    dn5 = force? dn4;
    checkMissing(dn5);
    c14 = `is.object`(dn5);
    if c14 then L155() else L156(dx13, dn5);
  L200():
    goto L37(r87);
  L202():
    r88 = dyn stop4("cannot use 'cor = TRUE' with a constant variable");
    check L203() else D51();
  L205():
    cv5 = force? cv4;
    checkMissing(cv5);
    _o_ = ldf `%o%`;
    check L206() else D53();
  L212(dx27):
    st ev = dx27;
    sym14 = ldf any;
    base14 = ldf any in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L216() else L217();
  L213():
    dr20 = tryDispatchBuiltin.1("$", edc1);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L215() else L214(dr20);
  L214(edc3):
    r97 = `$`(edc3, <sym values>);
    goto L212(r97);
  D51():
    deopt 193 [r88];
  D53():
    deopt 198 [cv5];
  L29(dx18, dx19):
    r61 = `<`(dx18, dx19);
    c15 = `as.logical`(r61);
    if c15 then L158() else L30();
  L41(r99):
    c23 = `as.logical`(r99);
    if c23 then L220() else L42();
  L127():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L124(dx9);
  L155():
    dr12 = tryDispatchBuiltin.1("[", dn5);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L157() else L156(dx13, dr12);
  L156(dx15, dn7):
    __2 = ldf `[` in base;
    r60 = dyn __2(dn7, 2);
    goto L29(dx15, r60);
  L203():
    goto L39();
  L206():
    p6 = prom<V +>{
      sds2 = ld sds;
      sds3 = force? sds2;
      checkMissing(sds3);
      return sds3;
    };
    p7 = prom<V +>{
      sds4 = ld sds;
      sds5 = force? sds4;
      checkMissing(sds5);
      return sds5;
    };
    r92 = dyn _o_(p6, p7);
    check L207() else D54();
  L215():
    dx26 = getTryDispatchBuiltinValue(dr20);
    goto L212(dx26);
  L216():
    ev = ld ev;
    check L218() else D58();
  L217():
    r98 = dyn base14(<lang `<-`(neg, `<`(ev, 0.0))>);
    goto L41(r98);
  D54():
    deopt 201 [cv5, r92];
  D58():
    deopt 219 [ev];
  L30():
    goto L31();
  L31():
    cov_wt = ldf `cov.wt`;
    check L162() else D33();
  L42():
    goto L49();
  L49():
    paste0 = ldf paste0;
    check L247() else D68();
  L157():
    dx17 = getTryDispatchBuiltinValue(dr12);
    goto L29(dx13, dx17);
  L158():
    stop1 = ldf stop;
    check L159() else D31();
  L207():
    r93 = `/`(cv5, r92);
    st cv = r93;
    goto L40();
  L218():
    ev1 = force? ev;
    checkMissing(ev1);
    r100 = `<`(ev1, 0.0);
    st neg = r100;
    any1 = ldf any in base;
    r101 = dyn any1(r100);
    check L219() else D59();
  L220():
    sym15 = ldf any;
    base15 = ldf any in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L221() else L222();
  D31():
    deopt 128 [];
  D33():
    deopt 134 [];
  D59():
    deopt 225 [r101];
  D68():
    deopt 259 [];
  L43(r103):
    c27 = `as.logical`(r103);
    if c27 then L238() else L46();
  L159():
    r62 = dyn stop1("'princomp' can only be used with more units than variables");
    check L160() else D32();
  L162():
    p4 = prom<V +>{
      z2 = ld z;
      z3 = force? z2;
      checkMissing(z3);
      return z3;
    };
    r65 = dyn cov_wt(p4);
    check L163() else D34();
  L219():
    goto L41(r101);
  L221():
    ev2 = ld ev;
    check L223() else D60();
  L222():
    r102 = dyn base15(<lang `<`(`[`(ev, neg), `*`(`*`(`-`(9.0), `$`(.Machine, double.eps)), `[`(ev, 1)))>);
    goto L43(r102);
  L247():
    p10 = prom<V +>{
      ncol = ldf ncol;
      p9 = prom<V +>{
        cv8 = ld cv;
        cv9 = force? cv8;
        checkMissing(cv9);
        return cv9;
      };
      r128 = dyn ncol(p9);
      r129 = `:`(1, r128);
      return r129;
    };
    r131 = dyn paste0("Comp.", p10);
    check L248() else D69();
  D32():
    deopt 130 [r62];
  D34():
    deopt 136 [r65];
  D60():
    deopt 228 [ev2];
  D69():
    deopt 262 [r131];
  L46():
    l3 = ld ev;
    c28 = `is.object`(l3);
    if c28 then L242() else L243(0.0, l3);
  L47(r120):
    goto L49();
  L160():
    goto L31();
  L163():
    st covmat = r65;
    covmat23 = ld covmat;
    check L164() else D35();
  L223():
    ev3 = force? ev2;
    checkMissing(ev3);
    c24 = `is.object`(ev3);
    if c24 then L224() else L225(ev3);
  L238():
    stop5 = ldf stop;
    check L239() else D65();
  L248():
    st cn = r131;
    cn = ld cn;
    check L249() else D70();
  D35():
    deopt 138 [covmat23];
  D65():
    deopt 246 [];
  D70():
    deopt 264 [cn];
  L44(dx29):
    _Machine = ld `.Machine`;
    check L228() else D62();
  L48(r124, dx43):
    st ev = dx43;
    goto L47(r124);
  L164():
    covmat24 = force? covmat23;
    checkMissing(covmat24);
    c16 = `is.object`(covmat24);
    if c16 then L166() else L167(covmat24);
  L224():
    dr22 = tryDispatchBuiltin.1("[", ev3);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L226() else L225(dr22);
  L225(ev5):
    neg = ld neg;
    check L227() else D61();
  L239():
    r119 = dyn stop5("covariance matrix is not non-negative definite");
    check L240() else D66();
  L242():
    dr28 = tryDispatchBuiltin.0("[<-", l3, 0.0);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L244() else L243(0.0, dr28);
  L243(r122, l5):
    neg2 = ld neg;
    check L245() else D67();
  L249():
    cn1 = force? cn;
    checkMissing(cn1);
    l6 = ld ev;
    names__ = ldf `names<-`;
    check L250() else D71();
  D61():
    deopt 230 [ev5, neg];
  D62():
    deopt 233 [dx29, -9.0, _Machine];
  D66():
    deopt 248 [r119];
  D67():
    deopt 252 [r122, l5, 0.0, neg2];
  D71():
    deopt 267 [cn1, l6, cn1];
  L165(dx21):
    st `n.obs` = dx21;
    covmat27 = ld covmat;
    check L169() else D36();
  L166():
    dr14 = tryDispatchBuiltin.1("$", covmat24);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L168() else L167(dr14);
  L167(covmat26):
    r66 = `$`(covmat26, <sym n.obs>);
    goto L165(r66);
  L226():
    dx28 = getTryDispatchBuiltinValue(dr22);
    goto L44(dx28);
  L227():
    neg1 = force? neg;
    __3 = ldf `[` in base;
    r104 = dyn __3(ev5, neg1);
    goto L44(r104);
  L228():
    _Machine1 = force? _Machine;
    checkMissing(_Machine1);
    c25 = `is.object`(_Machine1);
    if c25 then L230() else L231(dx29, -9.0, _Machine1);
  L240():
    goto L47(r119);
  L244():
    dx42 = getTryDispatchBuiltinValue(dr28);
    goto L48(0.0, dx42);
  L245():
    neg3 = force? neg2;
    ___ = ldf `[<-` in base;
    r125 = dyn ___(l5, 0.0, neg3);
    goto L48(r122, r125);
  L250():
    r132 = dyn names__(l6, NULL, cn1);
    check L251() else D72();
  D36():
    deopt 142 [covmat27];
  D72():
    deopt 269 [cn1, r132];
  L168():
    dx20 = getTryDispatchBuiltinValue(dr14);
    goto L165(dx20);
  L169():
    covmat28 = force? covmat27;
    checkMissing(covmat28);
    c17 = `is.object`(covmat28);
    if c17 then L171() else L172(covmat28);
  L229(dx34, r108, dx35):
    r110 = `*`(r108, dx35);
    ev6 = ld ev;
    check L233() else D63();
  L230():
    dr24 = tryDispatchBuiltin.1("$", _Machine1);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L232() else L231(dx29, -9.0, dr24);
  L231(dx31, r106, _Machine3):
    r109 = `$`(_Machine3, <sym double.eps>);
    goto L229(dx31, r106, r109);
  L251():
    st ev = r132;
    sym16 = ldf missing;
    base16 = ldf missing in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L252() else L253();
  D63():
    deopt 236 [dx34, r110, ev6];
  L50(r134):
    c29 = `as.logical`(r134);
    if c29 then L254() else L51();
  L170(dx23):
    n_obs = ld `n.obs`;
    check L174() else D37();
  L171():
    dr16 = tryDispatchBuiltin.1("$", covmat28);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L173() else L172(dr16);
  L172(covmat30):
    r67 = `$`(covmat30, <sym cov>);
    goto L170(r67);
  L232():
    dx33 = getTryDispatchBuiltinValue(dr24);
    goto L229(dx29, -9.0, dx33);
  L233():
    ev7 = force? ev6;
    checkMissing(ev7);
    c26 = `is.object`(ev7);
    if c26 then L234() else L235(dx34, r110, ev7);
  L252():
    missing2 = ldf missing in base;
    r135 = dyn missing2(<sym x>);
    goto L50(r135);
  L253():
    r133 = dyn base16(<sym x>);
    goto L50(r133);
  D37():
    deopt 146 [dx23, 1.0, 1.0, n_obs];
  L45(dx40, r114, dx41):
    r116 = `*`(r114, dx41);
    r117 = `<`(dx40, r116);
    any2 = ldf any in base;
    r118 = dyn any2(r117);
    check L237() else D64();
  L51():
    sym19 = ldf list;
    base19 = ldf list in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L267() else L268();
  L55(r145):
    l7 = ld edc;
    c32 = `is.object`(l7);
    if c32 then L279() else L280(r145, l7, r145, l7);
  L173():
    dx22 = getTryDispatchBuiltinValue(dr16);
    goto L170(dx22);
  L174():
    n_obs1 = force? n_obs;
    checkMissing(n_obs1);
    r68 = `/`(1.0, n_obs1);
    r69 = `-`(1.0, r68);
    r70 = `*`(dx23, r69);
    st cv = r70;
    covmat31 = ld covmat;
    check L175() else D38();
  L234():
    dr26 = tryDispatchBuiltin.1("[", ev7);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L236() else L235(dx34, r110, dr26);
  L235(dx37, r112, ev9):
    __4 = ldf `[` in base;
    r115 = dyn __4(ev9, 1);
    goto L45(dx37, r112, r115);
  L254():
    sym17 = ldf list;
    base17 = ldf list in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L255() else L256();
  D38():
    deopt 152 [covmat31];
  D64():
    deopt 244 [r118];
  L52(r137):
    goto L55(r137);
  L175():
    covmat32 = force? covmat31;
    checkMissing(covmat32);
    c18 = `is.object`(covmat32);
    if c18 then L177() else L178(covmat32);
  L236():
    dx39 = getTryDispatchBuiltinValue(dr26);
    goto L45(dx34, r110, dx39);
  L237():
    goto L43(r118);
  L255():
    sym18 = ldf dimnames;
    base18 = ldf dimnames in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L257() else L258();
  L256():
    r136 = dyn base17(<lang `[[`(dimnames(cv), 2)>, <sym cn>);
    goto L52(r136);
  L267():
    sym20 = ldf dimnames;
    base20 = ldf dimnames in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L269() else L270();
  L268():
    r146 = dyn base19(<lang `[[`(dimnames(x), 2)>, <sym cn>);
    goto L55(r146);
  L278(r160, l13, r161, dx49):
    dimnames__ = ldf `dimnames<-`;
    check L282() else D81();
  L279():
    dr34 = tryDispatchBuiltin.1("$", l7);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L281() else L280(r145, l7, r145, dr34);
  L280(r156, l10, r157, l11):
    r162 = `$`(l11, <sym vectors>);
    goto L278(r156, l10, r157, r162);
  D81():
    deopt 308 [r160, l13, dx49, r161];
  L53(r139):
    c30 = `is.object`(r139);
    if c30 then L261() else L262(r139);
  L56(r148):
    c31 = `is.object`(r148);
    if c31 then L273() else L274(r148);
  L176(dx25):
    st cen = dx25;
    goto L19();
  L177():
    dr18 = tryDispatchBuiltin.1("$", covmat32);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L179() else L178(dr18);
  L178(covmat34):
    r71 = `$`(covmat34, <sym center>);
    goto L176(r71);
  L257():
    cv10 = ld cv;
    check L259() else D73();
  L258():
    r138 = dyn base18(<sym cv>);
    goto L53(r138);
  L269():
    x5 = ld x;
    check L271() else D77();
  L270():
    r147 = dyn base20(<sym x>);
    goto L56(r147);
  L281():
    dx48 = getTryDispatchBuiltinValue(dr34);
    goto L278(r145, l7, r145, dx48);
  L282():
    r163 = dyn dimnames__(dx49, NULL, r161);
    check L283() else D82();
  D73():
    deopt 278 [cv10];
  D77():
    deopt 293 [x5];
  D82():
    deopt 310 [r160, l13, r163];
  L54(dx45):
    cn2 = ld cn;
    check L264() else D75();
  L57(dx47):
    cn4 = ld cn;
    check L276() else D79();
  L179():
    dx24 = getTryDispatchBuiltinValue(dr18);
    goto L176(dx24);
  L259():
    cv11 = force? cv10;
    checkMissing(cv11);
    dimnames = ldf dimnames in base;
    r140 = dyn dimnames(cv11);
    check L260() else D74();
  L261():
    dr30 = tryDispatchBuiltin.1("[[", r139);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L263() else L262(dr30);
  L262(r142):
    __5 = ldf `[[` in base;
    r143 = dyn __5(r142, 2);
    goto L54(r143);
  L271():
    x6 = force? x5;
    checkMissing(x6);
    dimnames1 = ldf dimnames in base;
    r149 = dyn dimnames1(x6);
    check L272() else D78();
  L273():
    dr32 = tryDispatchBuiltin.1("[[", r148);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L275() else L274(dr32);
  L274(r151):
    __6 = ldf `[[` in base;
    r152 = dyn __6(r151, 2);
    goto L57(r152);
  L283():
    c33 = `is.object`(l13);
    if c33 then L285() else L286(r160, l13);
  D74():
    deopt 281 [r140];
  D75():
    deopt 285 [cn2];
  D78():
    deopt 296 [r149];
  D79():
    deopt 300 [cn4];
  L260():
    goto L53(r140);
  L263():
    dx44 = getTryDispatchBuiltinValue(dr30);
    goto L54(dx44);
  L264():
    cn3 = force? cn2;
    checkMissing(cn3);
    list = ldf list in base;
    r144 = dyn list(dx45, cn3);
    check L265() else D76();
  L272():
    goto L56(r149);
  L275():
    dx46 = getTryDispatchBuiltinValue(dr32);
    goto L57(dx46);
  L276():
    cn5 = force? cn4;
    checkMissing(cn5);
    list1 = ldf list in base;
    r153 = dyn list1(dx47, cn5);
    check L277() else D80();
  L284(dx51):
    st edc = dx51;
    sym21 = ldf sqrt;
    base21 = ldf sqrt in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L288() else L289();
  L285():
    dr36 = tryDispatchBuiltin.0("$<-", l13, r163);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L287() else L286(r160, dr36);
  L286(r165, l15):
    r168 = `$<-`(l15, <sym vectors>, r163);
    goto L284(r168);
  D76():
    deopt 288 [r144];
  D80():
    deopt 303 [r153];
  L58(r170):
    st sdev = r170;
    setNames = ldf setNames;
    check L291() else D84();
  L265():
    goto L52(r144);
  L277():
    goto L55(r153);
  L287():
    dx50 = getTryDispatchBuiltinValue(dr36);
    goto L284(dx50);
  L288():
    ev10 = ld ev;
    check L290() else D83();
  L289():
    r169 = dyn base21(<sym ev>);
    goto L58(r169);
  D83():
    deopt 314 [ev10];
  D84():
    deopt 319 [];
  L290():
    ev11 = force? ev10;
    checkMissing(ev11);
    r171 = sqrt(ev11);
    goto L58(r171);
  L291():
    p12 = prom<V +>{
      cor3 = ld cor;
      cor4 = force? cor3;
      checkMissing(cor4);
      c34 = `as.logical`(cor4);
      if c34 then L2() else L0();
    L0():
      sym22 = ldf `rep.int`;
      base22 = ldf `rep.int` in base;
      guard22 = `==`.4(sym22, base22);
      if guard22 then L4() else L5();
    L2():
      sds6 = ld sds;
      sds7 = force? sds6;
      checkMissing(sds7);
      return sds7;
    L1(r173):
      return r173;
    L4():
      ncol1 = ldf ncol;
      p11 = prom<V +>{
        cv12 = ld cv;
        cv13 = force? cv12;
        checkMissing(cv13);
        return cv13;
      };
      r175 = dyn ncol1(p11);
      rep_int = ldf `rep.int` in base;
      r176 = dyn rep_int(1.0, r175);
      goto L1(r176);
    L5():
      r172 = dyn base22(1.0, <lang ncol(cv)>);
      goto L1(r172);
    };
    p14 = prom<V +>{
      colnames = ldf colnames;
      p13 = prom<V +>{
        cv14 = ld cv;
        cv15 = force? cv14;
        checkMissing(cv15);
        return cv15;
      };
      r179 = dyn colnames(p13);
      return r179;
    };
    r181 = dyn setNames(p12, p14);
    check L292() else D85();
  D85():
    deopt 322 [r181];
  L292():
    st sc = r181;
    fix_sign1 = ld fix_sign;
    check L293() else D86();
  D86():
    deopt 324 [fix_sign1];
  L293():
    fix_sign2 = force? fix_sign1;
    checkMissing(fix_sign2);
    c35 = `as.logical`(fix_sign2);
    if c35 then L294() else L59();
  L59():
    identity = ld identity;
    check L296() else D87();
  L60(r183):
    st fix = r183;
    fix = ldf fix;
    check L297() else D88();
  L294():
    r182 = clos inner1474057981;
    goto L60(r182);
  D87():
    deopt 328 [identity];
  D88():
    deopt 332 [];
  L296():
    identity1 = force? identity;
    checkMissing(identity1);
    goto L60(identity1);
  L297():
    p15 = prom<V +>{
      edc4 = ld edc;
      edc5 = force? edc4;
      checkMissing(edc5);
      c36 = `is.object`(edc5);
      if c36 then L1() else L2(edc5);
    L0(dx53):
      return dx53;
    L1():
      dr38 = tryDispatchBuiltin.1("$", edc5);
      dc19 = getTryDispatchBuiltinDispatched(dr38);
      if dc19 then L3() else L2(dr38);
    L2(edc7):
      r184 = `$`(edc7, <sym vectors>);
      goto L0(r184);
    L3():
      dx52 = getTryDispatchBuiltinValue(dr38);
      goto L0(dx52);
    };
    r186 = dyn fix(p15);
    check L298() else D89();
  D89():
    deopt 334 [r186];
  L298():
    st ev = r186;
    scores1 = ld scores;
    check L299() else D90();
  D90():
    deopt 336 [scores1];
  L299():
    scores2 = force? scores1;
    checkMissing(scores2);
    c37 = `as.logical`(scores2);
    if c37 then L300() else L61(c37);
  L61(c39):
    c46 = `as.logical`(c39);
    if c46 then L304() else L63(c46);
  L300():
    sym23 = ldf missing;
    base23 = ldf missing in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L301() else L302();
  L62(c42, r188):
    r190 = `!`(r188);
    c43 = `as.logical`(r190);
    c44 = `&&`(c42, c43);
    goto L61(c44);
  L63(c48):
    c56 = `as.logical`(c48);
    if c56 then L309() else L65();
  L301():
    missing3 = ldf missing in base;
    r189 = dyn missing3(<sym x>);
    goto L62(c37, r189);
  L302():
    r187 = dyn base23(<sym x>);
    goto L62(c37, r187);
  L304():
    sym24 = ldf `is.null`;
    base24 = ldf `is.null` in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L305() else L306();
  L64(c51, r192):
    r193 = `!`(r192);
    c53 = `as.logical`(r193);
    c54 = `&&`(c51, c53);
    goto L63(c54);
  L65():
    goto L66(NULL);
  L66(r199):
    st scr = r199;
    sym25 = ldf `is.null`;
    base25 = ldf `is.null` in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L315() else L316();
  L305():
    cen = ld cen;
    check L307() else D91();
  L306():
    r191 = dyn base24(<sym cen>);
    goto L64(c46, r191);
  L309():
    scale = ldf scale;
    check L310() else D92();
  D91():
    deopt 344 [c46, cen];
  D92():
    deopt 351 [];
  L67(r201):
    c58 = `as.logical`(r201);
    if c58 then L318() else L68();
  L307():
    cen1 = force? cen;
    checkMissing(cen1);
    c52 = `==`(cen1, NULL);
    goto L64(c46, c52);
  L310():
    p16 = prom<V +>{
      z4 = ld z;
      z5 = force? z4;
      checkMissing(z5);
      return z5;
    };
    p17 = prom<V +>{
      cen2 = ld cen;
      cen3 = force? cen2;
      checkMissing(cen3);
      return cen3;
    };
    p18 = prom<V +>{
      sc = ld sc;
      sc1 = force? sc;
      checkMissing(sc1);
      return sc1;
    };
    r197 = dyn scale[, center, scale](p16, p17, p18);
    check L311() else D93();
  L315():
    cen4 = ld cen;
    check L317() else D96();
  L316():
    r200 = dyn base25(<sym cen>);
    goto L67(r200);
  D93():
    deopt 357 [r197];
  D96():
    deopt 366 [cen4];
  L68():
    goto L70();
  L70():
    sym27 = ldf list;
    base27 = ldf list in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L322() else L323();
  L311():
    ev12 = ld ev;
    check L312() else D94();
  L317():
    cen5 = force? cen4;
    checkMissing(cen5);
    c57 = `==`(cen5, NULL);
    goto L67(c57);
  L318():
    sym26 = ldf rep;
    base26 = ldf rep in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L319() else L320();
  D94():
    deopt 358 [ev12];
  L69(r203):
    st cen = r203;
    goto L70();
  L71(r207):
    st edc = r207;
    l16 = ld edc;
    class__ = ldf `class<-`;
    check L333() else D106();
  L312():
    ev13 = force? ev12;
    checkMissing(ev13);
    ___1 = ldf `%*%` in base;
    r198 = dyn ___1(r197, ev13);
    check L313() else D95();
  L319():
    rep = ldf rep in base;
    r204 = dyn rep(NA_REAL, <lang nrow(cv)>);
    goto L69(r204);
  L320():
    r202 = dyn base26(NA_REAL, <lang nrow(cv)>);
    goto L69(r202);
  L322():
    sdev = ld sdev;
    check L324() else D97();
  L323():
    r206 = dyn base27[sdev, loadings, center, scale, `n.obs`, scores, call](<sym sdev>, <lang structure(ev, class="loadings")>, <sym cen>, <sym sc>, <sym n.obs>, <sym scr>, <sym cl>);
    goto L71(r206);
  D95():
    deopt 361 [r198];
  D97():
    deopt 377 [sdev];
  D106():
    deopt 408 ["princomp", l16, "princomp"];
  L313():
    goto L66(r198);
  L324():
    sdev1 = force? sdev;
    checkMissing(sdev1);
    structure = ldf structure;
    check L325() else D98();
  L333():
    r211 = dyn class__(l16, NULL, "princomp");
    check L334() else D107();
  D98():
    deopt 381 [];
  D107():
    deopt 410 ["princomp", r211];
  L325():
    p19 = prom<V +>{
      ev14 = ld ev;
      ev15 = force? ev14;
      checkMissing(ev15);
      return ev15;
    };
    r209 = dyn structure[, class](p19, "loadings");
    check L326() else D99();
  L334():
    st edc = r211;
    edc8 = ld edc;
    check L335() else D108();
  D99():
    deopt 385 [r209];
  D108():
    deopt 412 [edc8];
  L326():
    cen6 = ld cen;
    check L327() else D100();
  L335():
    edc9 = force? edc8;
    checkMissing(edc9);
    popenv;
    return edc9;
  D100():
    deopt 387 [cen6];
  L327():
    cen7 = force? cen6;
    checkMissing(cen7);
    sc2 = ld sc;
    check L328() else D101();
  D101():
    deopt 390 [sc2];
  L328():
    sc3 = force? sc2;
    checkMissing(sc3);
    n_obs2 = ld `n.obs`;
    check L329() else D102();
  D102():
    deopt 393 [n_obs2];
  L329():
    n_obs3 = force? n_obs2;
    checkMissing(n_obs3);
    scr = ld scr;
    check L330() else D103();
  D103():
    deopt 396 [scr];
  L330():
    scr1 = force? scr;
    checkMissing(scr1);
    cl = ld cl;
    check L331() else D104();
  D104():
    deopt 399 [cl];
  L331():
    cl1 = force? cl;
    checkMissing(cl1);
    list2 = ldf list in base;
    r210 = dyn list2(sdev1, r209, cen7, sc3, n_obs3, scr1, cl1);
    check L332() else D105();
  D105():
    deopt 403 [r210];
  L332():
    goto L71(r210);
  }
}
fun inner1474057981(A) {
  (reg A:*) -+> V { var A:*, reg r:cls, reg apply:cls, reg A1:*, reg A2:V, reg p:p(V +), reg r2:cls, reg p1:p(V +), reg r4:V, reg l:*, reg c:L, reg r6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ___:cls, reg r9:V, reg A3:*, reg A4:V |
    mkenv;
    st A = A;
    r = clos inner2501545716;
    st mysign = r;
    apply = ldf apply;
    check L1() else D0();
  D0():
    deopt 4 [];
  L1():
    p = prom<V +>{
      A1 = ld A;
      A2 = force? A1;
      checkMissing(A2);
      return A2;
    };
    p1 = prom<V +>{
      r2 = clos inner2501545716;
      return r2;
    };
    r4 = dyn apply(p, 2, p1);
    check L2() else D1();
  D1():
    deopt 8 [r4];
  L2():
    l = ld A;
    c = `is.object`(l);
    if c then L3() else L4(r4);
  L0(dx1):
    st A = dx1;
    A3 = ld A;
    check L6() else D2();
  L3():
    dr = tryDispatchBuiltin.0("[<-", l, r4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4(r4);
  L4(r6):
    ___ = ldf `[<-` in base;
    r9 = dyn ___(l, <missing>, r4);
    goto L0(r9);
  D2():
    deopt 14 [A3];
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L6():
    A4 = force? A3;
    checkMissing(A4);
    popenv;
    return A4;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg ifelse:cls, reg x1:*, reg x2:V, reg r:V, reg p:p(V +), reg p1:p(V +), reg r3:V |
    mkenv;
    st x = x;
    ifelse = ldf ifelse;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      r = `<`(x2, 0.0);
      return r;
    };
    p1 = prom<V +>{
      return -1.0;
    };
    r3 = dyn ifelse(p, p1, 1.0);
    check L1() else D1();
  D1():
    deopt 5 [r3];
  L1():
    popenv;
    return r3;
  }
}