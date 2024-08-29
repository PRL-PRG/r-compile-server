package org.prlprg.ir.type.sexp;

import com.google.common.collect.ForwardingCollection;
import com.google.common.collect.ImmutableList;
import com.google.common.collect.Streams;
import java.util.ArrayList;
import java.util.Collection;
import java.util.List;
import java.util.Objects;
import javax.annotation.Nullable;
import javax.annotation.concurrent.Immutable;
import org.prlprg.ir.type.lattice.BoundedLattice;
import org.prlprg.ir.type.lattice.YesOrMaybe;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/**
 * Set of function signatures, normalized so that more-specific overloads are before less-specific
 * ones, and forms a lattice.
 */
@Immutable
public final class RFunTypeOverloads extends ForwardingCollection<RSignatureType>
    implements BoundedLattice<RFunTypeOverloads> {
  private final ImmutableList<RSignatureType> overloads;

  static final RFunTypeOverloads NONE = new RFunTypeOverloads(ImmutableList.of());

  /**
   * Removes overloads that are subsumed by others from the stream, and sorts them so that overloads
   * with superset (less-specific) parameters are after.
   */
  private static ImmutableList<RSignatureType> normalizeOverloadsWrtSubsuming(
      Collection<RSignatureType> overloads) {
    var list = new ArrayList<>(overloads);

    // Remove overloads that are subsumed by others,
    // first by setting to `null` (so we don't have to handle index weirdness)...
    for (var i = 0; i < list.size(); i++) {
      var o1 = list.get(i);
      if (o1 == null) continue;
      for (var j = 0; j < list.size(); j++) {
        var o2 = list.get(j);
        if (o2 == null || i == j) continue;
        if (o1.subsumes(o2)) {
          list.set(j, null);
        }
      }
    }
    // ...then removing all `null`s.
    list.removeIf(Objects::isNull);

    // Sort so that overloads with superset parameters are after.
    // Ensure the list order is otherwise deterministic for tests/assertions
    // (`normalizeOverloadsWrtSubsuming(normalizeOverloadsWrtSubsuming(x)) =
    // normalizeOverloadsWrtSubsuming(x)`).
    list.sort(
        (o1, o2) -> {
          var o1SupersetsO2 = o1.parametersAreSuperset(o2) == YesOrMaybe.YES;
          var o2SupersetsO1 = o2.parametersAreSuperset(o1) == YesOrMaybe.YES;
          assert !o1SupersetsO2 || !o2SupersetsO1
              : "overloads are supersets of each other, which means they should be equal, which means one should've subsumed the other";
          if (o1SupersetsO2) {
            return 1;
          } else if (o2SupersetsO1) {
            return -1;
          }

          var rawComparison = ((RSignatureTypeImpl) o1).rawCompareTo((RSignatureTypeImpl) o2);
          assert rawComparison != 0 : "overloads are different, but `rawCompareTo` returned 0";
          return rawComparison;
        });
    return ImmutableList.copyOf(list);
  }

  RFunTypeOverloads(Collection<RSignatureType> overloads) {
    this.overloads = normalizeOverloadsWrtSubsuming(overloads);
  }

  /**
   * Returns the most specific overload for the given argument types, or {@code null} if there is
   * none.
   */
  public @Nullable RSignatureType mostSpecific(List<RArgumentType> arguments) {
    return stream().filter(o -> o.matches(arguments)).findFirst().orElse(null);
  }

  @Override
  protected Collection<RSignatureType> delegate() {
    return overloads;
  }

  // region lattice
  @Override
  public boolean isSubsetOf(RFunTypeOverloads other) {
    return other.stream().allMatch(oko -> stream().anyMatch(ko -> ko.subsumes(oko)));
  }

  @Override
  public RFunTypeOverloads unionOf(RFunTypeOverloads other) {
    return new RFunTypeOverloads(
        Streams.concat(
                stream().filter(ko -> other.stream().anyMatch(oko -> oko.subsumes(ko))),
                other.stream().filter(oko -> stream().anyMatch(ko -> ko.subsumes(oko))))
            .toList());
  }

  @Override
  public RFunTypeOverloads intersectionOf(RFunTypeOverloads other) {
    return new RFunTypeOverloads(Streams.concat(stream(), other.stream()).toList());
  }

  // endregion lattice

  // region serialization and deserialization
  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    w.write("(");
    if (size() == 1) {
      p.print(iterator().next());
    } else if (!isEmpty()) {
      w.runIndented(
          () -> {
            for (var overload : this) {
              w.write("\n| ");
              w.runIndented(() -> p.print(overload));
            }
          });
    }
    w.write(")");
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }
  // endregion serialization and deserialization
}
