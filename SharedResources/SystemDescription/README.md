# System Description Distribution Workflow

The  system description arxml file provided in this directory includes the communication between all ECUs of Climate Control Advanced. Therefore, this file is required while developing the ECUs. Since each ECU has its own repository and it is a good practice to avoid duplicating the system description in each of these directories, the best approach would be to share this file between the intended reppositories. It's also important to be able to pull any changes to this file in the ECUs repositories

### Extract the SystemDescription folder into its own branch
It is possible to set protection rules for this branch. It can also be extracted in a separate reposiotry. </br>
The following commands need to be executed once in CCA repository:
```pwsh
git subtree split -P SystemDescription -b system-description
git push -u origin system-description
```
### In the ECU repository, add the extracted subtree.
Note that these commands are executed once per ECU repo.
```pwsh
# The use of --squash is important for cleaner history
git subtree add --prefix=SystemDescription  --squash git@github1.vg.vector.int:pnd/cdevops-climate-control-advanced.git system-description
git push
```

### Pull changes when needed from the CCA repository into the ECU repository
```pwsh
git subtree pull --prefix SystemDescription  git@github1.vg.vector.int:pnd/cdevops-climate-control-advanced.git  system-description --squash 
git push
```