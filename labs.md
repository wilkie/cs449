---
layout: page
title: Labs
permalink: /labs/
---

## Academic Integrity Statement

All assignment submissions must be the sole work of each individual student. Students may not read or copy another student's solutions or share their own solutions with other students. Students may not review solutions from students who have taken the course in previous years. Submissions that are substantively similar will be considered cheating by all students involved, and as such, students must be mindful not to post their code publicly. Any use of electronics or other resources during an examination will be considered cheating. 

If you have any doubts about whether a particular action may be construed as cheating, ask the instructor for clarification before you do it. The instructor will make the final determination of what is considered cheating.

Cheating in this course will likely result in a grade of F for the course and may be subject to further disciplinary action.

Remember that:

* You will work on all assignments by yourself.
* All assignments will be auto-graded and must be submitted online using [Gradescope](https://www.gradescope.com/)
* All labs are due 11:59pm on the shown due date.
* The late penalty is 10% per day.
* Each student has 5 late days for the semester.
* You can submit any assignment at most 3 days late.
* You may resubmit your work until the deadline, with your most recent submission counting for credit.
* For each assignment, there is a limit on the number of grace days that can be applied, as is indicated in the table below.
* We highly recommend making partial submissions as you go and not waiting until the last (literal) minute to submit. 
You should know that fairly sophisticated plagiarism detection software will be used on the programming assignments.

{% for lab in site.labs %}

{% if lab.solution %}

**Solution**: [{{ lab.title }} Solution]({{site.baseurl }}{{ lab.url }})

{% else %}
# [{{ lab.title }}: {{ lab.subtitle }}]({{ site.baseurl }}{{ lab.url }})

**Released**: {{ lab.released }}

**Due**: {{ lab.due }}

{{ lab.summary }}
{% endif %}

{% endfor %}
