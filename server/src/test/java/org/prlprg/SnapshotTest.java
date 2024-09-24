package org.prlprg;


import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.TestInfo;
import org.prlprg.util.ThrowingSupplier;

import javax.annotation.Nullable;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.nio.file.Files;
import java.nio.file.Path;

public abstract class SnapshotTest<T> {
    public static final String SNAPSHOT_BASE_DIR = "src/test/resources";
    public static final String SNAPSHOTS_DIR = "snapshots";
    private TestInfo currentTestInfo = null;

    @BeforeEach
    protected final void setUp(TestInfo testInfo) {
        this.currentTestInfo = testInfo;
    }

    protected void doVerify(String snapshotName, T actual, @Nullable ThrowingSupplier<T> oracle) {
        var snapshotPath = getTestPath(snapshotName);
        T expected = null;

        if (Files.exists(snapshotPath)) {
            try (var is = Files.newInputStream(snapshotPath)) {
                expected = load(is);
            } catch (Exception e) {
                throw new RuntimeException("Unable to load snapshot for %s (file: %s)".formatted(snapshotName, snapshotPath), e);
            }
        } else {
            if (oracle != null) {
                expected = oracle.get();
                try {
                    checkShape(expected);
                } catch (Exception e) {
                    throw new RuntimeException("Corrupted snapshot file: `" + snapshotPath, e);
                }
            } else {
                expected = actual;
                try {
                    checkShape(expected);
                } catch (Exception e) {
                    throw new RuntimeException("Invalid value for snapshot: `" + snapshotName, e);
                }
            }

            try {
                Files.createDirectories(snapshotPath.getParent());
            } catch (IOException e) {
                throw new RuntimeException("Unable to create snapshot path: " + snapshotPath.getParent(), e);
            }

            try (var os = Files.newOutputStream(snapshotPath)) {
                save(expected, os);
            } catch (Exception e) {
                throw new RuntimeException("Unable to save snapshot for %s (file: %s)".formatted(snapshotName, snapshotPath), e);
            }
        }

        checkEqual(expected, actual);
    }

    protected Path getTestPath(String name) {
        var currentClass =
                currentTestInfo.getTestClass().orElseThrow(() -> new IllegalStateException("Unable to get the current test class"));
        var currentMethod =
                currentTestInfo.getTestMethod().orElseThrow(() -> new IllegalStateException("Unable to get the current test method"));

        var packageName = currentClass.getPackageName();
        var className = currentClass.getSimpleName();
        var methodName = currentMethod.getName();

        return Path.of(SNAPSHOT_BASE_DIR, packageName.replace(".", "/"), SNAPSHOTS_DIR, className, methodName + name);
    }

    protected abstract T load(InputStream expected) throws Exception;

    protected abstract void save(T value, OutputStream expected) throws Exception;

    protected abstract void checkEqual(T expected, T actual);

    /**
     * Check the shape of the value. This method should throw an exception if the shape of the value is not as expected.
     * <p>
     * This will be called on both the expected and actual values.
     * It provides a way to prevent storing a malformed value in the snapshot file.
     *
     * @param value to check if it has the expected shape
     */
    protected void checkShape(T value) {
    }
}