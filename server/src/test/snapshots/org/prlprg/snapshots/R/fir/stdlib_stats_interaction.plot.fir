fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg with:cls, reg ToothGrowth:*, reg ToothGrowth1:V, reg p1:p(V +), reg interaction_plot:cls, reg dose:*, reg dose1:V, reg p2:p(V +), reg supp:*, reg supp1:V, reg p3:p(V +), reg len:*, reg len1:V, reg p4:p(V +), reg ordered:cls, reg dose2:*, reg dose3:V, reg p5:p(V +), reg r13:V, reg interaction_plot1:cls, reg dose4:*, reg dose5:V, reg p6:p(V +), reg supp2:*, reg supp3:V, reg p7:p(V +), reg len2:*, reg len3:V, reg p8:p(V +), reg p9:p(V +), reg interaction_plot2:cls, reg dose6:*, reg dose7:V, reg p10:p(V +), reg supp4:*, reg supp5:V, reg p11:p(V +), reg len4:*, reg len5:V, reg p12:p(V +), reg p13:p(V +), reg r23:V, reg p14:p(V +), reg r25:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r26:V, reg r27:V, reg with1:cls, reg OrchardSprays:*, reg OrchardSprays1:V, reg p15:p(V +), reg interaction_plot3:cls, reg treatment:*, reg treatment1:V, reg p16:p(V +), reg rowpos:*, reg rowpos1:V, reg p17:p(V +), reg decrease:*, reg decrease1:V, reg p18:p(V +), reg interaction_plot4:cls, reg rowpos2:*, reg rowpos3:V, reg p19:p(V +), reg treatment2:*, reg treatment3:V, reg p20:p(V +), reg decrease2:*, reg decrease3:V, reg p21:p(V +), reg factor:cls, reg rowpos4:*, reg rowpos5:V, reg p22:p(V +), reg sort_list:cls, reg tapply:cls, reg decrease4:*, reg decrease5:V, reg p23:p(V +), reg rowpos6:*, reg rowpos7:V, reg p24:p(V +), reg mean:*, reg mean1:V, reg p25:p(V +), reg r41:V, reg p26:p(V +), reg r43:V, reg p27:p(V +), reg r45:V, reg interaction_plot5:cls, reg rowpos8:*, reg rowpos9:V, reg p28:p(V +), reg treatment4:*, reg treatment5:V, reg p29:p(V +), reg decrease6:*, reg decrease7:V, reg p30:p(V +), reg p31:p(V +), reg r50:V, reg p32:p(V +), reg r52:V |
    mkenv;
    r = clos inner621340390;
    st `interaction.plot` = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0():
    sym1 = ldf with;
    base1 = ldf with in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L3():
    require = ldf require;
    check L5() else D0();
  L4():
    r1 = dyn base(<sym graphics>);
    goto L0();
  D0():
    deopt 5 [];
  L1():
    sym2 = ldf with;
    base2 = ldf with in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L11() else L12();
  L5():
    p = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r4 = dyn require(p);
    check L6() else D1();
  L7():
    with = ldf with;
    check L9() else D2();
  L8():
    r5 = dyn base1(<sym ToothGrowth>, <lang {
      interaction.plot(dose, supp, len, fixed=TRUE);
      `<-`(dose, ordered(dose));
      interaction.plot(dose, supp, len, fixed=TRUE, col=`:`(2.0, 3.0), leg.bty="o", xtick=TRUE);
      interaction.plot(dose, supp, len, fixed=TRUE, col=`:`(2.0, 3.0), type="p")
    }>);
    goto L1();
  D1():
    deopt 7 [r4];
  D2():
    deopt 10 [];
  L2(r27):
    popenv;
    return r27;
  L6():
    goto L0();
  L9():
    p1 = prom<V +>{
      ToothGrowth = ld ToothGrowth;
      ToothGrowth1 = force? ToothGrowth;
      checkMissing(ToothGrowth1);
      return ToothGrowth1;
    };
    p14 = prom<V +>{
      interaction_plot = ldf `interaction.plot`;
      p2 = prom<V +>{
        dose = ld dose;
        dose1 = force? dose;
        checkMissing(dose1);
        return dose1;
      };
      p3 = prom<V +>{
        supp = ld supp;
        supp1 = force? supp;
        checkMissing(supp1);
        return supp1;
      };
      p4 = prom<V +>{
        len = ld len;
        len1 = force? len;
        checkMissing(len1);
        return len1;
      };
      dyn interaction_plot[, , , fixed](p2, p3, p4, TRUE);
      ordered = ldf ordered;
      p5 = prom<V +>{
        dose2 = ld dose;
        dose3 = force? dose2;
        checkMissing(dose3);
        return dose3;
      };
      r13 = dyn ordered(p5);
      st dose = r13;
      interaction_plot1 = ldf `interaction.plot`;
      p6 = prom<V +>{
        dose4 = ld dose;
        dose5 = force? dose4;
        checkMissing(dose5);
        return dose5;
      };
      p7 = prom<V +>{
        supp2 = ld supp;
        supp3 = force? supp2;
        checkMissing(supp3);
        return supp3;
      };
      p8 = prom<V +>{
        len2 = ld len;
        len3 = force? len2;
        checkMissing(len3);
        return len3;
      };
      p9 = prom<V +>{
        return <int 2, 3>;
      };
      dyn interaction_plot1[, , , fixed, col, `leg.bty`, xtick](p6, p7, p8, TRUE, p9, "o", TRUE);
      interaction_plot2 = ldf `interaction.plot`;
      p10 = prom<V +>{
        dose6 = ld dose;
        dose7 = force? dose6;
        checkMissing(dose7);
        return dose7;
      };
      p11 = prom<V +>{
        supp4 = ld supp;
        supp5 = force? supp4;
        checkMissing(supp5);
        return supp5;
      };
      p12 = prom<V +>{
        len4 = ld len;
        len5 = force? len4;
        checkMissing(len5);
        return len5;
      };
      p13 = prom<V +>{
        return <int 2, 3>;
      };
      r23 = dyn interaction_plot2[, , , fixed, col, type](p10, p11, p12, TRUE, p13, "p");
      return r23;
    };
    r25 = dyn with(p1, p14);
    check L10() else D3();
  L11():
    with1 = ldf with;
    check L13() else D4();
  L12():
    r26 = dyn base2(<sym OrchardSprays>, <lang {
      interaction.plot(treatment, rowpos, decrease);
      interaction.plot(rowpos, treatment, decrease, cex.axis=0.8);
      `<-`(rowpos, factor(rowpos, levels=sort.list(tapply(decrease, rowpos, mean))));
      interaction.plot(rowpos, treatment, decrease, col=`:`(2.0, 9.0), lty=1.0)
    }>);
    goto L2(r26);
  D3():
    deopt 13 [r25];
  D4():
    deopt 16 [];
  L10():
    goto L1();
  L13():
    p15 = prom<V +>{
      OrchardSprays = ld OrchardSprays;
      OrchardSprays1 = force? OrchardSprays;
      checkMissing(OrchardSprays1);
      return OrchardSprays1;
    };
    p32 = prom<V +>{
      interaction_plot3 = ldf `interaction.plot`;
      p16 = prom<V +>{
        treatment = ld treatment;
        treatment1 = force? treatment;
        checkMissing(treatment1);
        return treatment1;
      };
      p17 = prom<V +>{
        rowpos = ld rowpos;
        rowpos1 = force? rowpos;
        checkMissing(rowpos1);
        return rowpos1;
      };
      p18 = prom<V +>{
        decrease = ld decrease;
        decrease1 = force? decrease;
        checkMissing(decrease1);
        return decrease1;
      };
      dyn interaction_plot3(p16, p17, p18);
      interaction_plot4 = ldf `interaction.plot`;
      p19 = prom<V +>{
        rowpos2 = ld rowpos;
        rowpos3 = force? rowpos2;
        checkMissing(rowpos3);
        return rowpos3;
      };
      p20 = prom<V +>{
        treatment2 = ld treatment;
        treatment3 = force? treatment2;
        checkMissing(treatment3);
        return treatment3;
      };
      p21 = prom<V +>{
        decrease2 = ld decrease;
        decrease3 = force? decrease2;
        checkMissing(decrease3);
        return decrease3;
      };
      dyn interaction_plot4[, , , `cex.axis`](p19, p20, p21, 0.8);
      factor = ldf factor;
      p22 = prom<V +>{
        rowpos4 = ld rowpos;
        rowpos5 = force? rowpos4;
        checkMissing(rowpos5);
        return rowpos5;
      };
      p27 = prom<V +>{
        sort_list = ldf `sort.list`;
        p26 = prom<V +>{
          tapply = ldf tapply;
          p23 = prom<V +>{
            decrease4 = ld decrease;
            decrease5 = force? decrease4;
            checkMissing(decrease5);
            return decrease5;
          };
          p24 = prom<V +>{
            rowpos6 = ld rowpos;
            rowpos7 = force? rowpos6;
            checkMissing(rowpos7);
            return rowpos7;
          };
          p25 = prom<V +>{
            mean = ld mean;
            mean1 = force? mean;
            checkMissing(mean1);
            return mean1;
          };
          r41 = dyn tapply(p23, p24, p25);
          return r41;
        };
        r43 = dyn sort_list(p26);
        return r43;
      };
      r45 = dyn factor[, levels](p22, p27);
      st rowpos = r45;
      interaction_plot5 = ldf `interaction.plot`;
      p28 = prom<V +>{
        rowpos8 = ld rowpos;
        rowpos9 = force? rowpos8;
        checkMissing(rowpos9);
        return rowpos9;
      };
      p29 = prom<V +>{
        treatment4 = ld treatment;
        treatment5 = force? treatment4;
        checkMissing(treatment5);
        return treatment5;
      };
      p30 = prom<V +>{
        decrease6 = ld decrease;
        decrease7 = force? decrease6;
        checkMissing(decrease7);
        return decrease7;
      };
      p31 = prom<V +>{
        return <int 2, 3, 4, 5, 6, 7, 8, 9>;
      };
      r50 = dyn interaction_plot5[, , , col, lty](p28, p29, p30, p31, 1.0);
      return r50;
    };
    r52 = dyn with1(p15, p32);
    check L14() else D5();
  D5():
    deopt 19 [r52];
  L14():
    goto L2(r52);
  }
}
fun inner621340390(`x.factor`, `trace.factor`, response, fun, type, legend, `trace.label`, fixed, xlab, ylab, ylim, lty, col, pch, xpd, `leg.bg`, `leg.bty`, xtick, xaxt, axes, `...`) {
  (reg x_factor:*, reg trace_factor:*, reg response:*, reg fun:*, reg type:*, reg legend:*, reg trace_label:*, reg fixed:*, reg xlab:*, reg ylab:*, reg ylim:*, reg lty:*, reg col:*, reg pch:*, reg xpd:*, reg leg_bg:*, reg leg_bty:*, reg xtick:*, reg xaxt:*, reg axes:*, reg ddd:dots) -+> V { var `x.factor`:*, var `trace.factor`:*, var response:*, var fun:*, reg fun_isMissing:L, reg fun_orDefault:*, reg mean:*, reg mean1:V, reg p:p(V +), var type:*, reg type_isMissing:L, reg type_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p1:p(V +), var legend:*, reg legend_isMissing:L, reg legend_orDefault:*, var `trace.label`:*, reg trace_label_isMissing:L, reg trace_label_orDefault:*, reg deparse1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg substitute:cls, reg r7:V, reg p2:p(V +), reg r9:V, reg p3:p(V +), var fixed:*, reg fixed_isMissing:L, reg fixed_orDefault:*, var xlab:*, reg xlab_isMissing:L, reg xlab_orDefault:*, reg deparse2:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg substitute1:cls, reg r13:V, reg p4:p(V +), reg r15:V, reg p5:p(V +), var ylab:*, reg ylab_isMissing:L, reg ylab_orDefault:*, reg ylabel:*, reg ylabel1:V, reg p6:p(V +), var ylim:*, reg ylim_isMissing:L, reg ylim_orDefault:*, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg cells:*, reg cells1:V, reg range:cls, reg r20:V, reg p7:p(V +), var lty:*, reg lty_isMissing:L, reg lty_orDefault:*, reg nc:*, reg nc1:V, reg r22:V, reg p8:p(V +), var col:*, reg col_isMissing:L, reg col_orDefault:*, var pch:*, reg pch_isMissing:L, reg pch_orDefault:*, reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg r25:V, reg letters:*, reg letters1:V, reg c1:cls, reg r26:V, reg p9:p(V +), var xpd:*, reg xpd_isMissing:L, reg xpd_orDefault:*, var `leg.bg`:*, reg leg_bg_isMissing:L, reg leg_bg_orDefault:*, reg par:cls, reg r28:V, reg p10:p(V +), var `leg.bty`:*, reg leg_bty_isMissing:L, reg leg_bty_orDefault:*, var xtick:*, reg xtick_isMissing:L, reg xtick_orDefault:*, var xaxt:*, reg xaxt_isMissing:L, reg xaxt_orDefault:*, reg par1:cls, reg r30:V, reg p11:p(V +), var axes:*, reg axes_isMissing:L, reg axes_orDefault:*, var `...`:dots?, reg paste:cls, reg deparse3:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg r33:V, reg substitute2:cls, reg r34:V, reg p12:p(V +), reg r36:V, reg p13:p(V +), reg deparse4:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r38:V, reg r39:V, reg substitute3:cls, reg r40:V, reg p14:p(V +), reg r42:V, reg p15:p(V +), reg r44:V, reg match_arg:cls, reg type1:*, reg type2:V, reg p16:p(V +), reg r46:V, reg tapply:cls, reg response1:*, reg response2:V, reg p17:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r48:V, reg r49:V, reg x_factor1:*, reg x_factor2:V, reg trace_factor1:*, reg trace_factor2:V, reg list:cls, reg r50:V, reg p18:p(V +), reg fun1:*, reg fun2:V, reg p19:p(V +), reg r53:V, reg nrow:cls, reg cells2:*, reg cells3:V, reg p20:p(V +), reg r55:V, reg ncol:cls, reg cells4:*, reg cells5:V, reg p21:p(V +), reg r57:V, reg nr:*, reg nr1:V, reg r58:V, reg is_ordered:cls, reg x_factor3:*, reg x_factor4:V, reg p22:p(V +), reg r60:V, reg c2:L, reg getOption:cls, reg r61:V, reg options:cls, reg p23:p(V +), reg r63:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r64:V, reg r65:V, reg levels:cls, reg x_factor5:*, reg x_factor6:V, reg p24:p(V +), reg r67:V, reg as_numeric:cls, reg r68:V, reg options1:cls, reg wn:*, reg wn1:V, reg p25:p(V +), reg r70:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r71:V, reg r72:V, reg xnm:*, reg xnm1:V, reg anyNA:cls, reg r73:V, reg r74:V, reg c3:L, reg xnm2:*, reg xnm3:V, reg xnm4:V, reg rownames:cls, reg cells6:*, reg cells7:V, reg p26:p(V +), reg r76:V, reg colnames:cls, reg cells8:*, reg cells9:V, reg p27:p(V +), reg r78:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r79:V, reg r80:V, reg sapply:cls, reg ylabs:*, reg ylabs1:V, reg p28:p(V +), reg nchar:*, reg nchar1:V, reg p29:p(V +), reg r83:V, reg max:cls, reg r84:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r85:V, reg r86:V, reg xlabs:*, reg xlabs1:V, reg c4:V, reg c5:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r87:V, reg r88:V, reg xvals:*, reg xvals1:V, reg as_character:cls, reg r89:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r91:V, reg r92:V, reg ylabs2:*, reg ylabs3:V, reg c6:V, reg c7:L, reg sym14:cls, reg base14:cls, reg guard14:L, reg r93:V, reg r94:V, reg nc2:*, reg nc3:V, reg r95:V, reg as_character1:cls, reg r96:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r98:V, reg r99:V, reg xvals2:*, reg xvals3:V, reg range1:cls, reg r100:V, reg xlim:*, reg xlim1:V, reg c8:L, reg xlim3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r101:V, reg diff:cls, reg xlim4:*, reg xlim5:V, reg p30:p(V +), reg r103:V, reg r104:V, reg r105:V, reg xlim6:*, reg xlim7:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r106:V, reg xlim10:V, reg r107:V, reg nr2:*, reg nr3:V, reg r108:V, reg legend1:*, reg legend2:V, reg c9:L, reg nch:*, reg nch1:V, reg r109:V, reg r110:V, reg xlim13:V, reg r111:V, reg nr4:*, reg nr5:V, reg r112:V, reg c10:cls, reg r113:V, reg diff1:cls, reg xlim14:*, reg xlim15:V, reg p31:p(V +), reg r115:V, reg r116:V, reg r117:V, reg dev_hold:cls, reg r118:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r119:V, reg on_exit:cls, reg r121:V, reg matplot:cls, reg xvals4:*, reg xvals5:V, reg p32:p(V +), reg cells10:*, reg cells11:V, reg p33:p(V +), reg ddd1:dots?, reg type3:*, reg type4:V, reg p34:p(V +), reg xlim16:*, reg xlim17:V, reg p35:p(V +), reg ylim1:*, reg ylim2:V, reg p36:p(V +), reg xlab1:*, reg xlab2:V, reg p37:p(V +), reg ylab1:*, reg ylab2:V, reg p38:p(V +), reg axes1:*, reg axes2:V, reg p39:p(V +), reg col1:*, reg col2:V, reg p40:p(V +), reg lty1:*, reg lty2:V, reg p41:p(V +), reg pch1:*, reg pch2:V, reg p42:p(V +), reg r133:V, reg axes3:*, reg axes4:V, reg c11:L, reg c13:V, reg xaxt1:*, reg xaxt2:V, reg r134:V, reg c14:L, reg c15:V, reg c17:L, reg r135:cls, reg axisInt:cls, reg xvals6:*, reg xvals7:V, reg p43:p(V +), reg xlabs2:*, reg xlabs3:V, reg p44:p(V +), reg xtick1:*, reg xtick2:V, reg p45:p(V +), reg xaxt3:*, reg xaxt4:V, reg p46:p(V +), reg ddd2:dots?, reg r140:V, reg legend3:*, reg legend4:V, reg c18:L, reg diff2:cls, reg ylim3:*, reg ylim4:V, reg p47:p(V +), reg r143:V, reg ylim5:*, reg ylim6:V, reg c19:L, reg ylim8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r144:V, reg yrng:*, reg yrng1:V, reg r145:V, reg r146:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r147:V, reg r148:V, reg xpd1:*, reg xpd2:V, reg c20:V, reg r149:V, reg c21:L, reg c22:V, reg par2:cls, reg r150:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r151:V, reg c26:L, reg r152:V, reg xpd_:*, reg xpd_1:V, reg is_na:cls, reg r153:V, reg r154:V, reg c27:L, reg c30:L, reg c31:V, reg xpd_2:*, reg xpd_3:V, reg r155:V, reg c32:L, reg c33:V, reg c36:L, reg c39:L, reg c40:V, reg c41:L, reg c42:V, reg c45:L, reg c46:V, reg c48:L, reg par3:cls, reg xpd3:*, reg xpd4:V, reg p48:p(V +), reg r157:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r158:V, reg r159:V, reg on_exit1:cls, reg r160:V, reg text:cls, reg xleg:*, reg xleg1:V, reg p49:p(V +), reg ylim9:*, reg ylim10:V, reg c49:L, reg ylim12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r163:V, reg yrng2:*, reg yrng3:V, reg r164:V, reg r165:V, reg p50:p(V +), reg paste1:cls, reg trace_label1:*, reg trace_label2:V, reg p51:p(V +), reg r168:V, reg p52:p(V +), reg r170:V, reg fixed1:*, reg fixed2:V, reg r171:V, reg c50:L, reg sort_list:cls, reg cells12:*, reg cells13:V, reg c51:L, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg nr6:*, reg nr7:V, reg __3:cls, reg r172:V, reg p53:p(V +), reg r174:V, reg ylabs4:*, reg ylabs5:V, reg c52:L, reg ylabs7:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg ord:*, reg ord1:V, reg __4:cls, reg r175:V, reg lty3:*, reg lty4:V, reg c53:L, reg lty6:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg ord2:*, reg ord3:V, reg r176:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r179:V, reg lty9:V, reg r180:R, reg r181:V, reg lty10:*, reg lty11:V, reg length:cls, reg r182:V, reg __5:cls, reg r183:V, reg r184:V, reg __6:cls, reg r185:V, reg col3:*, reg col4:V, reg c54:L, reg col6:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg ord4:*, reg ord5:V, reg r186:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r189:V, reg col9:V, reg r190:R, reg r191:V, reg col10:*, reg col11:V, reg length1:cls, reg r192:V, reg __7:cls, reg r193:V, reg r194:V, reg __8:cls, reg r195:V, reg pch3:*, reg pch4:V, reg c55:L, reg pch6:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg ord6:*, reg ord7:V, reg __9:cls, reg r196:V, reg legend5:cls, reg xleg2:*, reg xleg3:V, reg p54:p(V +), reg yleg:*, reg yleg1:V, reg p55:p(V +), reg ylabs8:*, reg ylabs9:V, reg p56:p(V +), reg col12:*, reg col13:V, reg p57:p(V +), reg _in_:cls, reg type5:*, reg type6:V, reg p58:p(V +), reg sym23:cls, reg base23:cls, reg guard23:L, reg r202:V, reg r203:V, reg c56:cls, reg r204:V, reg p59:p(V +), reg r206:V, reg c57:L, reg pch7:*, reg pch8:V, reg p60:p(V +), reg _in_1:cls, reg type7:*, reg type8:V, reg p61:p(V +), reg sym24:cls, reg base24:cls, reg guard24:L, reg r209:V, reg r210:V, reg c58:cls, reg r211:V, reg p62:p(V +), reg r213:V, reg c59:L, reg lty12:*, reg lty13:V, reg p63:p(V +), reg leg_bty1:*, reg leg_bty2:V, reg p64:p(V +), reg leg_bg1:*, reg leg_bg2:V, reg p65:p(V +), reg r217:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r219:V, reg r220:V, reg invisible:cls, reg r221:V |
    mkenv;
    st `x.factor` = x_factor;
    st `trace.factor` = trace_factor;
    st response = response;
    fun_isMissing = missing.0(fun);
    if fun_isMissing then L0() else L1(fun);
  L0():
    p = prom<V +>{
      mean = ld mean;
      mean1 = force? mean;
      checkMissing(mean1);
      return mean1;
    };
    goto L1(p);
  L1(fun_orDefault):
    st fun = fun_orDefault;
    type_isMissing = missing.0(type);
    if type_isMissing then L2() else L3(type);
  L2():
    p1 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      c = ldf c in base;
      r3 = dyn c("l", "p", "b", "o", "c");
      goto L0(r3);
    L2():
      r1 = dyn base("l", "p", "b", "o", "c");
      goto L0(r1);
    };
    goto L3(p1);
  L3(type_orDefault):
    st type = type_orDefault;
    legend_isMissing = missing.0(legend);
    if legend_isMissing then L4(TRUE) else L4(legend);
  L4(legend_orDefault):
    st legend = legend_orDefault;
    trace_label_isMissing = missing.0(trace_label);
    if trace_label_isMissing then L5() else L6(trace_label);
  L5():
    p3 = prom<V +>{
      deparse1 = ldf deparse1;
      p2 = prom<V +>{
        sym1 = ldf substitute;
        base1 = ldf substitute in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r6):
        return r6;
      L1():
        substitute = ldf substitute in base;
        r7 = dyn substitute(<sym trace.factor>);
        goto L0(r7);
      L2():
        r5 = dyn base1(<sym trace.factor>);
        goto L0(r5);
      };
      r9 = dyn deparse1(p2);
      return r9;
    };
    goto L6(p3);
  L6(trace_label_orDefault):
    st `trace.label` = trace_label_orDefault;
    fixed_isMissing = missing.0(fixed);
    if fixed_isMissing then L7(FALSE) else L7(fixed);
  L7(fixed_orDefault):
    st fixed = fixed_orDefault;
    xlab_isMissing = missing.0(xlab);
    if xlab_isMissing then L8() else L9(xlab);
  L8():
    p5 = prom<V +>{
      deparse2 = ldf deparse1;
      p4 = prom<V +>{
        sym2 = ldf substitute;
        base2 = ldf substitute in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L1() else L2();
      L0(r12):
        return r12;
      L1():
        substitute1 = ldf substitute in base;
        r13 = dyn substitute1(<sym x.factor>);
        goto L0(r13);
      L2():
        r11 = dyn base2(<sym x.factor>);
        goto L0(r11);
      };
      r15 = dyn deparse2(p4);
      return r15;
    };
    goto L9(p5);
  L9(xlab_orDefault):
    st xlab = xlab_orDefault;
    ylab_isMissing = missing.0(ylab);
    if ylab_isMissing then L10() else L11(ylab);
  L10():
    p6 = prom<V +>{
      ylabel = ld ylabel;
      ylabel1 = force? ylabel;
      checkMissing(ylabel1);
      return ylabel1;
    };
    goto L11(p6);
  L11(ylab_orDefault):
    st ylab = ylab_orDefault;
    ylim_isMissing = missing.0(ylim);
    if ylim_isMissing then L12() else L13(ylim);
  L12():
    p7 = prom<V +>{
      sym3 = ldf range;
      base3 = ldf range in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r19):
      return r19;
    L1():
      cells = ld cells;
      cells1 = force? cells;
      checkMissing(cells1);
      range = ldf range in base;
      r20 = dyn range(cells1, TRUE);
      goto L0(r20);
    L2():
      r18 = dyn base3[, `na.rm`](<sym cells>, TRUE);
      goto L0(r18);
    };
    goto L13(p7);
  L13(ylim_orDefault):
    st ylim = ylim_orDefault;
    lty_isMissing = missing.0(lty);
    if lty_isMissing then L14() else L15(lty);
  L14():
    p8 = prom<V +>{
      nc = ld nc;
      nc1 = force? nc;
      checkMissing(nc1);
      r22 = `:`(nc1, 1.0);
      return r22;
    };
    goto L15(p8);
  L15(lty_orDefault):
    st lty = lty_orDefault;
    col_isMissing = missing.0(col);
    if col_isMissing then L16(1.0) else L16(col);
  L16(col_orDefault):
    st col = col_orDefault;
    pch_isMissing = missing.0(pch);
    if pch_isMissing then L17() else L18(pch);
  L17():
    p9 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r25):
      return r25;
    L1():
      letters = ld letters;
      letters1 = force? letters;
      checkMissing(letters1);
      c1 = ldf c in base;
      r26 = dyn c1(<int 1, 2, 3, 4, 5, 6, 7, 8, 9>, 0.0, letters1);
      goto L0(r26);
    L2():
      r24 = dyn base4(<lang `:`(1, 9.0)>, 0.0, <sym letters>);
      goto L0(r24);
    };
    goto L18(p9);
  L18(pch_orDefault):
    st pch = pch_orDefault;
    xpd_isMissing = missing.0(xpd);
    if xpd_isMissing then L19(NULL) else L19(xpd);
  L19(xpd_orDefault):
    st xpd = xpd_orDefault;
    leg_bg_isMissing = missing.0(leg_bg);
    if leg_bg_isMissing then L20() else L21(leg_bg);
  L20():
    p10 = prom<V +>{
      par = ldf par;
      r28 = dyn par("bg");
      return r28;
    };
    goto L21(p10);
  L21(leg_bg_orDefault):
    st `leg.bg` = leg_bg_orDefault;
    leg_bty_isMissing = missing.0(leg_bty);
    if leg_bty_isMissing then L22("n") else L22(leg_bty);
  L22(leg_bty_orDefault):
    st `leg.bty` = leg_bty_orDefault;
    xtick_isMissing = missing.0(xtick);
    if xtick_isMissing then L23(FALSE) else L23(xtick);
  L23(xtick_orDefault):
    st xtick = xtick_orDefault;
    xaxt_isMissing = missing.0(xaxt);
    if xaxt_isMissing then L24() else L25(xaxt);
  L24():
    p11 = prom<V +>{
      par1 = ldf par;
      r30 = dyn par1("xaxt");
      return r30;
    };
    goto L25(p11);
  L25(xaxt_orDefault):
    st xaxt = xaxt_orDefault;
    axes_isMissing = missing.0(axes);
    if axes_isMissing then L26(TRUE) else L26(axes);
  L26(axes_orDefault):
    st axes = axes_orDefault;
    st `...` = ddd;
    paste = ldf paste;
    check L71() else D0();
  D0():
    deopt 1 [];
  L71():
    p13 = prom<V +>{
      deparse3 = ldf deparse1;
      p12 = prom<V +>{
        sym5 = ldf substitute;
        base5 = ldf substitute in base;
        guard5 = `==`.4(sym5, base5);
        if guard5 then L1() else L2();
      L0(r33):
        return r33;
      L1():
        substitute2 = ldf substitute in base;
        r34 = dyn substitute2(<sym fun>);
        goto L0(r34);
      L2():
        r32 = dyn base5(<sym fun>);
        goto L0(r32);
      };
      r36 = dyn deparse3(p12);
      return r36;
    };
    p15 = prom<V +>{
      deparse4 = ldf deparse1;
      p14 = prom<V +>{
        sym6 = ldf substitute;
        base6 = ldf substitute in base;
        guard6 = `==`.4(sym6, base6);
        if guard6 then L1() else L2();
      L0(r39):
        return r39;
      L1():
        substitute3 = ldf substitute in base;
        r40 = dyn substitute3(<sym response>);
        goto L0(r40);
      L2():
        r38 = dyn base6(<sym response>);
        goto L0(r38);
      };
      r42 = dyn deparse4(p14);
      return r42;
    };
    r44 = dyn paste(p13, "of ", p15);
    check L72() else D1();
  D1():
    deopt 5 [r44];
  L72():
    st ylabel = r44;
    match_arg = ldf `match.arg`;
    check L73() else D2();
  D2():
    deopt 8 [];
  L73():
    p16 = prom<V +>{
      type1 = ld type;
      type2 = force? type1;
      checkMissing(type2);
      return type2;
    };
    r46 = dyn match_arg(p16);
    check L74() else D3();
  D3():
    deopt 10 [r46];
  L74():
    st type = r46;
    tapply = ldf tapply;
    check L75() else D4();
  D4():
    deopt 13 [];
  L75():
    p17 = prom<V +>{
      response1 = ld response;
      response2 = force? response1;
      checkMissing(response2);
      return response2;
    };
    p18 = prom<V +>{
      sym7 = ldf list;
      base7 = ldf list in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r49):
      return r49;
    L1():
      x_factor1 = ld `x.factor`;
      x_factor2 = force? x_factor1;
      checkMissing(x_factor2);
      trace_factor1 = ld `trace.factor`;
      trace_factor2 = force? trace_factor1;
      checkMissing(trace_factor2);
      list = ldf list in base;
      r50 = dyn list(x_factor2, trace_factor2);
      goto L0(r50);
    L2():
      r48 = dyn base7(<sym x.factor>, <sym trace.factor>);
      goto L0(r48);
    };
    p19 = prom<V +>{
      fun1 = ld fun;
      fun2 = force? fun1;
      checkMissing(fun2);
      return fun2;
    };
    r53 = dyn tapply(p17, p18, p19);
    check L76() else D5();
  D5():
    deopt 17 [r53];
  L76():
    st cells = r53;
    nrow = ldf nrow;
    check L77() else D6();
  D6():
    deopt 20 [];
  L77():
    p20 = prom<V +>{
      cells2 = ld cells;
      cells3 = force? cells2;
      checkMissing(cells3);
      return cells3;
    };
    r55 = dyn nrow(p20);
    check L78() else D7();
  D7():
    deopt 22 [r55];
  L78():
    st nr = r55;
    ncol = ldf ncol;
    check L79() else D8();
  D8():
    deopt 25 [];
  L79():
    p21 = prom<V +>{
      cells4 = ld cells;
      cells5 = force? cells4;
      checkMissing(cells5);
      return cells5;
    };
    r57 = dyn ncol(p21);
    check L80() else D9();
  D9():
    deopt 27 [r57];
  L80():
    st nc = r57;
    nr = ld nr;
    check L81() else D10();
  D10():
    deopt 30 [1, nr];
  L81():
    nr1 = force? nr;
    checkMissing(nr1);
    r58 = `:`(1, nr1);
    st xvals = r58;
    is_ordered = ldf `is.ordered`;
    check L82() else D11();
  D11():
    deopt 35 [];
  L82():
    p22 = prom<V +>{
      x_factor3 = ld `x.factor`;
      x_factor4 = force? x_factor3;
      checkMissing(x_factor4);
      return x_factor4;
    };
    r60 = dyn is_ordered(p22);
    check L83() else D12();
  D12():
    deopt 37 [r60];
  L83():
    c2 = `as.logical`(r60);
    if c2 then L84() else L27();
  L27():
    goto L32();
  L32():
    rownames = ldf rownames;
    check L104() else D25();
  L84():
    getOption = ldf getOption;
    check L85() else D13();
  D13():
    deopt 39 [];
  D25():
    deopt 77 [];
  L85():
    r61 = dyn getOption("warn");
    check L86() else D14();
  L104():
    p26 = prom<V +>{
      cells6 = ld cells;
      cells7 = force? cells6;
      checkMissing(cells7);
      return cells7;
    };
    r76 = dyn rownames(p26);
    check L105() else D26();
  D14():
    deopt 41 [r61];
  D26():
    deopt 79 [r76];
  L86():
    st wn = r61;
    options = ldf options;
    check L87() else D15();
  L105():
    st xlabs = r76;
    colnames = ldf colnames;
    check L106() else D27();
  D15():
    deopt 44 [];
  D27():
    deopt 82 [];
  L87():
    p23 = prom<V +>{
      return -1.0;
    };
    r63 = dyn options[warn](p23);
    check L88() else D16();
  L106():
    p27 = prom<V +>{
      cells8 = ld cells;
      cells9 = force? cells8;
      checkMissing(cells9);
      return cells9;
    };
    r78 = dyn colnames(p27);
    check L107() else D28();
  D16():
    deopt 47 [r63];
  D28():
    deopt 84 [r78];
  L88():
    sym8 = ldf `as.numeric`;
    base8 = ldf `as.numeric` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L89() else L90();
  L107():
    st ylabs = r78;
    sym10 = ldf max;
    base10 = ldf max in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L108() else L109();
  L28(r65):
    st xnm = r65;
    options1 = ldf options;
    check L94() else D20();
  L33(r80):
    st nch = r80;
    sym11 = ldf `is.null`;
    base11 = ldf `is.null` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L113() else L114();
  L89():
    levels = ldf levels;
    check L91() else D17();
  L90():
    r64 = dyn base8(<lang levels(x.factor)>);
    goto L28(r64);
  L108():
    sapply = ldf sapply;
    check L110() else D29();
  L109():
    r79 = dyn base10(<lang sapply(ylabs, nchar, type="width")>);
    goto L33(r79);
  D17():
    deopt 51 [];
  D20():
    deopt 58 [];
  D29():
    deopt 89 [];
  L34(r86):
    c5 = `as.logical`(r86);
    if c5 then L116() else L35();
  L91():
    p24 = prom<V +>{
      x_factor5 = ld `x.factor`;
      x_factor6 = force? x_factor5;
      checkMissing(x_factor6);
      return x_factor6;
    };
    r67 = dyn levels(p24);
    check L92() else D18();
  L94():
    p25 = prom<V +>{
      wn = ld wn;
      wn1 = force? wn;
      checkMissing(wn1);
      return wn1;
    };
    r70 = dyn options1[warn](p25);
    check L95() else D21();
  L110():
    p28 = prom<V +>{
      ylabs = ld ylabs;
      ylabs1 = force? ylabs;
      checkMissing(ylabs1);
      return ylabs1;
    };
    p29 = prom<V +>{
      nchar = ld nchar;
      nchar1 = force? nchar;
      checkMissing(nchar1);
      return nchar1;
    };
    r83 = dyn sapply[, , type](p28, p29, "width");
    check L111() else D30();
  L113():
    xlabs = ld xlabs;
    check L115() else D32();
  L114():
    r85 = dyn base11(<sym xlabs>);
    goto L34(r85);
  D18():
    deopt 53 [r67];
  D21():
    deopt 61 [r70];
  D30():
    deopt 94 [r83];
  D32():
    deopt 99 [xlabs];
  L35():
    goto L37();
  L37():
    sym13 = ldf `is.null`;
    base13 = ldf `is.null` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L122() else L123();
  L92():
    as_numeric = ldf `as.numeric` in base;
    r68 = dyn as_numeric(r67);
    check L93() else D19();
  L95():
    sym9 = ldf anyNA;
    base9 = ldf anyNA in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L96() else L97();
  L111():
    max = ldf max in base;
    r84 = dyn max(r83);
    check L112() else D31();
  L115():
    xlabs1 = force? xlabs;
    checkMissing(xlabs1);
    c4 = `==`(xlabs1, NULL);
    goto L34(c4);
  L116():
    sym12 = ldf `as.character`;
    base12 = ldf `as.character` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L117() else L118();
  D19():
    deopt 55 [r68];
  D31():
    deopt 96 [r84];
  L29(r72):
    r74 = `!`(r72);
    c3 = `as.logical`(r74);
    if c3 then L100() else L30();
  L36(r88):
    st xlabs = r88;
    goto L37();
  L38(r92):
    c7 = `as.logical`(r92);
    if c7 then L125() else L39();
  L93():
    goto L28(r68);
  L96():
    xnm = ld xnm;
    check L98() else D22();
  L97():
    r71 = dyn base9(<sym xnm>);
    goto L29(r71);
  L112():
    goto L33(r84);
  L117():
    xvals = ld xvals;
    check L119() else D33();
  L118():
    r87 = dyn base12(<sym xvals>);
    goto L36(r87);
  L122():
    ylabs2 = ld ylabs;
    check L124() else D35();
  L123():
    r91 = dyn base13(<sym ylabs>);
    goto L38(r91);
  D22():
    deopt 64 [xnm];
  D33():
    deopt 104 [xvals];
  D35():
    deopt 112 [ylabs2];
  L30():
    goto L31(NULL);
  L31(xnm4):
    goto L32();
  L39():
    goto L41();
  L41():
    sym15 = ldf range;
    base15 = ldf range in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L131() else L132();
  L98():
    xnm1 = force? xnm;
    checkMissing(xnm1);
    anyNA = ldf anyNA in base;
    r73 = dyn anyNA(xnm1);
    check L99() else D23();
  L100():
    xnm2 = ld xnm;
    check L101() else D24();
  L119():
    xvals1 = force? xvals;
    checkMissing(xvals1);
    as_character = ldf `as.character` in base;
    r89 = dyn as_character(xvals1);
    check L120() else D34();
  L124():
    ylabs3 = force? ylabs2;
    checkMissing(ylabs3);
    c6 = `==`(ylabs3, NULL);
    goto L38(c6);
  L125():
    sym14 = ldf `as.character`;
    base14 = ldf `as.character` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L126() else L127();
  D23():
    deopt 67 [r73];
  D24():
    deopt 69 [xnm2];
  D34():
    deopt 107 [r89];
  L40(r94):
    st ylabs = r94;
    goto L41();
  L42(r99):
    st xlim = r99;
    xlim = ld xlim;
    check L135() else D40();
  L99():
    goto L29(r73);
  L101():
    xnm3 = force? xnm2;
    checkMissing(xnm3);
    st xvals = xnm3;
    goto L31(xnm3);
  L120():
    goto L36(r89);
  L126():
    nc2 = ld nc;
    check L128() else D36();
  L127():
    r93 = dyn base14(<lang `:`(1, nc)>);
    goto L40(r93);
  L131():
    xvals2 = ld xvals;
    check L133() else D38();
  L132():
    r98 = dyn base15(<sym xvals>);
    goto L42(r98);
  D36():
    deopt 118 [1, nc2];
  D38():
    deopt 128 [xvals2];
  D40():
    deopt 133 [xlim];
  L128():
    nc3 = force? nc2;
    checkMissing(nc3);
    r95 = `:`(1, nc3);
    as_character1 = ldf `as.character` in base;
    r96 = dyn as_character1(r95);
    check L129() else D37();
  L133():
    xvals3 = force? xvals2;
    checkMissing(xvals3);
    range1 = ldf range in base;
    r100 = dyn range1(xvals3);
    check L134() else D39();
  L135():
    xlim1 = force? xlim;
    checkMissing(xlim1);
    c8 = `is.object`(xlim1);
    if c8 then L136() else L137(xlim1);
  D37():
    deopt 122 [r96];
  D39():
    deopt 131 [r100];
  L43(dx1):
    diff = ldf diff;
    check L139() else D41();
  L129():
    goto L40(r96);
  L134():
    goto L42(r100);
  L136():
    dr = tryDispatchBuiltin.1("[", xlim1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L138() else L137(dr);
  L137(xlim3):
    __ = ldf `[` in base;
    r101 = dyn __(xlim3, 2);
    goto L43(r101);
  D41():
    deopt 139 [dx1, 0.05];
  L138():
    dx = getTryDispatchBuiltinValue(dr);
    goto L43(dx);
  L139():
    p30 = prom<V +>{
      xlim4 = ld xlim;
      xlim5 = force? xlim4;
      checkMissing(xlim5);
      return xlim5;
    };
    r103 = dyn diff(p30);
    check L140() else D42();
  D42():
    deopt 141 [dx1, 0.05, r103];
  L140():
    r104 = `*`(0.05, r103);
    r105 = `+`(dx1, r104);
    st xleg = r105;
    xlim6 = ld xlim;
    check L141() else D43();
  D43():
    deopt 145 [xlim6];
  L141():
    xlim7 = force? xlim6;
    checkMissing(xlim7);
    sym16 = ldf c;
    base16 = ldf c in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L142() else L143();
  L44(xlim10, r107):
    diff1 = ldf diff;
    check L151() else D49();
  L142():
    nr2 = ld nr;
    check L144() else D44();
  L143():
    r106 = dyn base16(<lang `/`(`-`(0.2), nr)>, <lang if(legend, `+`(0.2, `*`(0.02, nch)), `/`(0.2, nr))>);
    goto L44(xlim7, r106);
  D44():
    deopt 149 [xlim7, -0.2, nr2];
  D49():
    deopt 166 [xlim10, r107];
  L144():
    nr3 = force? nr2;
    checkMissing(nr3);
    r108 = `/`(-0.2, nr3);
    legend1 = ld legend;
    check L145() else D45();
  L151():
    p31 = prom<V +>{
      xlim14 = ld xlim;
      xlim15 = force? xlim14;
      checkMissing(xlim15);
      return xlim15;
    };
    r115 = dyn diff1(p31);
    check L152() else D50();
  D45():
    deopt 152 [xlim7, legend1];
  D50():
    deopt 168 [xlim10, r107, r115];
  L145():
    legend2 = force? legend1;
    checkMissing(legend2);
    c9 = `as.logical`(legend2);
    if c9 then L146() else L45();
  L152():
    r116 = `*`(r107, r115);
    r117 = `+`(xlim10, r116);
    st xlim = r117;
    dev_hold = ldf `dev.hold`;
    check L153() else D51();
  D51():
    deopt 173 [];
  L45():
    nr4 = ld nr;
    check L149() else D47();
  L46(xlim13, r111):
    c10 = ldf c in base;
    r113 = dyn c10(r108, r111);
    check L150() else D48();
  L146():
    nch = ld nch;
    check L147() else D46();
  L153():
    r118 = dyn dev_hold();
    check L154() else D52();
  D46():
    deopt 156 [xlim7, 0.2, 0.02, nch];
  D47():
    deopt 161 [xlim7, 0.2, nr4];
  D48():
    deopt 165 [xlim13, r113];
  D52():
    deopt 174 [r118];
  L147():
    nch1 = force? nch;
    checkMissing(nch1);
    r109 = `*`(0.02, nch1);
    r110 = `+`(0.2, r109);
    goto L46(xlim7, r110);
  L149():
    nr5 = force? nr4;
    checkMissing(nr5);
    r112 = `/`(0.2, nr5);
    goto L46(xlim7, r112);
  L150():
    goto L44(xlim13, r113);
  L154():
    sym17 = ldf `on.exit`;
    base17 = ldf `on.exit` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L155() else L156();
  L47():
    matplot = ldf matplot;
    check L157() else D53();
  L155():
    on_exit = ldf `on.exit` in base;
    r121 = dyn on_exit(<lang dev.flush()>);
    goto L47();
  L156():
    r119 = dyn base17(<lang dev.flush()>);
    goto L47();
  D53():
    deopt 179 [];
  L157():
    p32 = prom<V +>{
      xvals4 = ld xvals;
      xvals5 = force? xvals4;
      checkMissing(xvals5);
      return xvals5;
    };
    p33 = prom<V +>{
      cells10 = ld cells;
      cells11 = force? cells10;
      checkMissing(cells11);
      return cells11;
    };
    ddd1 = ld `...`;
    p34 = prom<V +>{
      type3 = ld type;
      type4 = force? type3;
      checkMissing(type4);
      return type4;
    };
    p35 = prom<V +>{
      xlim16 = ld xlim;
      xlim17 = force? xlim16;
      checkMissing(xlim17);
      return xlim17;
    };
    p36 = prom<V +>{
      ylim1 = ld ylim;
      ylim2 = force? ylim1;
      checkMissing(ylim2);
      return ylim2;
    };
    p37 = prom<V +>{
      xlab1 = ld xlab;
      xlab2 = force? xlab1;
      checkMissing(xlab2);
      return xlab2;
    };
    p38 = prom<V +>{
      ylab1 = ld ylab;
      ylab2 = force? ylab1;
      checkMissing(ylab2);
      return ylab2;
    };
    p39 = prom<V +>{
      axes1 = ld axes;
      axes2 = force? axes1;
      checkMissing(axes2);
      return axes2;
    };
    p40 = prom<V +>{
      col1 = ld col;
      col2 = force? col1;
      checkMissing(col2);
      return col2;
    };
    p41 = prom<V +>{
      lty1 = ld lty;
      lty2 = force? lty1;
      checkMissing(lty2);
      return lty2;
    };
    p42 = prom<V +>{
      pch1 = ld pch;
      pch2 = force? pch1;
      checkMissing(pch2);
      return pch2;
    };
    r133 = dyn matplot[, , `...`, type, xlim, ylim, xlab, ylab, axes, xaxt, col, lty, pch](p32, p33, ddd1, p34, p35, p36, p37, p38, p39, "n", p40, p41, p42);
    check L158() else D54();
  D54():
    deopt 203 [r133];
  L158():
    axes3 = ld axes;
    check L159() else D55();
  D55():
    deopt 204 [axes3];
  L159():
    axes4 = force? axes3;
    checkMissing(axes4);
    c11 = `as.logical`(axes4);
    if c11 then L160() else L48(c11);
  L48(c13):
    c17 = `as.logical`(c13);
    if c17 then L163() else L49();
  L160():
    xaxt1 = ld xaxt;
    check L161() else D56();
  D56():
    deopt 206 [c11, xaxt1];
  L49():
    goto L50();
  L50():
    legend3 = ld legend;
    check L167() else D59();
  L161():
    xaxt2 = force? xaxt1;
    checkMissing(xaxt2);
    r134 = `!=`(xaxt2, "n");
    c14 = `as.logical`(r134);
    c15 = `&&`(c11, c14);
    goto L48(c15);
  L163():
    r135 = clos inner297543729;
    st axisInt = r135;
    axisInt = ldf axisInt;
    check L164() else D57();
  D57():
    deopt 215 [];
  D59():
    deopt 230 [legend3];
  L164():
    p43 = prom<V +>{
      xvals6 = ld xvals;
      xvals7 = force? xvals6;
      checkMissing(xvals7);
      return xvals7;
    };
    p44 = prom<V +>{
      xlabs2 = ld xlabs;
      xlabs3 = force? xlabs2;
      checkMissing(xlabs3);
      return xlabs3;
    };
    p45 = prom<V +>{
      xtick1 = ld xtick;
      xtick2 = force? xtick1;
      checkMissing(xtick2);
      return xtick2;
    };
    p46 = prom<V +>{
      xaxt3 = ld xaxt;
      xaxt4 = force? xaxt3;
      checkMissing(xaxt4);
      return xaxt4;
    };
    ddd2 = ld `...`;
    r140 = dyn axisInt[side, at, labels, tick, xaxt, `...`](1.0, p43, p44, p45, p46, ddd2);
    check L165() else D58();
  L167():
    legend4 = force? legend3;
    checkMissing(legend4);
    c18 = `as.logical`(legend4);
    if c18 then L168() else L51();
  D58():
    deopt 227 [r140];
  L51():
    goto L69();
  L69():
    sym25 = ldf invisible;
    base25 = ldf invisible in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L238() else L239();
  L165():
    goto L50();
  L168():
    diff2 = ldf diff;
    check L169() else D60();
  D60():
    deopt 233 [];
  L70(r220):
    popenv;
    return r220;
  L169():
    p47 = prom<V +>{
      ylim3 = ld ylim;
      ylim4 = force? ylim3;
      checkMissing(ylim4);
      return ylim4;
    };
    r143 = dyn diff2(p47);
    check L170() else D61();
  L238():
    invisible = ldf invisible in base;
    r221 = dyn invisible();
    check L240() else D93();
  L239():
    r219 = dyn base25();
    goto L70(r219);
  D61():
    deopt 235 [r143];
  D93():
    deopt 376 [r221];
  L170():
    st yrng = r143;
    ylim5 = ld ylim;
    check L171() else D62();
  L240():
    goto L70(r221);
  D62():
    deopt 237 [ylim5];
  L171():
    ylim6 = force? ylim5;
    checkMissing(ylim6);
    c19 = `is.object`(ylim6);
    if c19 then L172() else L173(ylim6);
  L52(dx3):
    yrng = ld yrng;
    check L175() else D63();
  L172():
    dr2 = tryDispatchBuiltin.1("[", ylim6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L174() else L173(dr2);
  L173(ylim8):
    __1 = ldf `[` in base;
    r144 = dyn __1(ylim8, 2);
    goto L52(r144);
  D63():
    deopt 242 [dx3, 0.1, yrng];
  L174():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L52(dx2);
  L175():
    yrng1 = force? yrng;
    checkMissing(yrng1);
    r145 = `*`(0.1, yrng1);
    r146 = `-`(dx3, r145);
    st yleg = r146;
    sym18 = ldf `is.null`;
    base18 = ldf `is.null` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L176() else L177();
  L53(r148):
    r149 = `!`(r148);
    c21 = `as.logical`(r149);
    if c21 then L54(c21) else L179();
  L176():
    xpd1 = ld xpd;
    check L178() else D64();
  L177():
    r147 = dyn base18(<sym xpd>);
    goto L53(r147);
  D64():
    deopt 248 [xpd1];
  L54(c22):
    c48 = `as.logical`(c22);
    if c48 then L192() else L58();
  L178():
    xpd2 = force? xpd1;
    checkMissing(xpd2);
    c20 = `==`(xpd2, NULL);
    goto L53(c20);
  L179():
    par2 = ldf par;
    check L180() else D65();
  D65():
    deopt 253 [c21];
  L58():
    goto L60();
  L60():
    text = ldf text;
    check L198() else D72();
  L180():
    r150 = dyn par2("xpd");
    check L181() else D66();
  L192():
    par3 = ldf par;
    check L193() else D70();
  D66():
    deopt 255 [c21, r150];
  D70():
    deopt 274 [];
  D72():
    deopt 285 [];
  L181():
    st `xpd.` = r150;
    sym19 = ldf `is.na`;
    base19 = ldf `is.na` in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L182() else L183();
  L193():
    p48 = prom<V +>{
      xpd3 = ld xpd;
      xpd4 = force? xpd3;
      checkMissing(xpd4);
      return xpd4;
    };
    r157 = dyn par3[xpd](p48);
    check L194() else D71();
  L198():
    p49 = prom<V +>{
      xleg = ld xleg;
      xleg1 = force? xleg;
      checkMissing(xleg1);
      return xleg1;
    };
    p50 = prom<V +>{
      ylim9 = ld ylim;
      ylim10 = force? ylim9;
      checkMissing(ylim10);
      c49 = `is.object`(ylim10);
      if c49 then L1() else L2(ylim10);
    L0(dx5):
      yrng2 = ld yrng;
      yrng3 = force? yrng2;
      checkMissing(yrng3);
      r164 = `*`(0.05, yrng3);
      r165 = `-`(dx5, r164);
      return r165;
    L1():
      dr4 = tryDispatchBuiltin.1("[", ylim10);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(ylim12):
      __2 = ldf `[` in base;
      r163 = dyn __2(ylim12, 2);
      goto L0(r163);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p52 = prom<V +>{
      paste1 = ldf paste;
      p51 = prom<V +>{
        trace_label1 = ld `trace.label`;
        trace_label2 = force? trace_label1;
        checkMissing(trace_label2);
        return trace_label2;
      };
      r168 = dyn paste1("  ", p51);
      return r168;
    };
    r170 = dyn text[, , , adj](p49, p50, p52, 0.0);
    check L199() else D73();
  D71():
    deopt 277 [r157];
  D73():
    deopt 291 [r170];
  L55(c26, r152):
    r154 = `!`(r152);
    c27 = `as.logical`(r154);
    if c27 then L186() else L56(c26, c27);
  L182():
    xpd_ = ld `xpd.`;
    check L184() else D67();
  L183():
    r151 = dyn base19(<sym xpd.>);
    goto L55(c21, r151);
  L194():
    st op = r157;
    sym20 = ldf `on.exit`;
    base20 = ldf `on.exit` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L195() else L196();
  L199():
    fixed1 = ld fixed;
    check L200() else D74();
  D67():
    deopt 259 [c21, xpd_];
  D74():
    deopt 292 [fixed1];
  L56(c30, c31):
    c36 = `as.logical`(c31);
    if c36 then L189() else L57(c30, c36);
  L59(r159):
    goto L60();
  L184():
    xpd_1 = force? xpd_;
    checkMissing(xpd_1);
    is_na = ldf `is.na` in base;
    r153 = dyn is_na(xpd_1);
    check L185() else D68();
  L186():
    xpd_2 = ld `xpd.`;
    check L187() else D69();
  L195():
    on_exit1 = ldf `on.exit` in base;
    r160 = dyn on_exit1(<lang par(op)>, TRUE);
    goto L59(r160);
  L196():
    r158 = dyn base20[, add](<lang par(op)>, TRUE);
    goto L59(r158);
  L200():
    fixed2 = force? fixed1;
    checkMissing(fixed2);
    r171 = `!`(fixed2);
    c50 = `as.logical`(r171);
    if c50 then L201() else L61();
  D68():
    deopt 262 [c21, r153];
  D69():
    deopt 264 [c26, c27, xpd_2];
  L57(c39, c40):
    c45 = `as.logical`(c40);
    c46 = `||`(c39, c45);
    goto L54(c46);
  L61():
    goto L68();
  L68():
    legend5 = ldf legend;
    check L235() else D91();
  L185():
    goto L55(c21, r153);
  L187():
    xpd_3 = force? xpd_2;
    checkMissing(xpd_3);
    r155 = `!`(xpd_3);
    c32 = `as.logical`(r155);
    c33 = `&&`(c27, c32);
    goto L56(c26, c33);
  L189():
    st xpd = TRUE;
    c41 = `as.logical`(TRUE);
    c42 = `&&`(c36, c41);
    goto L57(c30, c42);
  L201():
    sort_list = ldf `sort.list`;
    check L202() else D75();
  D75():
    deopt 296 [];
  D91():
    deopt 355 [];
  L202():
    p53 = prom<V +>{
      cells12 = ld cells;
      cells13 = force? cells12;
      checkMissing(cells13);
      c51 = `is.object`(cells13);
      if c51 then L1() else L2();
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", cells13);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2();
    L2():
      nr6 = ld nr;
      nr7 = force? nr6;
      __3 = ldf `[` in base;
      r172 = dyn __3(cells13, nr7, <missing>);
      goto L0(r172);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r174 = dyn sort_list[, decreasing](p53, TRUE);
    check L203() else D76();
  L235():
    p54 = prom<V +>{
      xleg2 = ld xleg;
      xleg3 = force? xleg2;
      checkMissing(xleg3);
      return xleg3;
    };
    p55 = prom<V +>{
      yleg = ld yleg;
      yleg1 = force? yleg;
      checkMissing(yleg1);
      return yleg1;
    };
    p56 = prom<V +>{
      ylabs8 = ld ylabs;
      ylabs9 = force? ylabs8;
      checkMissing(ylabs9);
      return ylabs9;
    };
    p57 = prom<V +>{
      col12 = ld col;
      col13 = force? col12;
      checkMissing(col13);
      return col13;
    };
    p60 = prom<V +>{
      _in_ = ldf `%in%`;
      p58 = prom<V +>{
        type5 = ld type;
        type6 = force? type5;
        checkMissing(type6);
        return type6;
      };
      p59 = prom<V +>{
        sym23 = ldf c;
        base23 = ldf c in base;
        guard23 = `==`.4(sym23, base23);
        if guard23 then L1() else L2();
      L0(r203):
        return r203;
      L1():
        c56 = ldf c in base;
        r204 = dyn c56("p", "b");
        goto L0(r204);
      L2():
        r202 = dyn base23("p", "b");
        goto L0(r202);
      };
      r206 = dyn _in_(p58, p59);
      c57 = `as.logical`(r206);
      if c57 then L1() else L0();
    L0():
      invisible.0();
      return NULL;
    L1():
      pch7 = ld pch;
      pch8 = force? pch7;
      checkMissing(pch8);
      return pch8;
    };
    p63 = prom<V +>{
      _in_1 = ldf `%in%`;
      p61 = prom<V +>{
        type7 = ld type;
        type8 = force? type7;
        checkMissing(type8);
        return type8;
      };
      p62 = prom<V +>{
        sym24 = ldf c;
        base24 = ldf c in base;
        guard24 = `==`.4(sym24, base24);
        if guard24 then L1() else L2();
      L0(r210):
        return r210;
      L1():
        c58 = ldf c in base;
        r211 = dyn c58("l", "b");
        goto L0(r211);
      L2():
        r209 = dyn base24("l", "b");
        goto L0(r209);
      };
      r213 = dyn _in_1(p61, p62);
      c59 = `as.logical`(r213);
      if c59 then L1() else L0();
    L0():
      invisible.0();
      return NULL;
    L1():
      lty12 = ld lty;
      lty13 = force? lty12;
      checkMissing(lty13);
      return lty13;
    };
    p64 = prom<V +>{
      leg_bty1 = ld `leg.bty`;
      leg_bty2 = force? leg_bty1;
      checkMissing(leg_bty2);
      return leg_bty2;
    };
    p65 = prom<V +>{
      leg_bg1 = ld `leg.bg`;
      leg_bg2 = force? leg_bg1;
      checkMissing(leg_bg2);
      return leg_bg2;
    };
    r217 = dyn legend5[, , legend, col, pch, lty, bty, bg](p54, p55, p56, p57, p60, p63, p64, p65);
    check L236() else D92();
  D76():
    deopt 300 [r174];
  D92():
    deopt 370 [r217];
  L203():
    st ord = r174;
    ylabs4 = ld ylabs;
    check L204() else D77();
  L236():
    goto L69();
  D77():
    deopt 302 [ylabs4];
  L204():
    ylabs5 = force? ylabs4;
    checkMissing(ylabs5);
    c52 = `is.object`(ylabs5);
    if c52 then L205() else L206(ylabs5);
  L62(dx9):
    st ylabs = dx9;
    lty3 = ld lty;
    check L209() else D79();
  L205():
    dr8 = tryDispatchBuiltin.1("[", ylabs5);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L207() else L206(dr8);
  L206(ylabs7):
    ord = ld ord;
    check L208() else D78();
  D78():
    deopt 304 [ylabs7, ord];
  D79():
    deopt 308 [lty3];
  L207():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L62(dx8);
  L208():
    ord1 = force? ord;
    __4 = ldf `[` in base;
    r175 = dyn __4(ylabs7, ord1);
    goto L62(r175);
  L209():
    lty4 = force? lty3;
    checkMissing(lty4);
    c53 = `is.object`(lty4);
    if c53 then L210() else L211(lty4);
  L63(dx11):
    st lty = dx11;
    col3 = ld col;
    check L219() else D84();
  L210():
    dr10 = tryDispatchBuiltin.1("[", lty4);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L212() else L211(dr10);
  L211(lty6):
    ord2 = ld ord;
    check L213() else D80();
  D80():
    deopt 312 [lty6, 1.0, ord2];
  D84():
    deopt 327 [col3];
  L212():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L63(dx10);
  L213():
    ord3 = force? ord2;
    checkMissing(ord3);
    r176 = `-`(ord3, 1.0);
    sym21 = ldf length;
    base21 = ldf length in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L214() else L215();
  L219():
    col4 = force? col3;
    checkMissing(col4);
    c54 = `is.object`(col4);
    if c54 then L220() else L221(col4);
  L64(lty9, r180, r181):
    __5 = ldf `%%` in base;
    r183 = dyn __5(r176, r181);
    check L218() else D83();
  L65(dx13):
    st col = dx13;
    pch3 = ld pch;
    check L229() else D89();
  L214():
    lty10 = ld lty;
    check L216() else D81();
  L215():
    r179 = dyn base21(<sym lty>);
    goto L64(lty6, 1.0, r179);
  L220():
    dr12 = tryDispatchBuiltin.1("[", col4);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L222() else L221(dr12);
  L221(col6):
    ord4 = ld ord;
    check L223() else D85();
  D81():
    deopt 318 [lty6, 1.0, lty10];
  D83():
    deopt 323 [lty9, r180, r183];
  D85():
    deopt 331 [col6, 1.0, ord4];
  D89():
    deopt 346 [pch3];
  L216():
    lty11 = force? lty10;
    checkMissing(lty11);
    length = ldf length in base;
    r182 = dyn length(lty11);
    check L217() else D82();
  L218():
    r184 = `+`(r180, r183);
    __6 = ldf `[` in base;
    r185 = dyn __6(lty9, r184);
    goto L63(r185);
  L222():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L65(dx12);
  L223():
    ord5 = force? ord4;
    checkMissing(ord5);
    r186 = `-`(ord5, 1.0);
    sym22 = ldf length;
    base22 = ldf length in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L224() else L225();
  L229():
    pch4 = force? pch3;
    checkMissing(pch4);
    c55 = `is.object`(pch4);
    if c55 then L230() else L231(pch4);
  D82():
    deopt 321 [lty6, 1.0, r182];
  L66(col9, r190, r191):
    __7 = ldf `%%` in base;
    r193 = dyn __7(r186, r191);
    check L228() else D88();
  L67(dx15):
    st pch = dx15;
    goto L68();
  L217():
    goto L64(lty6, 1.0, r182);
  L224():
    col10 = ld col;
    check L226() else D86();
  L225():
    r189 = dyn base22(<sym col>);
    goto L66(col6, 1.0, r189);
  L230():
    dr14 = tryDispatchBuiltin.1("[", pch4);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L232() else L231(dr14);
  L231(pch6):
    ord6 = ld ord;
    check L233() else D90();
  D86():
    deopt 337 [col6, 1.0, col10];
  D88():
    deopt 342 [col9, r190, r193];
  D90():
    deopt 348 [pch6, ord6];
  L226():
    col11 = force? col10;
    checkMissing(col11);
    length1 = ldf length in base;
    r192 = dyn length1(col11);
    check L227() else D87();
  L228():
    r194 = `+`(r190, r193);
    __8 = ldf `[` in base;
    r195 = dyn __8(col9, r194);
    goto L65(r195);
  L232():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L67(dx14);
  L233():
    ord7 = force? ord6;
    __9 = ldf `[` in base;
    r196 = dyn __9(pch6, ord7);
    goto L67(r196);
  D87():
    deopt 340 [col6, 1.0, r192];
  L227():
    goto L66(col6, 1.0, r192);
  }
}
fun inner297543729(main, sub, lwd, bg, log, asp, `...`) {
  (reg main:*, reg sub:*, reg lwd:*, reg bg:*, reg log:*, reg asp:*, reg ddd:dots) -+> V { var main:*, var sub:*, var lwd:*, var bg:*, var log:*, var asp:*, var `...`:dots?, reg axis:cls, reg ddd1:dots?, reg r:V |
    mkenv;
    st main = main;
    st sub = sub;
    st lwd = lwd;
    st bg = bg;
    st log = log;
    st asp = asp;
    st `...` = ddd;
    axis = ldf axis;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    ddd1 = ld `...`;
    r = dyn axis[`...`](ddd1);
    check L1() else D1();
  D1():
    deopt 3 [r];
  L1():
    popenv;
    return r;
  }
}